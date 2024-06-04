#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4,n5;
    int max,min;
    cout<<"Please enter n1 n2 n3 n4 n5";
    cin>>n1>>n2>>n3>>n4>>n5;
    max=n1;
    min=n1;
    if(n2>max){
        max=n2;
    }
    if(n3>max){
       max=n3;
       }
       if(n4>max){
        max=n4;
       }
       if(n5>max){
        max-n5;
       }
       if(n2<min){
        min=n2;
       }
       if(n3<min){
        min=n3;
       }
       if(n4<min){
        min=n4;
       }
       if(n5<min){
        min=n5;
       }
       cout<<"Max:"<<max;
       cout<<"Min:"<<min;
       cout<<(n1+n2+n3+n4+n5)/5.0;
    return 0;
}
