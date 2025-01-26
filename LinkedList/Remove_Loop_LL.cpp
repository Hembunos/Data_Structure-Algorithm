class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                fast = head;
        
                if (slow == fast) { // special case when loop start at the head
                    while (slow->next != fast) {
                        slow = slow->next;
                    }
                } else {
                    while (slow->next != fast->next) {
                        slow = slow->next;
                        fast = fast->next;
                    }
                }
        
                slow->next = NULL;
                return;
            }
        }
        
    }
};