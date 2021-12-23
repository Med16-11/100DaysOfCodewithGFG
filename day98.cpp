long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        
        sort(a, a+n);
        int i;
        long long int sum = 0;
        for(i = 0; i < k; i++)
        {   
            if(i == n-1)
                break;
            if(a[i]<0)
                a[i] = -a[i];
            else
                break;
        }
        if((k-i)%2 != 0)
            a[i] = -a[i];
        for(int j = 0; j < n; j++)
            sum = sum + a[j];
        return sum;
    }
