//C++ Program to Check Whether a Number is Palindrome or Not
#include <iostream>
using namespace std;

int main()
{
     int i, num, r,s=0;

     cout << "\n Enter a positive number: ";
     cin >> num;
     for(i=num;i>0; )
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
    if(s==num)
    {
        cout<<num<<" is a Palindrome Number";
    }
    else
    {
        cout<<num<<" is a not Palindrome Number";
    }
}