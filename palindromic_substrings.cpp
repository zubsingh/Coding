class Solution {
public:
    int countSubstrings(string s) {
            int count = 0;
           
            
        for(int i=0;i<s.size();i++){
                
                int j = i;
                int k = i+1;
                while(j >= 0 && k <s.size()){
                        if(s[j] != s[k]){
                                break;
                        }
                        else{
                               // std::cout << s[i] << " " << s[j] << "\n";
                             count++;   
                        }
                        j--;
                        k++;
                }
                
                int g = i;
                int h = i;
                while(g>=0 && h < s.size()){
                        if(s[g] != s[h]){
                                break;
                        }
                        else{
                                
                                count++;
                        }
                        g--;h++;
                }
        }
            return count;
    }
};
