class Solution {
  public:
    // int editDistanceUtil(string s,string t,int slen,int tlen){
    //     if(slen == 0){
    //         return tlen;
    //     }
    //     if(tlen == 0){
    //         return slen;
    //     }
    //     if(s[slen-1] == t[tlen-1]){
    //         return editDistanceUtil(s,t,slen-1,tlen-1);
    //     }
    //     return 1 + std::min(std::min(editDistanceUtil(s,t,slen-1,tlen), editDistanceUtil(s,t,slen,tlen-1)),editDistanceUtil(s,t,slen-1,tlen-1));
    // }
     int dp[101][101];
    
    int editDistanceUtildp(string s,string t,int slen,int tlen){
        if(slen == 0){
            
            return tlen;
        }
        if(tlen == 0){
            
            return slen;
        }
        if(dp[slen][tlen]!= -1){
            return dp[slen][tlen];
        }
        if(s[slen-1] == t[tlen-1]){
            
            return dp[slen][tlen] = editDistanceUtildp(s,t,slen-1,tlen-1);
        }
        
        return dp[slen][tlen] = 1 + std::min(std::min(editDistanceUtildp(s,t,slen-1,tlen), editDistanceUtildp(s,t,slen,tlen-1)),editDistanceUtildp(s,t,slen-1,tlen-1));
    }
    
    int editDistance(string s, string t) {
        int slen = s.size();
        int tlen = t.size();
        
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                dp[i][j] = -1;
            }
        }
        return editDistanceUtildp(s,t,slen,tlen);
    }
};
