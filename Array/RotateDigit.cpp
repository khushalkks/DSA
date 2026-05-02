/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

int rotate(int n)
{
    int count = 0;
    
    for(int i=1;i<=n;i++)
    {
        
        int num = i;
        bool valid = true;
        bool change = false;
         
        while(num > 0 )
        {
            int digit = num % 10;
            
            if(digit == 3 || digit == 4 || digit == 7)
            {
                valid = false;
                break;
            }
            
            if(digit == 2 || digit == 5 || digit == 6 || digit == 9)
            {
                change = true;
            }
            
            num /= 10;
        }
        
        if(change && valid) 
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    
    cout<<"Enter the number";
    cin>>n;
    
    int ans = rotate(n);
    
    cout<<"Good no count = "<< ans << endl;
    
    return 0;
}


            
           