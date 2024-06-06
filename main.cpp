#include <iostream>

using namespace std;
struct Car{
    char brand[15];
    char model[15];
    int Carcard;
    int drive(int a){
        return Carcard+a;
    }
};
void showdata(Car b){
    cout<<"Brand:"<<b.brand<<endl;
    cout<<"Model:"<<b.model<<endl;
    cout<<"Distancedriven:"<<b.Carcard<<endl;
}
int main()
{
    Car c;
    cin>>c.brand;
    cin>>c.model;
    cin>>c.Carcard;
    showdata(c);
    int Carcard2;
    cout<<"cheghadr b Carcard ezafshe"<<endl;
    cin>>Carcard2;
    cout<<"Carcard afzayeshyafte:"<<c.drive(Carcard2);
    return 0;
}
