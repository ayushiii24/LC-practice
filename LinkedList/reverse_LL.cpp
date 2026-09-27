//problem : 206 Reverse Linked List 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //tc : O(n) , sc: O(1)
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* front; //to save next node before changing link
        while(temp){
            front = temp-> next;
            temp->next = prev; //to reverse the current nodes link
            prev = temp;
            temp= front;
        }
        return prev; //new reversed head
    }
};
