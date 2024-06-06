#include <iostream>

using namespace std;

int main()
{
    int a,x;
    cout<<"enter a number"<<endl;
    cin>>a;
    for(int i=1;i<=100;i++){
        x=a*i;
        if(x<=100){
            cout<<i<<"x"<<a<<"="<<x<<endl;
        }else{
        break;
        }
    }
    return 0;
}
