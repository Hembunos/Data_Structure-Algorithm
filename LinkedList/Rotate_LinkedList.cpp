
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        
        if (head == NULL || head->next == NULL || k == 0) 
        return head;

        Node* it = head;
        int size = 1;
        while (it->next != NULL) {
            it = it->next;
            size++;
        }
    
        k = k % size;
        if (k == 0) 
            return head;
    
        it->next = head;
    
        Node* newTail = head;
        
        for (int i = 1; i < k; i++) {
            newTail = newTail->next;
        }
        
        Node* newHead = newTail->next;
        newTail->next = NULL;
    
        return newHead;
    }
};