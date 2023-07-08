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
        char c = plainText[i];
        //cout<<key;
        if(isalpha(c))
        {
            //char c= ((int)c + key)%26;
            cout<<c;
        }
        else
        {
            cout<<c;
        }
    }
    cout<<endl;
}