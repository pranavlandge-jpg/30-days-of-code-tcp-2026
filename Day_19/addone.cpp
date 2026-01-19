class Solution {
public:
    Node* addOne(Node* head) {
        Node *p = NULL;
        Node *c = head;
        Node *n = NULL;
        
        while (c != NULL) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;}
        head = p;

        Node* t = head;
        int carry = 1;
        
        while (t != NULL) {
            t->data = t->data + carry;
            if (t->data < 10) {
                carry = 0;
                break;
            } else {
                t->data = 0;
                carry = 1; }
            
            if (t->next == NULL && carry == 1) {
                t->next = new Node(1);
                carry = 0;
                break;}
            t = t->next; }

        p = NULL;
        c = head;
        n = NULL;
        
        while (c != NULL)
 {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        		return p;}};