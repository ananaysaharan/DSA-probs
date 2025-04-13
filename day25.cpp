//Delete Node
class Solution {
public:
    void deleteNode(ListNode* node) {
    node->val = node->next->val;   
    node->next = node->next->next;                 
    }
};

//Insert Node at the end of LL

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *newNode = new Node(x); 
        if (head == NULL) {
            return newNode; 
        }
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode; 
        return head; 
    }
};
