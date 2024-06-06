#include <iostream>

using namespace std;
int pow(int a,int b){
    if(b==0){
        return b;
    }
    return a*pow(a,b-1);
}

int zarb(int a,int b){
    if(b==0){
        return 1;
    }
    return a+zarb(a,b-1);
}
struct calculator{
    int lv,rv;
    char op;
    void run()
    {
        cout<<"enter operator"<<endl;
        cin>>op;
        switch(op){
        case'^':
        cin>>lv>>rv;
        cout<<pow(lv,rv);
        break;
        case'*':
        cin>>lv>>rv;
        cout<<zarb(lv,rv);
        break;
        case'+':
        cin>>lv>>rv;
        cout<<(lv+rv);
        break;
        case'-':
        cin>>lv>>rv;
        cout<<(lv-rv);
        break;
        case'/':
        cin>>lv>>rv;
        cout<<(lv/rv);
        break;
        default:
        cout<<"Bad!";
        }
    }
};

int main()
{
    calculator c;
    c.run();
    return 0;
}
