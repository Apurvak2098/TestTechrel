/*C++ Program to Find Quotient and Remainder*/

#include<iostream>
using namespace std;
int main()
{
	int dividend,divisor,quotient,Remainder;
	cout<<"Enter dividend="<<endl;
	cin>>dividend;
	cout<<"enter divisor="<<endl;
	cin>>divisor;

	quotient=dividend/divisor;
	Remainder= dividend%divisor;

	cout<<"Quotient="<<quotient<<"\n";
	cout<<"remainder="<<Remainder<<"\n";

	return 0;
}
