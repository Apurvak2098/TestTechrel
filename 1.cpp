//C++ Program to Add, subtract, multiply and divide Two Numbers

#include <iostream>
using namespace std;
int main()
{
	int num1, num2, result;
    cout<<"Enter Two Numbers:\n ";
    cin>>num1;
    cin>>num2;
    result = num1+num2;
    cout<<"\nAddition Result = "<<result<<endl;
    result = num1-num2;
    cout<<"Subtraction Result = "<<result<<endl;
    result = num1*num2;
    cout<<"Multiplication Result = "<<result<<endl;
    result = num1/num2;
    cout<<"Division Result = "<<result<<endl;
    return 0;
}