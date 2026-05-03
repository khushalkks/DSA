/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

bool rotatestring(string s , string goal)
{
    if(s.length() != goal.length())
    {
        return false;
    }
    
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(s == goal)
        {
            return true;
        }
            char ch  = s[0];
            s.erase(0,1);
            s.push_back(ch);
        }
        
        return false;
}
   
int main()
{
    string s;
    string goal;
    
    cout<<"Enter the main string s";
    cin>>s;
    
    cout<<"Enter the goal string";
    cin>>goal;
    
    bool res = rotatestring(s,goal);
    
    if(res)
    {
       cout<<"String are rotate to each other"<<res<<endl;
    }
    
    else
    {
        cout<<"String are not rotate to each other"<<res<<endl;
    
    }
     
    return 0;
};
   

   