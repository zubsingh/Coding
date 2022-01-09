class Solution {
public:
        void print(priority_queue<int> pq){
                while(!pq.empty()){
                        std::cout << pq.top() << " ";
                        pq.pop();
                }
        }
        
    int longestConsecutive(vector<int>& nums) {
            if(nums.size() == 0) return 0;
            if(nums.size() == 1){
                    return 1;
            }
        priority_queue<int> pq;
            
            for(int i=0;i<nums.size();i++){
                    if(pq.empty() || pq.top() != nums[i])
                pq.push(nums[i]);       
            }
           
            int count=1;
            int maxcount=1;
            int pp=pq.top();
            pq.pop();
            
            while(!pq.empty()){
                  int qq = pq.top();
                    
                    if(pp != qq && abs(qq-pp) == 1){
                            count++;
                           
                            maxcount = max(count,maxcount);
                    }
                    else if(abs(qq-pp) > 1){
                            count =1;
                    }
                     pp = qq;
                    pq.pop();
            }
            
            return maxcount;
    }
};
