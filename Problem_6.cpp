#include <iostream>
using namespace std;

int Matrix_A[10][10];

int main() {

    int Row,Column,Arr_B[100],k = 0;
    cout<<"Enter your number of rows and column : "<<endl;
    cin>>Row>>Column;

    cout<<"\nPlease enter your elements : "<<endl;
    for (int i = 0; i < Row ; ++i) {
        for (int j = 0; j <= i ; ++j) {

            cin>>Matrix_A[i][j];
        }
    }

    cout<<"\nYour triangular matrix_A is : "<<endl;

    for (int i = 0; i < Row ; ++i) {
        for (int j = 0; j < Column ; ++j) {

            cout<<Matrix_A[i][j]<<" ";

            if( Matrix_A[i][j] != 0 )
                Arr_B[k++] = Matrix_A[i][j];

        }

        cout<<"\n";
    }

    cout<<"\n1D array_B representation : "<<endl;
    for (int l = 0; l < k ; ++l) {

        cout<<Arr_B[l]<<" ";

    }
    return 0;
}

/*WAP to store the elements of a Triangular matrix A into a 1D array B.
 Mazedul islam
 Dept : CSE
 Year : 2nd
 */