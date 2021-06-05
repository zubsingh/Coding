class Solution
{
    public:
    int dp[1000][1000];
    
    int lcsUtil(int x,int y,string & s1,string & s2){
        if(x == 0 || y == 0){
            return 0;
        }
        if(dp[x][y]!= -1){
            return dp[x][y];
        }
        if(s1[x-1] == s2[y-1]){
            return dp[x][y] = lcsUtil(x-1,y-1,s1,s2)+1;
        }
        return dp[x][y] = max(lcsUtil(x-1,y,s1,s2),lcsUtil(x,y-1,s1,s2));
    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        for(int i=0;i<1000;i++){
            for(int j=0;j<1000;j++){
                dp[i][j]=-1;
            }
        }
        
        return lcsUtil(x,y,s1,s2);
    }
};
