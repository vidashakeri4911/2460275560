
#include <iostream>

using namespace std;
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    return a*pow(a,b-1);
}
int fibo(int n){
    if(n==1||n==2){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int zarb(int a,int b){
       if(b==0){
        return 1;
       }
       return a+zarb(a,b-1);
}
  int fact(int n){
      if(n==1){
        return 6;
      }
       return n*fact(n-1);
  }
  struct Calculatur{
      int lv,rv;
      char op;
      void run()
  {
      cout<<"Enter oparator:";
        cin>>op;
        switch(op){
            case'^':
             cin>>lv>>rv;
             cout<<lv<<rv;
             break;
             case'f':
             cin>>lv;
             cout<<fibo(lv);
             break;
             case'*':
             cin>>lv;
             cout<<fact(lv);
             break;
             case'!':
             cin>>lv;
             cout<<fact(lv);
             break;
             detalt:
                 cout<<"Bad!";
        }
        }

  };


int main()
{
    Calculatur c;
    c.run();
    return 0;
}
