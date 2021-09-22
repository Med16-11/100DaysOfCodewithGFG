
##Count total set bits

int largestPower(int n){
        int x = 0;
        
        while((1<<x) <= n)
            x++;
        return x-1;
    }
    
    
    int countSetBits(int n)
    {
        // Your logic here
        if (n <= 1)
            return n;
        int x = largestPower(n);
            return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
    }
