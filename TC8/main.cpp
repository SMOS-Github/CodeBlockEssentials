#include <iostream>
#include<vector>
using namespace std;

int main()
{
        /**Objective
        A -  to add no.
        S - Show list of no.
        M - Mean of no.
        Show all small elements.
        Show all Big Elements.
        E - to Exit the program.

      Complete .
        */

        char key{};
        vector<int>store{};

        cout<<"\tSelect Options\n"<<endl;
        cout<<"Press A - Add No In List."<<endl;
        cout<<"Press L - Show All List."<<endl;
        cout<<"Press M - Show Mean Value In List."<<endl;
        cout<<"Press S - Show Smallest Element In List."<<endl;
        cout<<"Press H - Show Highest Element In List."<<endl;
        cout<<"Press E - Exit The Program."<<endl;

        do
        {
            cout<<"\nOption : ";
            cin>>key;
           if(key=='a'||key=='A')
           {
               int myNo{};
               cout<<"\nAdd No in List : ";
               cin>>myNo;
               store.push_back(myNo);
               cout<<"\nNo "<<myNo<<" Added In List...\n"<<endl;
           }
           else if(key=='l'||key=='L')
           {
             if(store.size()==0)
             {
                 cout<<"\n[ List Is Empty ]\n"<<endl;
             }else
             {
                 cout<<"\n[ ";
                 for(auto detect : store)
                 {
                     cout<<" " <<detect<< " ";
                 }
                 cout<<" ]\n";
             }
           }
           else if(key=='m'||key=='M')
           {
              if(store.size()==0)
              {
                  cout<<"\n[ Please Add Element To Check Mean Value ]\n"<<endl;
              }
              else
              {
                 int result{0};
                 for(auto check:store)
                 {
                     result+=check;

                 }
                    cout<<"\nMean Value is : "<<static_cast<double>(result)/store.size()<<"\n";
              }
           }
           else if(key=='s'||key=='S')
           {
             if(store.size()==0)
             {
                 cout<<"\nNo Elements In List...\n"<<endl;
             }
             else
             {
                    int smValue=store.at(0);
                    for(auto ch:store)
                    {
                        if(smValue>ch)
                            {
                                smValue=ch;
                            }
                    }
                    cout<<"\nSmallest Value is : "<<smValue<<endl;
             }
           }
           else if(key=='h'||key=='H')
           {
               if(store.size()==0)
               {
                   cout<<"\nEnter Data To Check\n"<<endl;
               }
               else
               {
                   int hgValue=store.at(0);
                   for(auto c:store)
                   {
                       if(hgValue<c)
                       {
                           hgValue=c;
                       }
                   }
                   cout<<"\nHighest Value is : "<<hgValue<<endl;
               }
           }
           else if(key=='e'||key=='E')
           {
               cout<<"\nExiting The Program...\n"<<endl;
           }
           else
            {
                cout<<"\nType Correct Option...\n"<<endl;
           }
        }while(key!='e' && key!='E');
}
