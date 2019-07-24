//https://practice.geeksforgeeks.org/problems/mirror-tree/1



void mirror(Node* node) 
{
     // Your Code Here
     if(node){
         mirror(node->left);
         mirror(node->right);
         Node* temp=node->left;
         node->left=node->right;
         node->right=temp;
     }
}
