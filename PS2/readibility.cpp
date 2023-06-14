#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

void Readibility()
{
  string text = "";
  getline(cin, text); //reading input text
  int n =text.size();
  
  int nLetter=0; //Number of Letter
  float nWord=1.0; //Number of World 
  int nSentence=0; //Number of Sentence
  
  float L= 0.0; //avg num of letters per 100 words
  float S = 0.0; //avg num of sentence per 100 words
  float index=0.0; //Coleman-Liau index.
  
  for (int i=0; i<n; i++)
    {
      char c=toupper(text[i]);
      if (c== ' ')
      {
        nWord++;
      }
      else if (c== '!' || c== '.' || c== '?')
      {
        nSentence++;
      }
      else if('A'<=c && c <= 'Z')
      {
        nLetter++;
      }
    }
  
  L= (nLetter/nWord)*100;
  S= (nSentence/nWord)*100;
  index= 0.0588*L - 0.296*S - 15.8; //Coleman-Liau formula

  if (round(index) < 1)
  {
    cout<<"Before Grade 1"<<endl;
  }
  else if (round(index)>15)
  {
    cout<<"Grade 16+"<<endl;
  }
  else
  {
    cout<< "Grade "<<round(index)<<endl;
  }
  
}