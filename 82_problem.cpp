class Solution {
public:
    
    ListNode * solve(ListNode * head, unordered_map<int,int> &hash) {
        if(head == nullptr)
            return head; 
        if(hash[head->val] == 1) {
            head->next = solve(head->next, hash); 
            return head; 
        }else {
            return solve(head->next, hash); 
        }
        return nullptr; 
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> hash; 
        ListNode * temp = head; 
        while(temp != nullptr) {
            hash[temp->val]++; 
            temp = temp->next; 
        }
        return solve(head, hash); 
    }
};
