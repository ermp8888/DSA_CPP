/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA->next == nullptr && headB->next == nullptr){
            if(headA == headB){
                return headA;
            }else{
                return nullptr;
            }
        }
        int lenA = 0;
        int lenB = 0;
        ListNode* ptA = headA;
        ListNode* ptB = headB;
        while(ptA != nullptr){
            lenA++;
            ptA = ptA->next;
        }

        while(ptB != nullptr){
            lenB++;
            ptB = ptB->next;
        }

        ListNode* largList;
        ListNode* smallList;
    
        if(lenA > lenB){
            largList = headA;
            smallList = headB;
        }else{
            largList = headB;
            smallList = headA;
        }

        // if (largList == nullptr || smallList == nullptr)
        //     return nullptr;
    
        int skipLen = abs(lenA - lenB);
    
        while(skipLen--){
            largList = largList->next;
        }
        while(largList != nullptr || smallList != nullptr){
            if(smallList == largList){
                return smallList;
            }
            smallList = smallList->next;
            largList  = largList->next;
        }
        return nullptr;
    }
};