#include <iostream>
using namespace std;

int main() {

    int num[20],Range,temp = 0;

    cout<<"****** Welcome to Bubble sort ******\n"<<endl;
    cout<<"Enter Your range : ";
    cin>>Range;

    cout<<"Enter your elements : ";

    for (int i = 0; i < Range ; ++i) {
        cin>>num[i];
    }

    for (int j = 0; j < Range - 1  ; ++j) {
        for (int i = 0; i <  (Range -1)- j ; ++i) {

            if(num[i]  > num[i + 1]){

                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
        }
    }

    cout<<"\nResult : ";

    for (int k = 0; k < Range ; ++k) {

        cout<<num[k]<<" ";

    }

    return 0;
}

/*WAP to sort some data using bubble sort.
 Mazedul islam
 Dept : CSE
 Year : 2nd*/