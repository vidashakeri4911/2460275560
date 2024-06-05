#include <iostream>

using namespace std;
int inRange(int x,int low,int high){
    if(x>low&&x<high){
        return 0;
    }
    else if(x<low&&x>high){
        return 0;
    }
    else if(x>low&&x>high){
            return 1;
    }else{
        return -1;
    }

}
int inRang(char x,char low,char high){
    if(x>low&&x<high){
        return 0;
    }
     else if(x<low&&x>high){


        return 0;
}

else if(x>low&&x>high){
            return 1;
}
else{
        return -1;
    }

}

int main()
{
    char gens;
    cout<<"lmport int or char?(i or c)";
    cin>>gens;
    if(gens=='c'||gens=='C'){
        char a,b,c;
        cout<<"enter 3 char:";
        cin>>a>>b>>c;
        cout<<inRange(a,b,c);
    }
    if(gens=='i'||gens=='l'){
        int a,b,c;
        cout<<"enter 3 integer:";
        cin>>a>>b>>c;
        cout<<inRange(a,b,c);
    }
    return 1;
}
