
#include <iostream>
#include<cstring>
using namespace std;
struct valiCard{
    char prefix[4];
    char bank[30];
};
valiCard vcs[3];
void x(){
  strcpy(vcs[0].prefix,"5041");
  strcpy(vcs[0].bank,"Resalat");
  strcpy(vcs[1].prefix,"6037");
  strcpy(vcs[1].bank,"Meli");
  strcpy(vcs[2].prefix,"6104");
  strcpy(vcs[2].bank,"Mellat");
}
  struct card{
      char number[16];
      char bank[30];
      bool isvalid()
      {
          for(int i=0;i<3;i++){
            if(!strncmp(number,vcs[i].prefix,4)){
                strcpy(bank,vcs[i].bank);
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
