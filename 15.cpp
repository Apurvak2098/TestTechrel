//C++ Program to Reverse a Number

#include<iostream>
using namespace std;
int main()
{
	int n,remainder,rev=0;
	cout<<"enter a numbers";
	cin>>n;
	while(n !=0)
	{
		remainder =n%10;
		rev = rev*10+ remainder;
		n=n/10;
	}
	cout<<"Reversed number= "<<rev;
}