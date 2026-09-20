//problem : 19. Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      //tc : O(n) , sc : O(1)
        if (head==NULL || head->next==NULL && n==1) return NULL;
        ListNode* temp = head;
        int size = 0;
        while(temp){
            size++;
            temp=temp->next;
        }
        temp = head;
        if (size==n){
            head=head->next;
            return head;
        }
        for (int i=1 ; i<size-n && temp->next; i++){
            temp=temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
