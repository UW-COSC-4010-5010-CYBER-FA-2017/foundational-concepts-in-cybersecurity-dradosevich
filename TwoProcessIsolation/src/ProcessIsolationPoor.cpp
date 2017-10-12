/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty
Example for poor process isolation
*/
#include<iostream>
#include<String>
using namespace std;
/*
	This program is almost the same  as the good example. However, checksum is not declared so it uses what ever was previously in that memory location. Which is extremely 
	poor 
	
*/

int main()
{
	int inputVal=0;
	int checkValue;
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

	return 0;

}
