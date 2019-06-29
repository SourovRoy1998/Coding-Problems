https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    int n=q.size();
    stack<ll> stk;
    for(int i=0;i<k;i++){
        stk.push(q.front());
        q.pop();
    }
    for(int i=0;i<k;i++){
        q.push(stk.top());
        stk.pop();
    }
    
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    
    return q;
    
}
