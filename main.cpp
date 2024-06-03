#include <iostream>
#include<cstring>
using namespace std;
struct validcard{
    char prefix[4];
    char bank[30];
};
  validcard vcs[3];
  vcs[0].prefix="5041";
  vcs[0].name="Resalat";
  vcs[1].prefix="6037";
  vcs[1].bank="meli";
  vcs[2].prefix-"6104";
  vcs[2].bank="Mellat";
  struct card{
      char number[16];
      char bank[30];
      bool isvolid()
      {
          for(int i=0;i<3;i++){
            if(!strncmp(number,ves[i].prefix,4)){
                strcmp(bank,vcs[i].name);
                return true;
            }
          }
          return false;
      }
  };
int main()
{
    card card;
    cin>>card.number;
    if(card.isvalid()){
        cout<<card.bank;
    }else{
        cout<<"Bad!";
    }
    return 0;
}
