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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return true;

        ListNode* ptr = head;
        int numNodes = 0;
        while(ptr != nullptr){
            numNodes++;
            ptr = ptr->next;
        }

        int skipNodes = numNodes / 2;
        // cout << "Skip nodes: " << skipNodes << endl;
        ptr = head;
        while(skipNodes--){
            ptr = ptr->next;
        }
        // cout << "after Skip data: " << ptr->val << endl;

        ListNode* prev = nullptr;
        ListNode* curr = ptr;
        ListNode* next = nullptr;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // cout << "last node value: " << prev->val << endl;
        skipNodes = numNodes / 2;
        while(skipNodes--){
            if(head->val != prev->val){
                return false;
            }else{
                head = head->next;
                prev = prev->next;
            }
        }
        return true;
    }
};