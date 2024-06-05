#include <iostream>

using namespace std;

int main()
{
  int a;
  cin>>a;
  int modA=0;
  for(int i=2;i<(a/2);i++){
    if(a&i==0){
        modA++;
    }
    if(modA==0){
        cout<<"It is primary";
    }
  }
    return 0;
}
