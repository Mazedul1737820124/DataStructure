#include <iostream>
using namespace std;

int main() {

    int Arr[100],i = 0;

    cout<<"Enter your elements (-1) for end : "<<endl;

    while(cin>>Arr[i]){
        if(Arr[i] == -1){
            break;
        }

        i++;
    }

    cout<<"You entered : "<<endl;
    for (int j = 0; j < i ; ++j) {

        cout<<Arr[j]<<" ";

    }

    return 0;
}

//WAP to insert an element into a sorted array.
//Mazedul islam
//Dept : CSE
//Year : 2nd