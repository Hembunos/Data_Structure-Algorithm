class Solution {
  public:
    Node* findFirstNode(Node* head) {
        // your code here
        
        Node* fast = head;
        Node* slow = head;
        
        while(fast != NULL && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) break;
        }
        
        if(fast == NULL || fast->next == NULL) return NULL;
        
        fast = head;
        
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
};