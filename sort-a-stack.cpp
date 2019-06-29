//https://practice.geeksforgeeks.org/problems/sort-a-stack/1



void SortedStack :: sort()
{
   //Your code here
   stack<int> temp;
   int curr;
   while(!s.empty()){
        curr=s.top();
        s.pop();
        if(temp.empty() || temp.top()>=curr)
            temp.push(curr);
        else{
            while(!temp.empty() && temp.top()<curr){
                    s.push(temp.top());
                    temp.pop();
            }
            temp.push(curr);
        } 
   }
   while(!temp.empty()){
       s.push(temp.top());
       temp.pop();
   }
   
}
