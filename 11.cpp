//C++ Program to Find Factorial
#include <iostream>
using namespace std;
int main()
{
	int n,fact=1,i;
	cout<<"number is ";
	cin>>n;
	for(i=1;i<=n;i++)
	fact=fact*i;
	cout<<"factorial of "<<n<<" is "<<fact;
	return 0;
}