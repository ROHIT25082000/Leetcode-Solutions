
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow = head;  
        ListNode * fast = head;  
        while(fast != nullptr && fast->next != nullptr) 
        {
            slow = slow->next;  
            fast = fast->next->next;   
            if(slow == fast) 
            {
                break; 
            }
        }
        if(fast == nullptr || fast->next == nullptr) 
            return nullptr; 
        ListNode * curr = head;  
        while(curr != slow)  
        {
            curr = curr->next; 
            slow = slow->next; 
        }
        return curr; 
    }
};
