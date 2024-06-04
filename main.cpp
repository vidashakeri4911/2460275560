#include <iostream>

using namespace std;


int main()
{
    float tankFuel,fuelRate,distance;
    cin>>tankFuel>>fuelRate;
    distance=(tankFuel/fuelRate)*100;
    if(distance<100){
        cout<<"please refull tank";
    }
    cout<<"Distance:"<<distance;

    return 0;
}
