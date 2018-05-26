#include <iostream>
using namespace std;

int main() {

    int a[10][10],b[10][10],mult[10][10];
    int n,m;

    cout <<"Enter your (n x m) matrix : ";
    cin >> n >> m;

    cout <<"\nEnter your first matrix of elements : "<< endl;

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            cin >> a[i][j];
        }
    }

    cout <<"\nEnter your second matrix of elements : "<< endl;

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            cin >> b[i][j];
        }
    }


    cout <<"\nYour matrix Multiplication : \n"<< endl;

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            mult[i][j] = 0;
            for (int k = 0; k < m ; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int l = 0; l < n; ++l) {
        for (int i = 0; i < m ; ++i) {
            cout << mult[l][i] <<"  ";
        }
        cout <<"\n";
    }
    return 0;
}

/*WAP to perform addition/subtraction/multiplication of two matrices.
   Mazedul islam
   Dept : CSE
   Year : 2nd
   */
