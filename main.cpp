#include <iostream>
#include "Tree.h"
#include <string>
using namespace std;
struct node{
    string name;
    int rating;
};
int main()
{
    Tree tree1("Department");
    //struct Tree[5]={{"Name1",40}};
    const int sz=7;
    node tmp[sz]={{"Name1",50},{"Name2",10},{"Name3",70},{"Name4",20},{"Name5",81},{"Name6",60},{"Name7",21}};

    for (int i=0;i<sz;i++){
        Node elem;
        elem.name=tmp[i].name;
        elem.rating=tmp[i].rating;
        tree1.add_(elem,tree1.Root);
    }
    /*for(int i=0;i<5;i++){
        //Node tmp;
        cout<<"\nEnter the name ";
        cin>>tmp.name;
        cout<<"\nEnter the rating ";
        cin>>tmp.rating;
        tree1.add_(tmp,tree1.Root);
    }*/
    tree1.print_deep(tree1.Root,0);
    Node* elem2=tree1.find_(tree1.Root,60);
    if(elem2!=NULL){
        cout<<"\n"<<elem2->name<<"\t"<<elem2->rating;
    }
    tree1.remove_(elem2,tree1.Root);
    tree1.print_deep(tree1.Root,0);
    //cout<<"\n"<<elem2.name<<
    return 0;
}
