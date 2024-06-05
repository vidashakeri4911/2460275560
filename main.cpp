#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=0&&b>=0){
        cout<<"Both are positive";
    }
    if(a<0&&b<0){
        cout<<"Both are nehetive";
    }
    if(a==0&&b==0){
        cout<<"Both are Zero";
    }
    if(a>b){
        cout<<"a is bigger";
    }
    else{
        cout<<"b is bigger";
    }
    if(a>=0){
        cout<<"a is positive";
    }
    else{
        cout<<"b is nehetive";
    }
    return 0;
}
