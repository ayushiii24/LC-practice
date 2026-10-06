//problem : 160. Intersection of Two Linked Lists

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      //tc : O(m+n) , sc: O(1)
        ListNode* n1 = headA;
        ListNode* n2 = headB;
        while(n1!=n2){ //same node can be intersection
            if (n1==NULL){
                n1=headB;
            }
            else n1=n1->next;
            if (n2==NULL){
                n2=headA;
            }
            else n2=n2->next;
        }
        return n1; //intersection node if exists, else NULL
    }
};
