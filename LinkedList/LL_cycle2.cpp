// problem : 142 LinkedList Cycle II

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      // approach : floyds tortoise and hare algo
      // tc : O(n) , sc : O(1)
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next ){
            slow=slow->next;
            fast=fast->next->next;
            if (slow == fast ) { 
                slow = head; //reset slow to find cycle start
                while(slow!=fast){
                    slow = slow->next;
                    fast=fast->next;
                }
                return fast;
            }
        }
        return NULL;
    }
};

