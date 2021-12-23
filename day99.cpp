//merge sort
void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        int lsz=m-l+1;
        int rsz=r-m;
        int L[lsz+1];
        int R[rsz+1];
        for(int i=0;i<lsz;i++)
            L[i]=arr[i+l];
        for(int i=0;i<rsz;i++)
            R[i]=arr[m+1+i];
            L[lsz]=R[rsz]=INT_MAX;
            int l_i=0;
            int r_i=0;
         
        for(int i=l;i<=r;i++)
        {
            if(L[l_i]<=R[r_i])
                arr[i]=L[l_i++];
            else
                arr[i]=R[r_i++];
             
        }
    }
