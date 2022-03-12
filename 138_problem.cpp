Node* copyRandomList(Node* head) {
        if(head == nullptr) 
            return nullptr; 
        
        Node * curr = head; 
        while(curr != nullptr) // create a copy of every node 
        { 
            Node * nextnode = curr->next;  
            Node * newnode = new Node(curr->val);  
            curr->next = newnode;  
            newnode->next = nextnode; 
            curr = nextnode; 
        }
        
        curr = head;  
        Node * copy = head->next;  
        
        while(curr != nullptr) {  // copy the random pointer
            copy->random = curr->random ? curr->random->next : nullptr;  
            curr = curr->next->next;  
            if(copy->next) {
                copy = copy->next->next;
            }
        }  
        
        curr = head; 
        copy = head->next;  
        Node * result = head->next; 
        
        while(curr != nullptr) // disconnect the original and the copy.
        {
            curr->next = curr->next->next; 
            if(copy->next) {
                copy->next = copy->next->next;
                copy = copy->next;
            }
            curr = curr->next;
        }
        return result; 
    }
