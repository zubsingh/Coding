     void letterCombinations(vector<string> & vec,int i,string digits,unordered_map<char,string> & hash,string out)
        {
                if(i == digits.size()){
                        vec.push_back(out);
                        return;
                }
                std::string str = hash[digits[i]];
                for(int k=0;k<str.size();k++){
                       out += str[k];
                        letterCombinations(vec,i+1,digits,hash,out);
                        out.pop_back();
                }
        }
        // call letterCombinations('23');
    vector<string> letterCombinations(string digits) {
            if(digits.size()== 0) return {};
        unordered_map<char,string> hash;
            hash['0']="0";
            hash['1']="1";
            hash['2']="abc";
            hash['3']="def";
            hash['4']="ghi";
            hash['5']="jkl";
            hash['6']="mno";
            hash['7']="pqrs";
            hash['8']="tuv";
            hash['9']="wxyz";
            
            int i=0;
            vector<string> vec;
            
            letterCombinations(vec,0,digits,hash,"");
            return vec;
    }
