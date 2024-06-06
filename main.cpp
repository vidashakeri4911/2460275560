#include <iostream>

using namespace std;
struct point{
    double x;
    double y;
};
void calculateline(point p1,point p2){
    double a=(p2.y-p1.y)/(p2.x-p1.x);
    double b=p1.y-a*p1.x;
    cout<<"y="<<a<<"x+"<<b<<endl;
}
int main()
{
    point p1={1.0,2.0};
    point p2={3.0,4.0};
    calculateline(p1,p2);
    return 0;
}
