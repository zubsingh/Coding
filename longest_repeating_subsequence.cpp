class Solution {
	public:
	    int dp[1001][1001];
	    
	    int lrs(string & str, int n,int m){
	        if (n == 0 || m == 0) return 0;
	        if(dp[n][m] != -1){
	            return dp[n][m];
	        }
	        if(n != m && str[n-1] == str[m-1]){
	            return dp[n][m]= lrs(str,n-1,m-1)+1;
	        }
	        return dp[n][m] = max(lrs(str,n-1,m),lrs(str,n,m-1));
	    }
	    
		int LongestRepeatingSubsequence(string str){
		    int len = str.size();
		    memset(dp,-1,sizeof(dp));
		    return lrs(str,len,len);
		}

};
