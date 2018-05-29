#include <iostream>
using namespace std;

typedef struct node
{
    int info;
    struct node *link;
}Node,*Nodeptr;

Nodeptr makeNode(int n)
{
    Nodeptr np=(Nodeptr) malloc(sizeof(Node));
    np->info=n;
    np->link=NULL;
    return np;
}

int searching(Nodeptr start, int item)
{
    Nodeptr LOC=NULL;
    Nodeptr ptr=start;

    int ind=0;
    while(ptr!=NULL)
    {
        ind++;
        if(item==ptr->info){
            LOC=ptr;
            return ind;
        }
        else ptr=ptr->link;
    }
    return 0;
}

int main()
{
    int n, item,L;
    Nodeptr start,np,last;
    start=NULL;

    cout<<"Enter your number(-1 to finish) " <<endl;
    while (cin>>n)
    {
        if(n==-1)
            break;

        np=makeNode(n);

        if(start==NULL)
            start=np;
        else
            last->link=np;

        last=np;
    }

    cout<<"Enter search item : "<<endl;
    cin>>item;

    L=searching(start, item);

    if(L==0)
        cout<<"Not Found";
    else
        cout<<"Found is location "<<L<<endl;

    return 0;
}