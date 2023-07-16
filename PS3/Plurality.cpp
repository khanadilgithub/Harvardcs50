#include <iostream>
#include <string.h>
#include<Vector>
using namespace std;
struct Candidate
{
    string name ="";
    int vote =0;
};
Candidate Candidates[3] = {{"Alice",0}, {"Bob",0}, {"Charlie",0}};
bool Vote(string cname)
{
    if(cname=="Alice")
    {
        Candidates[0].vote++;
        return true;
    }
    else if(cname=="Bob")
    {
        Candidates[1].vote++;
        return true;
    }
    else if(cname=="Charlie")
    {
        Candidates[2].vote++;
        return true;
    }
    else 
    {
        return false;
    }

}
void PrintWinner()
{
    int maxVote=0;
    for (int i=0; i<3; i++)
    {
        if(maxVote<Candidates[i].vote)
        {
            maxVote=Candidates[i].vote;
        }
    }
    for (int i=0; i<3; i++)
    {
        if(maxVote==Candidates[i].vote)
        {
            cout<<Candidates[i].name<<endl;
        }
    }
}
void Plurality()
{
    int nVoter=0;
    int vCasted=0;
    cout<<"Number of Voters: ";
    cin>>nVoter;
    string cname="";
    while(vCasted<nVoter)
    {
        cout<<"Vote: ";
        cin>>cname;
        if(!Vote(cname))
        {
            cout<<"Invalid Vote"<<endl;
        }
        vCasted++;
    }

    PrintWinner();

}