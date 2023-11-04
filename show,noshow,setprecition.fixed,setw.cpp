#include<iostream>
#include<iomanip>//for setprecisison header file
using namespace std;
int main()
{
    //cout<<showpoint;
    //cout<<noshowpoint;
    //cout<<showpoint<<setprecision(15);
    cout<<fixed<<setprecision(2);
    float a=5-3;
    cout<<setw(20)<<a<<endl<<setw(20)<<a+5<<endl<<endl<<setw(20)<<a*7<<endl;
    cout<<-a<<endl;
    int aa=12,b=32,c;
    c=aa&b;
    cout<<c<<endl;
    c=aa|b;
    cout<<c<<endl;
    c=aa^b;
    cout<<c<<endl;
    c=aa>3;
    cout<<c<<endl;
    c=aa<3;
    cout<<c<<endl;
}
