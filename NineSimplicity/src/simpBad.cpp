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
	This example is snot simple. Rther than using a nuilt in functio, it uses a for loop to make a simple calculation, which includes having an additional variable
	And opens up the code to the possibility of an offf by on error. 
*/

int main()
{
	int a=0;
	int b =0;
	int result =0;
	cout<< "Enter one integer"<<endl;
	cin>>a;
	cout<<"Enter another"<<endl;
	cin >>b;
	result=a;
	for(int i=0; i<b; i++)
	{
		result*=a;
	}
	cout<<a << " raised to the "<< b << " is: " << result<<endl;


}

