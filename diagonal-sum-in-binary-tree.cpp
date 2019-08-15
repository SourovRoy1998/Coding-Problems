//https://practice.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1


void diagonal(Node* root, int key, map<int,int>& hmap)
{
 // Add your code here
    if(!root) return;
    hmap[key]+=root->data;
    diagonal(root->left,key+1,hmap);
    diagonal(root->right,key,hmap);
    
}

void diagonalSum(Node* root)
{
 // Add your code here
    map<int,int> hmap;
    diagonal(root,0, hmap);
    for(map<int,int>::iterator it=hmap.begin();it!=hmap.end();it++)
        cout<<it->second<<" ";
    cout<<endl;
}
