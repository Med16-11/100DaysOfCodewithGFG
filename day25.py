//Spiral Matrix
def findK(self, a, n, m, k):
        # Your code goes here
        top,down = 0, n-1
        left,right = 0,m-1
        count = 0
        
        while top <= down and left <= right:
            
            i= left
            while i <= right:
                count += 1
                if count == k:
                    return (a[left][i])
                i+=1
            top += 1
            
            i = top
            while i <= down:
                count += 1
                if count == k:
                    return (a[i][right])
                i+=1
            right -= 1
            
            i = right
            while i >= left:
                count += 1
                if count == k:
                    return (a[down][i])
                i-=1
            down -= 1
            
            i = down
            while i >= top:
                count += 1
                if count == k:
                    return (a[i][left])
                i-=1
            left += 1
            
