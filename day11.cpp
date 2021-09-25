//Largest subarray with 0 sum 
int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int, int> mpp;
        int max_length = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            sum += A[i];
            
            if(sum == 0){
                max_length = i + 1;
            }
            
            else if (mpp.find(sum) != mpp.end()){
                max_length = max(max_length, i - mpp[sum]);
            }
            
            else{
                mpp[sum] = i;
            }
        }
        
        return max_length;
    }
