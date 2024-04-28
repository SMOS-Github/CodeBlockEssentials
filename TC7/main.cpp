#include <iostream>

using namespace std;

int main()
{
    /**Currency Conversation - Complete */

    /**Sample
    1 dollar = 100 cents.
    1 quarter = 25 cents.
    1 dim = 10 cents.
    1 nickel = 5 cents.
    1 penny = 1 cents.
    */

    /**Output
   Input - 92 cents.
   Output
    dollar - 0
    quarter - 3
    dim - 1
    nickel - 1
    penny - 2
   */

    int cents{};
    cout<<"Enter Cents : ";
    cin>>cents;

    int dhold{};
    dhold=cents/100;

    int quarthold{};
    quarthold=cents/25;
   int holdNewNo{};
   holdNewNo=((cents)-quarthold*25);

   int dimHold{};
   dimHold=holdNewNo/10;
   int dimholdnew{};
   dimholdnew=( (holdNewNo)-dimHold*10);

    int nickHold{};
    nickHold=dimholdnew/5;
    int nickholdnew{};
    nickholdnew=((dimholdnew)-nickHold*5);

    int pennyHold{};
    pennyHold=nickholdnew/1;

    cout<<"============="<<endl;
    cout<<"Dollar : "<< dhold<<endl;
    cout<<"Quarter : "<< quarthold<<endl;
    cout<<"Dim : "<< dimHold<<endl;
    cout<<"Nickel : "<< nickHold<<endl;
    cout<<"Penny : "<< pennyHold<<endl;
}
