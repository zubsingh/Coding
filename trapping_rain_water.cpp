int trap(vector<int>& height) {
            int n = height.size();
            if(n == 0) return 0;
                int leftmax[n];
            leftmax[0] = height[0];
            int rightmax[n];
            rightmax[n-1] = height[n-1];
            for(int i=1;i<n;i++)
            {
                    leftmax[i] = max(leftmax[i-1],height[i]);
            }
            for(int i=n-2;i>=0;i--)
            {
                    rightmax[i] = max(rightmax[i+1],height[i]);
            }
            
            for(int i=0;i<n;++i)
            {
                    leftmax[i] = min(leftmax[i],rightmax[i])-height[i];
                    
            }
            
            int sum = 0;
            for(int i=0;i<n;++i)
            {
                   sum += leftmax[i];
            }
            return sum;
    }
