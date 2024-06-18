#include <iostream>
#include<cstring>
using namespace std;

int main()
{

    /**
    Finding Data
    Complete

    **/

        string secretWord{"Hello there! , Welcome To SM ORIGINALS STUDIO\n"};
        string scan{};

        cin>>scan;
        size_t wordSyn=secretWord.find(scan);


        if(wordSyn!=string::npos)
        {
            cout<<"Data Found!"<<endl;
        }
        else{
            cout<<"Error 309 "<<endl;
        }

}
