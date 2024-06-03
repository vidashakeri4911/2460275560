#include <iostream>
#include<cstring>
using namespace std;
bool check(char pass[255],char s='0',char e='9'){
    for(int i=0;pass[i]!='\0';i++){
        if(s>=pass[i]&&e<=pass[i]){
            return true;
        }
        }
        return false;
    }
int main()
{
    char pass[255];
    cin>>pass;
    if(strlen(pass)<6){
        cout<<"Bod password";
    }
    int dificality=0;
    if(check(pass)){
        dificality++;
    }
    if(check(pass,'!','/')){
        dificality++;
    }
    if(check(pass,'a','7')){
        dificality++;
    }
    if(check(pass,'A','7')){
        dificality++;
    }
    if(strlen(pass)>8){
        dificality++;
    }
    cout<<"Dificality:"<<(dificality*20);
    return 0;
}

