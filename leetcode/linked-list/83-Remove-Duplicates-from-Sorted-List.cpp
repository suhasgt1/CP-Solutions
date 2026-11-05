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
        if (head==nullptr) return head;

        ListNode *temp=head, *prev;

        while(temp->next!=nullptr){
            prev=temp;
            temp=temp->next;

            if(prev->val==temp->val){
                prev->next=temp->next;
                delete temp;
                temp=prev;
            }
        }

        return head;
    }
};