#include <iostream>

using namespace std;


int main()
{
    int x;
    cout<<"Enter number:";
    cin>>x;
    for(int i=0;i<=100;i++){
        cout<<'i'<<'*'<<'x'<<'='<<(x*i)<<'\n';
    }
    return 0;
}
