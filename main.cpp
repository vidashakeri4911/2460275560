#include <iostream>

using namespace std;


int main()
{
    int a[9]={0},n;
    do{
        cout<<"Enter a number:";
        cin>>n;
        if(n>>0&&n<10){
            a[n-1]++;
        }
    }
    while(n!=0);
    int indexMax=0,indexMin=0,max=a[0],min=a[0];
    for(int i=0;i<9;i++){
        cout<<i+1<<":"<<a[i]<<endl;
        if(a[i]>max){
            indexMax=i;
            max=a[i];
        }
        if(a[i]<min){
            indexMin=i;
            min=a[i];
            }
            cout<<"Max:"<<indexMax+1<<":"<<a[indexMax]<<endl;
            cout<<"Min:"<<indexMin+1<<":"<<a[indexMin]<<endl;
    }
    return 0;
}
