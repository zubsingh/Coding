class Solution
{
    public:
    int dp[10001];
    
    int maximizeTheCutsUtil(int n,int x,int y,int z){
         if(n == 0){
           return 0;
       }
       if(n < 0){
           return INT_MIN;
       }
      if(dp[n]!= -1){
          return dp[n];
      }
      
    return dp[n] =  1 + max(maximizeTheCutsUtil(n-x,x,y,z),max(maximizeTheCutsUtil(n-y,x,y,z),maximizeTheCutsUtil(n-z,x,y,z)));   
    }
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        for(int i=0;i<=10001;i++){
            dp[i] = -1;
        }
        int c = maximizeTheCutsUtil(n,x,y,z);
       if(c  <= 0){
           return 0;
       }
       return c;
    }
};
