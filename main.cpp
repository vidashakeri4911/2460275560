#include <iostream>
#define pi 3.14
using namespace std;
float masahat(int n)
{
    return pi*n*n;
}
float mohit(int a)
{
    return pi*a*2;
}
int main()
{
    int r;
    cout<<"enter Radius:";
    cin>>r;
    cout<<"Area of circle is:"<<masahat(r)<<endl;
    cout<<"perimeter of circle is:"<<mohit(r);
    return 0;
}
