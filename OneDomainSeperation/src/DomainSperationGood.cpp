/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty
Example for good domain speration
*/
#include<iostream>
#include<String>
using namespace std;
/*
	Why is this an example of domain seperation? Well the tester of the program doesn't need to acces
	the "highlyImportantValue" but only the  programmer has access to this variable. Creating a fence between its declaration and the rest of the world. 
*/

int main()
{
	string input;
	cout<< "Would you like to mess with my value?"<<endl;
	cout<<"Y/N"<<endl;
	cin>> input;
	cout<< "Well, you can't because it's private and safe in a class"<<endl;
}
class example
{
	private: int highlyImportantValue;
	public: int forProgrammerEyesOnly()
	{
		return highlyImportantValue;
	}

};