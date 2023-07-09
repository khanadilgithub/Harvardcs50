#include <iostream>
#include<string>
#include "PS2.h"

using namespace std;

int main(int argc, char* argv[])
{
  //Readibility();
  string arg=argv[1];
  bool correctKey =false;
  //bool correctKey = isargint(arg);
  correctKey = IskeyValid(arg);
  if(argc!=2 ||!correctKey)
  {
    cout<<"Usage: ./main cipher key "<<endl;
    return 1;
  }
  //int key= atoi(argv[1]);
  Caesar(key);
  Substitution(key);
}
