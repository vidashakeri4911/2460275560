#include <iostream>

using namespace std;

int main()
{
    int password,defaultpassword;
    cout<<"Please enter defaultpassword:";
    cin>>defaultpassword;
    do{
        cout<<"Enter Password:";
        cin>>password;
    }
    while(password!=defaultpassword);
    cout<<"Login Successed";

    return 0;
}
