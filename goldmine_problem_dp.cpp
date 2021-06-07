class Solution{
public:
    int dp[101][101];
    int maxGoldUtil(int n,int m,vector<vector<int>> & M,int x,int y){
        if(x < 0 || x == n || y == m){
            return 0;
        }
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        return dp[x][y]= M[x][y]+ max(maxGoldUtil(n,m,M,x-1,y+1),max(maxGoldUtil(n,m,M,x+1,y+1),maxGoldUtil(n,m,M,x,y+1)));
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                dp[i][j]=-1;
            }
        }
        int out= 0;
        for(int i=0;i<n;i++){
            int temp = maxGoldUtil(n,m,M,i,0);
            out=max(out,temp);
        }
        return out;
    }
};
