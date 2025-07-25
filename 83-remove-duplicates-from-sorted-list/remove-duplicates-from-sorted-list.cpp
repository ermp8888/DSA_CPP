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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* pt1 = head;
        ListNode* pt2 = head->next;

        while(pt2 != nullptr){
            if(pt1->val == pt2->val){
                ListNode* tmp = pt2;
                pt1->next = pt2->next;
                pt2 = pt2->next;
                delete tmp;
            }else{
                pt1 = pt1->next;
                pt2 = pt2->next;
            }
        }
    return head;    
    }
};