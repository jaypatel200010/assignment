//Write a program to find the multiplication values and the cubic values using
//inline function

#include<iostream>
using namespace std;
//multiplication using inline function
inline int multiplication(int a,int b)
{
	return a*b;
}
//cube using inline function
inline int cubic(int a,int b,int c)
{
	return a*b*c;
}
//values passed
int main()
{
	cout<<"multiplication Values: "<<multiplication(2,2)<<endl;
	cout<<"Cubic values: "<<cubic(2,2,2);
	return 0;
}
