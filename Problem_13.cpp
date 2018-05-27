#include <iostream>
using namespace std;

long double fac(int n){

    long double Temp = 0;
   if(n == 1)
     return 1;

   else

       Temp = n*fac(n - 1);

    return Temp;
}

int main() {

    int num;

    cout<<"Enter your number : "<<endl;
    cin>>num;

    cout<<"The factorial of "<<num<<" is : "<<fac(num);

    return 0;
}