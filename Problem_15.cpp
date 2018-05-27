#include <iostream>

using namespace std;

int Count = 0;

int towers(int num, char A, char B, char C) {

    if (num == 1) {

        cout << endl;
        cout<< "Step : "<< ++Count <<"       "<< A << " --> " << B << endl;
        return 0;
    }

    towers(num - 1, A, C, B);

    cout << "Step : "<<++Count <<"       "<< A << " --> " << B;

    towers(num - 1, C, B, A);

}

int main() {

    int num;

    cout << "Enter the number of disks : ";
    cin >> num;
    cout << "The sequence of moves involved in the Tower of Hanoi are :\n\n" ;

    towers(num, 'A', 'C', 'B');
    cout<<"Step : "<<++Count<<" END\n\n";
    return 0;
}
