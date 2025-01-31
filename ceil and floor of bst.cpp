ceil and floor in bst O(log n ) average in bst
O(n) skewed

class Solution{

public:
    int floor(Node* root, int x) {
 if (root == NULL) return -1;
    int ceil=-1;
    while(root!=NULL){
        if(root->data==input){
            ceil=root->data;
            return ceil;
        }
        if(root->data<input){
            root=root->right;
        }
        else{
            ceil=root->data;
            root=root->left;
            
        }
    }
    return ceil;




//floor





class Solution{

public:
    int floor(Node* root, int x) {
        if (root == NULL) return -1;
    int floor=-1;
    while(root!=NULL){
        if(root->data==x){
            floor=root->data;
            return floor;
        }
        if(root->data>x){
            root=root->left;
        }
        else{
            floor=root->data;
            root=root->right;
            
        }
    }
    return floor;
        // Code here
    }
};
