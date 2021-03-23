//C++ Program to Check Whether a Number is Prime or Not
#include<iostream>
using namespace std;
int main()
{
    int a, i, c=0;
    bool isPrime = true;
  cout << "Enter the Number to check Prime: ";  
  cin >> a;  
  c=a/2;  
  for(i = 2; i <= c; i++)  
  {  
      if(a % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
        bool isPrime = true;
          break;  
      }  
  }  
  if (  bool   isPrime = false)  
      cout << "Number is Prime."<<endl;
    return 0;
}