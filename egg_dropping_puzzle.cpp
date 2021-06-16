class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int dp[201][201];
    int eggDropUtil(int n, int k) 
    {
        if(n == 0 || k == 0) return 0;
	    if(n == 1 || k == 1) return k;
	    if(dp[n][k]!=-1) return dp[n][k];
	    
	    int minsteps = INT_MAX;
	    
	    for(int i=1;i<=k;i++) {
	        
	        int temp = 1+ max(eggDropUtil(n-1,k-i),eggDropUtil(n,i-1));
	        minsteps = min(minsteps,temp);
	    }
	    
	    return dp[n][k] = minsteps;
    }
    
    int eggDrop(int n, int k) 
    {
        memset(dp,-1,sizeof(dp));
       return eggDropUtil(n,k);
    }
};
