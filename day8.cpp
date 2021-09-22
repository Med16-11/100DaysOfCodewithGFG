
##Repeated String Match

bool isSubstring(string str1, string str2){
        
        int m = str1.size();
        int n = str2.size();
        
        for(int i = 0; i <= n - m; i++ ){
            int j;
            
            for(j = 0; j < m; j++){
                
                if(str2[i + j] != str1[j])
                    break;
            }
            
            if(j == m){
                return true;
            }
            
        }
        return false;
    }
