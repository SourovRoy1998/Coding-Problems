//https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

// Method that prints the bottom view.
void bottomView(Node *root)
{
   // Your Code Here
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
           hmap[temp.second]=temp.first->data;
           if(temp.first->left) q.push({temp.first->left,temp.second-1});
           if(temp.first->right) q.push({temp.first->right,temp.second+1});
       }
   }
   for(auto it=hmap.begin();it!=hmap.end();it++)
       cout<<it->second<<" ";
}
