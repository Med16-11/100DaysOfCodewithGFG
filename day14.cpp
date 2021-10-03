//sort a stack
void sorted_stack(int temp, stack<int>&s){
    
    if(s.size()==0 || s.top()<temp)
        s.push(temp);
        
    else{
        int x = s.top();
        s.pop();
        sorted_stack(temp,s);
        s.push(x);
    }
}


void reverse(stack<int>&s){
    if(s.size() > 0){
        int temp = s.top();
        s.pop();
        reverse(s);
        sorted_stack(temp,s);
    }
    
}

void SortedStack :: sort()
{
   //Your code here
   reverse(s);
}
