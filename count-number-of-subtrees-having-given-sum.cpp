//https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1



/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
// your are required to complete this function
// function should return the count of the number of 
// subtrees with Sum equal to X

int countSubtree(Node* root, int x, int& count){
    if(root==NULL)
        return 0;
    int sum=countSubtree(root->left,x,count)+countSubtree(root->right,x,count)+root->data;
    if(sum==x)
        count++;
}

int countSubtreesWithSumX(Node* root, int x)
{
	if (!root)return 0;
	// Code here
	int count=0;
	countSubtree(root,x,count);
	return count;
}
