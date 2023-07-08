#include<iostream>
#include <cmath>
using namespace std;

bool isargint(string arg)
{
    for (char elm: arg)
    {
        if (!isdigit(elm)) //checking if single char "elm" is a digit
        {
             return false; // if not returning false;
        }

        return true; //returning true if all are digit
    }
}
