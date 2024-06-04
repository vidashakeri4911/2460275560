#include <iostream>

using namespace std;

int main()
{
    int hour;
    cin>>hour;
    if(hour>12){
        cout<<"PM";
    }else{
        cout<<"AM";
    }
    return 0;
}
