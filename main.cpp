#include <iostream>

using namespace std;

int main()
{
    float grade;
    cout<<"enter grade:";
    cin>>grade;
    if(grade>=17){
        cout<<"a level";
    }
    if(grade>=14&&grade<17){
        cout<<"b level";
    }
    if(grade>=10&&grade<14){
        cout<<"c level";
    }
    if(grade<10){
        cout<<"d level";
    }
    if(grade<12){
        cout<<"mashroot!";
    }
    return 0;
}
