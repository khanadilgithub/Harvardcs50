#include<iostream>
using namespace std;
void Caesar(int key)
{
    string plainText = "";
    string cipherText="";
    cout<<"Enter the plaintext: "<<endl;
    getline(cin, plainText); //reading input text
    int n =plainText.size();
    for (int i=0; i<n; i++)
    {
        char ch = plainText[i];

        if(isalpha(ch))
        {
            if(islower(ch))
            {
                ch= (ch-'a'+key)%26 + 'a';
            }
            else if(isupper(ch))
            {
                ch= (ch-'A'+key)%26 + 'A';
            }
        }

        cipherText+=ch;
    }
    cout<<cipherText<<endl;
}