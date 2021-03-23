//C++ Program to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout <<"enter 3 no.s\n";
	cin>>a>>b>>c;

	if(a>=b && a>=c)
		cout<<"largest number\n"<<a;
	else if(b>=a && b>=c)
		cout<<"largest number\n"<<b;
	else 
		cout<<"largest number\n"<<c;
	
}