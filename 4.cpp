//C++ Program to Swap Two Numbers

#include<iostream>
using namespace std;
int main()
{
	int n1,n2,temp;
	n1=10;
	n2=20;

	cout<<"before swapping: \n"<< "n1="<<n1<<"\n"<<"n2="<<n2<<"\n";
	temp=n1;
	n1=n2;
	n2=temp;
    
    cout<<"\nafter swapping: \n"<<"n1="<<n1<<"\n"<<"n2="<<n2<<"\n";

}