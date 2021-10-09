//Valid Pair Sum
long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here
    	sort(a, a + n);
    	long long  ans = 0;
    	for(int i = 0; i < n; i++)
    	{
    	    if(a[i] <= 0)
    	        continue;
    	    
    	    int j = lower_bound(a, a+n, -a[i] + 1)-a;
    	    ans += i-j;
    	}
    	return ans; 
    }   
