/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty
Example for good process isolation
*/
#include<iostream>
#include<String>
using namespace std;
/*
	This is a simple check to compare an inputted number and a predeclared number (could be anything but I set zero)
	The key here is the check value is previously delcared.
	
*/

int main()
{
	int inputVal=0;
	int checkValue=0;
	cout<<"Enter a number"<<endl;
	cin>>inputVal;
	cout<< "The inputed value was "<< inputVal<<endl;
	cout<< "The chackValue is equal "<<checkValue<<endl;
	if(inputVal<checkValue)
	{
		cout<<" Input less than check"<<endl;
	}
	else if (inputVal>checkValue)
	{
		cout<< "InputVal is greater than the check"<<endl;
	}
	else if (inputVal==checkValue)
	{
		cout<<"Values are equal"<<endl;
	}
	else
	{
		cout<<"Who knows what happened"<<endl;
	}


}
