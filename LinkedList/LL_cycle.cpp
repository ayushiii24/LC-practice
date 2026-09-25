//problem : 141 Linked list cycle

class Solution {
public:
    bool hasCycle(ListNode *head) {
      //approach : brute force unordered set
      //tc : O(n) , sc : O(n)
        unordered_set<ListNode*> seen; //to remember nodes we have visited
        while (head != NULL) {
            if (seen.count(head)) {
                return true;  //seen this node before
            }
            seen.insert(head);
            head=head->next;
        }
        return false; //reached null, no cycle
    }
     //approach: slow and fast pointer
     // tc: O(n) , sc : O(1)
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next ){
            slow=slow->next;
            fast=fast->next->next;
            if (slow == fast ) return true; //if same, then theres a cycle
        }
        return false;
    }
};


 


