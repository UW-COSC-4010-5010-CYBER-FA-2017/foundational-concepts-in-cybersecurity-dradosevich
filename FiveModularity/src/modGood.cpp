/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty
*/
#include<iostream>
#include<string>
using namespace std;
/*
	This is a good example of modularity do to the fact that it uses a function. The same function can be used in multiple places, rather than haveing to retype
	The same code in every place used.
*/
int mySum(int a, int b);

int main()
{
	int a=0;
	int b =0;
	cout<< "Enter one integer"<<endl;
	cin>>a;
	cout<<"Enter another"<<endl;
	cin >>b;
	cout<<"The sum is "<<mySum(a,b)<<endl;


}

int mySum(int a, int b)
{
		return a+b;
}
