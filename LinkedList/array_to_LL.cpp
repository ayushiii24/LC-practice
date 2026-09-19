//problem : Create a linked list from an array
class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        Node* head = NULL;
        Node* tail = NULL;
        
        for (int i=0 ; i<arr.size() ; i++){
            Node* newnode = new Node(arr[i]);
            if (head==NULL){
                head=newnode;
                tail=newnode;
            }
            else {
                tail->next=newnode;
                tail=newnode;
            }
        }
    return head;
    }
};
