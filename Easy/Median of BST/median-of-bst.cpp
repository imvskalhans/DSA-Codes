//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



float findMedian(struct Node* node);

// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));
 
   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

int main() {
  
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   //cout << t << endl;
   while(t--)
   {
        string s; 
       getline(cin, s);
       Node* root = buildTree(s);

      // getline(cin, s);
       
        cout << findMedian(root) << endl;

      // cout<<"~"<<endl;
   }
   return 0;
}
// } Driver Code Ends


/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
int morris(Node* curr) {
        int cnt = 0;
        while (curr != nullptr) {
            if (curr->left == nullptr) {
                cnt++;
                curr = curr->right;
            }
            else {
                Node* prev = curr->left;
                while (prev->right != nullptr && prev->right != curr)
                    prev = prev->right;

                if (prev->right == nullptr) {
                    prev->right = curr;
                    curr = curr->left;
                }
                else {
                    prev->right = nullptr;
                    cnt++;
                    curr = curr->right;
                }
            }
        }
        return cnt;
    }
float findMedian(struct Node *root)
{
      //Code here
          int cnt = morris(root);
        Node* curr = root;
        Node* preptr = nullptr;
        Node* prev = nullptr;
        int currcnt = 0;

        while (curr != nullptr) {
            if (curr->left == nullptr) {
                currcnt++;
                if (cnt % 2 != 0 && currcnt == (cnt + 1) / 2)
                    return static_cast<float>(curr->data);
                else if (cnt % 2 == 0 && currcnt == (cnt / 2) + 1)
                    return static_cast<float>(preptr->data + curr->data) / 2.0f;
                preptr = curr;
                curr = curr->right;
            }
            else {
                prev = curr->left;
                while (prev->right != nullptr && prev->right != curr)
                    prev = prev->right;

                if (prev->right == nullptr) {
                    prev->right = curr;
                    curr = curr->left;
                }
                else {
                    prev->right = nullptr;
                    currcnt++;
                    if (cnt % 2 != 0 && currcnt == (cnt + 1) / 2)
                        return static_cast<float>(curr->data);
                    else if (cnt % 2 == 0 && currcnt == (cnt / 2) + 1)
                        return static_cast<float>(preptr->data + curr->data) / 2.0f;
                    preptr = curr;
                    curr = curr->right;
                }
            }
        }
        return -1.0f;
}

