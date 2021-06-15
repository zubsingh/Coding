class Solution{

	public:
	int dp[1001][1001];
	
	int perfectSumUtil(int arr[],int n,int sum){
	    if(sum == 0)return 1;
	    if(n == 0) return 0;
	    
	    if(dp[n][sum] != -1){
	        return dp[n][sum];
	    }
	    
	    if(arr[n-1] <= sum){
	        return dp[n][sum] = (perfectSumUtil(arr,n-1,sum-arr[n-1]) + perfectSumUtil(arr,n-1,sum))%1000000007;
	    }
	    return dp[n][sum] = perfectSumUtil(arr,n-1,sum)%1000000007;
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
        memset(dp,-1,sizeof(dp));
       
	    return perfectSumUtil(arr,n,sum);
	}
	  
};
