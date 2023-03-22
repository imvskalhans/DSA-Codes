/*
LeetCode 589. N-ary Tree Preorder Traversal
Given an n-ary tree, return the preorder traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).
*/
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class Node
{
public:
    int val;
    vector<Node*> children;
    Node() {}
    Node(int _val) { val = _val; }
    Node(int _val, vector<Node*> _children)
    {
        val = _val;
        children = _children;
    }
};

vector<int> preorder(Node* root)
{
    vector<int> result;
    if (root == nullptr)
    {
        return result;
    }
    stack<Node*> s;
    s.push(root);
    while (!s.empty())
    {
        Node* node = s.top();
        s.pop();
        result.push_back(node->val);
        for (int i = node->children.size() - 1; i >= 0; i--)
        {
            s.push(node->children[i]);
        }
    }
    return result;
}

int main()
{
    Node* root = new Node(1);
    Node* node3 = new Node(3);
    Node* node2 = new Node(2);
    Node* node4 = new Node(4);
    root->children.push_back(node3);
    root->children.push_back(node2);
    root->children.push_back(node4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    node3->children.push_back(node5);
    node3->children.push_back(node6);
    vector<int> result = preorder(root);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}