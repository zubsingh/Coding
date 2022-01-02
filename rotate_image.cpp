class Solution {
public:
        void print(vector<vector<int>>& matrix){
                
                for(int i=0;i<matrix.size();i++){
                        
                        for(int j=0;j<matrix[i].size();j++){
                                std::cout << matrix[i][j] << " ";
                        }
                        
                        std::cout << "\n";
                }
                
                std::cout << "\n";
        }
        
    void rotate(vector<vector<int>>& matrix) {
            
            int i=0;
            int j=0;
            
            while(i < matrix.size() && j < matrix[i].size()){
                    int a = i;
                    int b = j;
                    
                    int c = i;
                    int d = j;
                    
                        while(a < matrix.size() && d < matrix[i].size()){
                                
                                int temp = matrix[a][b];
                                matrix[a][b] = matrix[c][d];
                                matrix[c][d]= temp;
                                
                                a++;
                                d++;
                        }
                    
                    
                    i++;
                    j++;
            }
            
           
           int b = 0;
          int d = matrix[0].size()-1;   
            
            while(b < d){
                     
                    int a = 0;
                    int c = 0;
                    while(a <= matrix.size()-1 && c <= matrix[0].size()-1){
                               int temp = matrix[a][b];
                                matrix[a][b] = matrix[c][d];
                                matrix[c][d]= temp;
                            a++;c++;
                    }
                    
                  b++;
                    d--;  
            }
            
            //print(matrix);
            
            
            return;
    }
};
