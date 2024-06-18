#include <iostream>
#include<string>
using namespace std;

int main()
{

    /**
    Encrypting And Decrypting
    program Complete.
    **/

   string alphaText{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()"};
   string encryptkey{"qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM!@#$%^&*()0987654321"};

    string inputWords{};
    string encryptWords{};
    string decryptWords{};

    cout<<"\nWelcome to Encrypt & Decrypting Service."<<endl;
    cout<<"\nEnter Your Words : ";
    getline(cin,inputWords);
    cout<<"\nData Feed : "<<inputWords<<endl;
    cout<<"\nEncrypting in Progress..."<<endl;

    for(char c:inputWords)
    {
        size_t pos=alphaText.find(c);
        if(pos!=string::npos)
        {
            char nc=encryptkey.at(pos);
            encryptWords+=nc;
        }
        else
        {
                encryptWords+=c;
        }
    }
    cout<<"\nEncrypted Data : "<<encryptWords<<endl;
    cout<<"\nDecrypting Data... \n"<<endl;

    for(char cc:encryptWords)
    {
        size_t posi=encryptkey.find(cc);
        if(posi!=string::npos)
        {
            char nnc=alphaText.at(posi);
            decryptWords+=nnc;
        }
        else
        {
                decryptWords+=cc;
        }
    }
     cout<<"\nDecrypted Data : "<<decryptWords<<endl;














}
