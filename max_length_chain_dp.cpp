bool cmp(const val & a,const val & b){
    return b.second > a.second;
}

int maxChainLen(struct val p[],int n)
{
    if(n == 0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    sort(p,p+n,cmp);
    int dp[n];
    dp[0] = 1;
     for(int i=1;i<n;i++){
        dp[i]= 0;
    }
    
    for(int i=1;i<n;i++){
      for(int j=0;j<i;j++){
          if(p[i].first > p[j].second && dp[i] < dp[j]+1){
              dp[i] = dp[j]+1;
          }
      }
    }
    int max_length = INT_MIN;
    for(int i=0;i<n;i++){
        max_length = max(max_length,dp[i]);
    }
    return max_length;
}
