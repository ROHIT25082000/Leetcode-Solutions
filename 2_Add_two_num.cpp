#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			if(l1 == nullptr && l2 == nullptr) {
                return nullptr;
            }
            if(l1 == nullptr) {
                return l2; 
            }    
            if(l2 == nullptr) {
                return l1; 
            }
            int a = (l1->val + l2->val);  
            
            ListNode * p = new ListNode(a%10);  
            p->next = addTwoNumbers(l1->next, l2->next);
            if(a >= 10) {
                p->next = addTwoNumbers(p->next, new ListNode(1)); 
            }
			return p;
	}
};