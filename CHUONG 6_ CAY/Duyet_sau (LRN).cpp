#include <bits/stdc++.h>
using namespace std;
	
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
class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }
	// duyet sau LRN
    void postOrder(Node *root) {
     if (root == NULL) return ;
    postOrder (root -> left);
    postOrder (root -> right);
     std::cout << root -> data <<" ";
    }

}; 
int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.postOrder(root);
    return 0;
}