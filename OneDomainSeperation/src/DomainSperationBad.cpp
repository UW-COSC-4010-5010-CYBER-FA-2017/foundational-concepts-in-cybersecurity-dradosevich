/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty
Example for poor domain speration
*/
#include<iostream>
#include<String>
using namespace std;
/*
	Why is this a poor example of domain seperation? The "highlyImportantValue" is declared global so it can be accessed by essentially anything in the program.
	
*/

int main()
{
	int highlyImportantValue =0;
	string input;
	cout<< "Would you like to mess with my value?"<<endl;
	cout<<"Y/N"<<endl;
	cin>> input;
	cout<< "Well, seeing as I didn't seperate it and what you inputted does not matter, here ya go: "<<endl;
	cout<< highlyImportantValue <<endl;
}
