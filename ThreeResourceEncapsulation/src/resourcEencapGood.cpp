/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty

*/
#include<iostream>
#include<String>
using namespace std;
/*
	Why is this an example of dresource encapsulation? The variables are are within a class and require specific methods to gain access to. 
*/
class Example
{
	private: int highlyImportantValue;
	public: int forProgrammerEyesOnly()
	{
		return highlyImportantValue;
	}

};

int main()
{
	Example example;
	cout<< "The int is "<< example.forProgrammerEyesOnly()<<endl;
}
