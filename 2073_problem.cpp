int timeRequiredToBuy(vector<int>& tickets, int k) 
{
        int temp = 0; 
        while(true) {
            for(int i = 0; i < tickets.size(); ++i) {
                if(tickets[i] > 0) {
                    temp++;  
                    tickets[i]--; 
                }
                if(tickets[k] == 0) {
                    return temp; 
                }
            }
        }
        return 0; 
}
