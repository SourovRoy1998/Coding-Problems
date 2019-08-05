//https://www.hackerrank.com/challenges/tree-top-view/problem


class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node * root) {
        if(root==NULL) return;
        int size;
    
        pair<Node*,int> temp;
        queue<pair<Node*,int>> q;
        map<int,int> hmap;
        q.push({root,0});

        while(!q.empty()){
            size=q.size();
            for(int i=0;i<size;i++){
                temp=q.front();q.pop();
                if(hmap.find(temp.second)==hmap.end())
                    hmap[temp.second]=temp.first->data;
                if(temp.first->left)
                    q.push({temp.first->left,temp.second-1});
                if(temp.first->right)
                    q.push({temp.first->right,temp.second+1});
            }
        }
        
        for(auto [k,v]:hmap)
            cout<<v<<" ";
        cout<<endl;

    }

}; //End of Solution
