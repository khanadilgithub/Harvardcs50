#include <iostream>
#include <string.h>
#include<Vector>
using namespace std;
void Snackbar()
{
    //variable declaration
    string item= "";
    int nItem=0;
    float cost =0.0;
    vector<string> OrderedItem;
    // Welcome Greeting
    cout<<"Welcome to Beach Burger Shake!"<<endl; 

    //Menu 
    cout<<"Choose from following menu to order. Press enter when done."<<endl;
    cout<<"Burger: $9.50"<<endl;
    cout<<"Vegan Burger: $11.00"<<endl;
    cout<<"Hot Dog: $5.00"<<endl;
    cout<<"Cheeese Dog: $7.00"<<endl;
    cout<<"Fries: $5.00"<<endl;
    cout<<"Cheese Fries: $6.00"<<endl;
    cout<<"Cold Pressed Juice: $7.00"<<endl;
    cout<<"Cold Brew: $3.00"<<endl;
    cout<<"Water: $2.00"<<endl;
    cout<<"Soda: $2.00"<<endl;

    //Order Collection

    while(nItem<4)
    {
        cout<<"Enter a food item: ";
        getline(cin, item); //reading input text
        OrderedItem.push_back(item);
        nItem++;
    }

    //Total cost calclaton 
    for (auto elm: OrderedItem)
    {
        if(elm=="Burger")
        {
            cost+=9.50;
        }
        else if(elm == "Vegan Burger")
        {
            cost+=11.0;
        }
        else if(elm=="Hot Dog")
        {
            cost+=5.0;
        }
        else if(elm=="Cheese Dog")
        {
            cost+=7.0;
        }
        else if(elm=="Fries")
        {
            cost+=5.0;
        }
        else if(elm=="Cheese Fries")
        {
            cost+=6.0;
        }
        else if(elm=="Cold Pressed Juice")
        {
            cost+=7.0;
        }
        else if(elm=="Cold Brew")
        {
            cost+=3.0;
        }
        else if(elm=="Water")
        {
            cost+=2.0;
        }
        else if(elm=="Soda")
        {
            cost+=2.0;
        }
        else 
        {
            cout<<"Sorry We can't Serve "<<elm<< " You can choose items mentioned in the menu only."<<endl;
        }
    }
    cout<<"Your Total cost is: $"<<cost<<endl;
    cout<<"Thank you for your order. Visit again!"<<endl;

}