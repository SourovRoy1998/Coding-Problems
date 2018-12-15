//https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest {
    
private:
    int K;
    priority_queue<int,vector<int>,greater<int>> pq;
public:
    KthLargest(int k, vector<int> nums) {
        K=k;
        for(int n:nums)
            add(n);
    }
    
    int add(int val) {
        //if(pq.size()<K || val>pq.top())
            pq.push(val);
        if(pq.size()>K)
            pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */
