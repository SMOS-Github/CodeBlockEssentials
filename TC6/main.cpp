#include <iostream>
#include<vector>
using namespace std;

int main()
{
    /** Print Vector - Complete */

    vector<int>vector1{1};
    vector<int>vector2{1};

    cout<<"Vector Elements : "<<endl;
   cout<<"================="<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector2.at(0)<<endl;

    cout<<"Enter Element To Add In Vector"<<endl;
    int no1{};
    int no2{};

    cout<<"Now First"<<endl;
    cin>>no1;
    cout<<"Now second"<<endl;
    cin>>no2;

    vector1.push_back(no1);
     vector2.push_back(no2);

    cout<<"Updated Elements :";
    cout<<vector1.at(1)<<endl;
    cout<<"Updated Elements :";
    cout<<vector2.at(1)<<endl;

    cout<<"Another Change "<<endl;
    vector1.at(0)=1000;
    vector2.at(0)=2000;

    cout<<"Updated Elements :";
    cout<<vector1.at(0)<<endl;
    cout<<"Updated Elements :";
    cout<<vector2.at(0)<<endl;

}
