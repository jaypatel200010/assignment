//Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include <string>
using namespace std;
//class create
class concatenate{
	public:
		string str;
//	constructor
	concatenate(string s)
	{
		str = s;
	}
	//		operator overloading
	string operator +(concatenate obj)
	{
		return str+obj.str;
	}
};


int main()
{
	concatenate obj("Jay");
	concatenate obj1(" Patel");
	cout<<obj+obj1;
	return 0;
}
