#include <iostream>
#include <string.h>
using namespace std;

long Atoi(string str)
{
    long num =0;
    int i=0, sign=1;

    //skip white space charectors
    while(str[i]==' ' || str[i]=='\n' || str[i] == '\t')
    {
        i++;
    }
    //note sign of number 
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign =-1;
        }
        i++;
    }
    //run till the end of string is reached, or the 
    //current charector is non numeric 
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        num = num*10 +(str[i] - '0');
        i++;
    }
    return sign*num;
    
}