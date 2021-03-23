//C++ Program to Find All Roots of a Quadratic Equation

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,determinant,root1,root2, realPart,imaginaryPart;
	cout<<"enter coefficients a,b,c of quadratic equation\n";
	cin>>a>>b>>c;

	determinant=(b*b-4*a*c);
	if (determinant >0){
		root1=(-b+sqrt(determinant)/(2*a));
	    root2=(-b-sqrt(determinant)/(2*a));
	    cout<<"quadratic equation="<<root1<<" "<<root2<<" "<<"\n";
	}
	else if (determinant == 0)
	{
        cout << "Roots are real and same." << endl;
        root1 = -b/(2*a);
        cout << "root1=root2=" << root1 << endl;
    }

    else
    {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-determinant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "root1 " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "root2 " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    return 0;
}