//problem : 876. Middle of the Linked List
class Solution {
public:
    //2 pass soln
    //tc: O(n) , sc: O(1) 
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        int count = (length/2)+1;
        temp=head;
        for (int i=1; i<count; i++){
            temp=temp->next;
        }
        head = temp;
        return head;
    }

    // one pass soln 
    //tc: O(n) , sc: O(1) 
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next ){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
