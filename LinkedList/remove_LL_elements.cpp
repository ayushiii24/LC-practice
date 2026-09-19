//problem : 203 Remove Linked List Elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      // tc : O(n) , sc : O(1)
        ListNode* temp=head;
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev = &dummy; //holds memory addr of dum
        if (head==NULL) return head;
        while(temp){
            if (temp->val==val){
                prev->next=temp->next;
                temp=temp->next;       
            }
            else{
            temp=temp->next;
            prev=prev->next;
            }
        }
        return dummy.next; //returns actual head
    }
};
