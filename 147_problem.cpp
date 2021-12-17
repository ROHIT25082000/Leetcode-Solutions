
class Solution {
public:
    
    ListNode * merge(ListNode * one, ListNode * two)
    {
        if(one == nullptr && two != nullptr)
            return two; 
        if(one != nullptr && two == nullptr)
            return one; 
        if(one == nullptr && two == nullptr)
            return nullptr; 
        if(one->val < two->val){
            one->next = merge(one->next, two); 
            return one;
        }
        else{
            two->next = merge(two->next, one); 
            return two; 
        }
        return nullptr; 
    }
    
    
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head; 
        ListNode * slow = head; 
        ListNode * fast = head; 
        
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next; 
            slow = slow->next; 
        }
        ListNode * prev = head; 
        while(prev->next != slow){
            prev = prev->next;
        }
        prev->next = nullptr; 
        head = insertionSortList(head); 
        slow = insertionSortList(slow); 
        return merge(head,slow);
    }
};
