// matrix chain multipication by memorization dp approach

class Solution{
public:
    int dp[1000][1000];
    
    int solve(int arr[],int i,int j){
        if(i >= j){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int max_value = INT_MAX;
        
        for(int k=i;k<j;k++){
            int temp = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
            if(temp < max_value){
                max_value = temp;
            }
        }
        return dp[i][j] = max_value;
    }
    int matrixMultiplication(int N, int arr[])
    {
        for(int u=0;u<1000;u++){
            for(int h=0;h<1000;h++){
                dp[u][h] = -1;
            }
        }
        return solve(arr,1,N-1);
    }
};
