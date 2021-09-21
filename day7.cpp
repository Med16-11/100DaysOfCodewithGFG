//Dam of Candies
int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int start = 0, end = n-1;
        int max_area = 0;
    
        while(start < end){
            int area = min(height[start],height[end])*((end - start) - 1);
            max_area = max(max_area,area);
            if(height[start]< height[end]){
                start ++;
            }
            else{
                end--;
            }
        }
        return max_area;
    }   
