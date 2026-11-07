
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *temp=head,*prev=nullptr;
        if(head==nullptr) return head;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        if(n>count) return head;

        int target=count-n+1,i=1;
        temp=head;
        if(target==1){
            head=head->next;
            delete temp;
            return head;
        }
        while(temp!=nullptr && i<target){
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};
