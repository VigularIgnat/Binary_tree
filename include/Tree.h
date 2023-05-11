#ifndef TREE_H
#define TREE_H
#include <string>
#include <iostream>
using namespace std;
class Node{
    public:
        string name;
        int rating;
        int count_node=0;

        Node* left=NULL;
        Node* right=NULL;
        Node(){

        };

        Node(string name,int rating){
            this->name=name;
            this->rating=rating;
            //this->count_node=0;
        };



};

class Tree
{
    public:
        string name_tree;
        Node* Root=NULL;

        Tree(string name_tree);

       void add_(Node elem, Node* &root);
       void remove_(Node *root,Node* root_main);
       Node* find_(Node* root,int rating);

       void print_deep(Node *, int num);
       void print_width();

        virtual ~Tree();
    protected:

    private:
};

#endif // TREE_H
