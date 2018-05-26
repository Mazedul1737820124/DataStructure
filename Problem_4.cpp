#include <iostream>

using namespace std;

int main()

{
    int a[5]={3,2,1,4,5};
    int  b[5]={9,8,6,7,0};
    int c[10];

    cout<<"Array a : ";
    for(int i=0;i<=4;i++)
    {
        cout<<" "<<a[i];

    }

    cout<<"\nArray  : ";
    for(int i=0;i<=4;i++)
    {
        cout<<" "<<b[i];
    }
    for(int i=0;i<=4;i++)
    {
        c[i]=a[i];
    }

    for(int i=0,k=5;k<=10&&i<5;i++,k++)
    {
        c[k]=b[i];
    }
    cout<<"\nmerging\n";
    for(int i=0;i<=9;i++)
    {
        //cout<<"\n";
        cout<<" "<<c[i];
    }

    return 0;
}


/*  WAP to merge two same type arrays
   Mazedul islam
   Dept : CSE
   Year : 2nd
   */