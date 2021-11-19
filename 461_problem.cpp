int hammingDistance(int x, int y) 
{
        int ans = x ^ y; 
        int count = 0; 
        while(ans) {
            if(ans & 1){
                count++; 
            }
            ans >>= 1; 
        }
        return count; 
}

