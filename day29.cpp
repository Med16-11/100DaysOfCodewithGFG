//Interleaved Strings 
int dp[1001][1001];
    bool solve(string A, string B, string C, int n, int m, int l)
    {
        if(l==0) return 1;
        if(dp[n][m]!=-1) return dp[n][m];
        
        int a = 0, b = 0;
        if(n-1>=0 and A[n-1]==C[l-1]) a = solve(A,B,C, n-1, m, l-1);
        if(m-1>=0 and B[m-1]==C[l-1]) b = solve(A,B,C, n, m-1, l-1);
        return dp[n][m] = a or b;
    }
    
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int n = A.length();
        int m = B.length();
        int l = C.length();
        if(n + m != l)
            return 0;
        dp[n][m];
        memset(dp,-1,sizeof(dp));
        return solve(A,B,C,n,m,l);
    }
