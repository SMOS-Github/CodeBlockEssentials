#include <iostream>

using namespace std;

int main()
{
    /** Car Cleaning Service - Complete */

    int mv{5000};
    int bv{10000};
    int tax{6};
    int inb{};
    int ins{};
    int tc{};
    int total{};

    cout<<"Welcome To Car Cleaning Service "<<endl;

    cout<<"Here is Service Options"<<endl;
    cout<<"Mini Van's : "<<mv<<endl;
    cout<<"Big Van's : "<<bv<<endl;

    cout<<"\n So, How many do you have big and small ones : "<<endl;
    cout<<"How many big ones : ";
    cin>>inb;
    cout<<"How many small one : ";
    cin>>ins;

    cout<<"!OK Here is your total cost"<<endl;
    tc=inb+ins;
    cout<<"No of cars : "<<tc<<endl;
    cout<<"Big's : "<<inb<<endl;
    cout<<"Small's : "<<ins<<endl;


    mv=mv*ins;
    bv=bv*inb;

    tax=tax*tc;
    cout<<"Total Tax : "<<tax<<"%"<<endl;
    total=mv+bv+tax;
    cout<<"Total : "<<total<<endl;
    return 0;
}
