/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* tmp = nullptr;
        if(head->next->next == nullptr){
            tmp = head;
            head = head->next;
            head->next = tmp;
            tmp->next = nullptr;
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = head->next;
        
        
        while(curr != nullptr && next != nullptr){
            ListNode* nextTonextNode = next->next;
            next->next = curr;
            curr->next = nextTonextNode;
            if(prev != nullptr){
                prev->next = next;
            }else{
                head = next;
            }
            
            prev = curr;
            curr = nextTonextNode;
            if(nextTonextNode != nullptr)
                next = nextTonextNode->next;
            else
                next = nullptr;
        }
        return head;
    }
};