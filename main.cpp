#include <iostream>

using namespace std;

int main()
{
    int num;
    char ch;
    cout<<"please enter a number:";
    cin>>num;
    cout<<"please enter a character:";
    cin>>ch;
    for(int i=0;i<num;i++)
        cout<<ch<<endl;

    return 0;
}
