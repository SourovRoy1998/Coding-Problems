//https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1



/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

stack<int> min_stk;
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty())
       return -1;
   return min_stk.top();
}
/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty())
       return -1;
   int top=s.top();
   s.pop();
   min_stk.pop();
   return top;
}
/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   
    if(s.empty()){
        s.push(x);
        min_stk.push(x);
    }
    else{
        min_stk.push(min(x,min_stk.top()));
        s.push(x);
    }
    
}
