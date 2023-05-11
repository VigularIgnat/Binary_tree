#include "Tree.h"
#include <iostream>
using namespace std;
Tree::Tree(string name_tree)
{
    this->name_tree=name_tree;
    //this->size_=0;
}
void Tree::add_(Node elem,Node* &root){
    if (!root){
       // cout_node++;
        root=new Node();
        root->name=elem.name;
        root->rating=elem.rating;
        //root->cout_node=0;
        /*root->left=NULL;
        root->rigth=NULL;*/
        return;
    }
    root->count_node++;
    if(root->rating>elem.rating){
        add_(elem,root->left);
    }
    else{
        add_(elem,root->right);
    }

}
void Tree::print_deep(Node* root,int num){
    if(!root){
        return;
    }
    int num2=num+1;

    cout<<"\n|";
    for(int i=0;i<num;i++){
        cout<<"|    ";
    }
    cout<<root->name<<" ("<<root->count_node<<") - "<<root->rating;
    print_deep(root->left,num2);
    print_deep(root->right,num2);
    /*cout<<"\n"<<root->name<<"\t"<<root->rating;
    print_deep(root->left);
    print_deep(root->rigth);*/
}
void Tree::remove_(Node *root,Node* root_main) {
    if (root->left==root){
        root->left=NULL;
        return;
    }
    if(root->right==root){
        root->right=NULL;
        return;
    }
    Node* tmp=root_main;
    while (tmp){
        tmp=tmp->left;
        if (tmp->left==root){
            root->left=NULL;
            return;
        }
        if(tmp->right==root){
            root->right=NULL;
            return;
        }
        tmp=tmp->right;
    }
/*  if(root!=NULL) {
    remove_(root_main->left, root_main);
    remove_(root_main->right, root_main);
  }*/
}

Node* Tree::find_(Node* root, int rating){
    //Node* find_root=root;
    if(root==NULL||root->rating==rating){
        //find_root=NULL;
        return root;
    }
    else{
        if(root->rating>rating){
            //cout<<"\n"<<root->name<<"\t"<<name;
            //find_root=NULL;
            find_(root->left,rating);
            //find_(root->right,name);



        }
        else{
            //cout<<"\n"<<root->name<<"\t"<<root->rating;
            find_(root->right,rating);

        }
    }
}


Tree::~Tree()
{
    //dtor
}
