//calculator with switch.
#include <iostream>
using namespace std;
int Operation (int a ,int b, char op)
{
    switch (op)
        {
        case '+':
            cout << a+b;
            break;
        case '-':
            cout <<a-b;
            break;
        case '*':
            cout << a*b;
            break;
        case '/':
            cout <<a/b;
            break;

        }
    return 0;
}
int main()
{
    int a,b;
    char op;
    cin >>a>>op>>b;
    Operation(a,b,op);
    cout << endl;
    return 0;
}
