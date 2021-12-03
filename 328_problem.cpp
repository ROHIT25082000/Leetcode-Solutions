class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return head; 
        }
        vector<ListNode*> odd; 
        vector<ListNode*> even;  
        ListNode * temp = head;  
        int index = 1; 
        while(temp != nullptr) {
            if(index %2 == 0) {
                even.push_back(temp);
            }
            else{
                odd.push_back(temp);
            }
            temp = temp->next;  
            index++; 
        }
        
        for(int i = 1; i < odd.size(); ++i) {
            odd[i-1]->next = odd[i]; 
        }
        for(int j = 1; j < even.size(); ++j) {
            even[j-1]->next = even[j]; 
        }
        even[even.size()-1]->next = nullptr; 
        odd[odd.size()-1]->next = even[0]; 
        return odd[0];  
    }
};
