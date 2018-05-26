#include <iostream>
using namespace std;

typedef struct LinkedList{
    int Data;
    struct LinkedList *NextNode;
}s,*NodePtr;

NodePtr CreateList(int n){

    NodePtr np = (NodePtr)malloc(sizeof(s));

    np->Data = n;
    np->NextNode = NULL;
}

NodePtr Print(NodePtr Str){

    cout<<"The Linked List is : "<<endl;

    while(Str != NULL){
        cout<<Str->Data<<" ";
        Str = Str->NextNode;
    }

}
int main() {

    NodePtr np,Str = NULL,Crnt;
    int n;
    cout<<"Enter your data for (-1) to finish : "<<endl;

    while(cin>>n){

        if(n == -1)
            break;
        np = CreateList(n);

        if(Str == NULL)
            Str = np;

        else
            Crnt->NextNode = np;

        Crnt = np;

    }

    Print(Str);

    return 0;
}

/* WAP to create a Linked List and store some values
 * Mazedul Islam
 * Year : 2nd
 */