#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter number:";
    cin>>number;
    if(number>=0&& number<-10){
        if(number%2==0){
            cout<<"Even"<<endl;
            if(number<5){
                cout<<"smallerthan 5";
            }
            else{
                cout<<"Biggerthan 5";
            }
        }
    }
    return 0;
}
