/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty
*/
#include<iostream>
#include<string>
#include<cmath>
using std::pow;
using namespace std;
/*
	This example is simple, it uses the power function to simply raise int a to int b.
*/

int main()
{
	int a=0;
	int b =0;
	cout<< "Enter one integer"<<endl;
	cin>>a;
	cout<<"Enter another"<<endl;
	cin >>b;
	cout<<a << " raised to the "<< b << " is: " << pow(a,b)<<endl;


}

