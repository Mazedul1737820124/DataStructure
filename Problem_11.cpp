#include <iostream>
#include<stack>
#include <cmath>

using namespace std;

int IsOperator(char Optr) {

    char Operator[] = {'+', '-', '*', '/', '^'};

    for (int i = 0; i < sizeof(Operator); i++) {

        if (Optr == Operator[i])
            return 1;
    }
       return 0;

}


int  Convert(char Cnrt){

    return (Cnrt - '\0' - 48);
}

int Calculate(int a,int b, char Ch){

    switch(Ch){

        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        case '^':
            return powl(a,b);
    }
}
int Postfix(string Input){

    stack<int>S;

    int i=0;
    Input = Input + ")";

    while(Input[i] != ')') {

        if(IsOperator(Input[i])){

            int a,b;
            b = S.top();
            S.pop();
            a = S.top();
            S.pop();

            int value = Calculate(a,b,Input[i]);
            S.push(value);
        }

        else {
            int Operand = Convert(Input[i]);

            S.push(Operand);
        }

        ++i;

    }

    int ans = S.top();
    S.pop();
    return ans;


}
int main() {


    string Str;

    cout<<"Please enter your postfix expression : "<<endl;
    cin>>Str;

    int Result = Postfix(Str);

    cout<<"Answer is : "<<Result;
    return 0;
}