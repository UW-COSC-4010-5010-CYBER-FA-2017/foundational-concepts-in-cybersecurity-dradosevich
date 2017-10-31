/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty
*/
#include<iostream>
#include<string>
#include<cmath>
#include<utility> 
using std::pair;
using std::pow;
using namespace std;



int main()
{
	int passOne = 4;
	int passTwo = 8;
	int passThree = 15;
	int passFour = 16;
	int passFive = 23;
	int passSix = 42;
	int input=0;

	bool pass = false;

	cout<< "Hello, I wanna play a game..."<<endl;
	cout<< "I will tell a secret if you can guess six exceedingly simple passwords to get there"<<endl;
	cout<< "... Or you look at the source code to cheat and see:"<<endl;
	cout<<"\t A: the passwords and \n\t B: The secret"<<endl;
	cout<<"\n\n";
	cout<<"To begin, the first number is in the range of 0-9"<<endl;
	cin>>input;
	while(!pass)
	{
		if(input==passOne)
		{
			pass = true;
			cout<<"Correct. Current pass = 4 "<<endl;
		}
		else
		{
			cout<< "Nope. Try again"<<endl;
			cin>>input;
		}
	}
	pass = false;
	cout<<"*****************************************************"<<endl;
	cout<< "Now enter the second password, again 0-9"<<endl;
	cin>> input;
	while(!pass)
	{
		if(input==passTwo)
		{
			pass = true;
			cout<<"Correct. Current pass = 4 8"<<endl;
		}
		else
		{
			cout<< "Nope. Try again"<<endl;
			cin>>input;
		}
	}
	pass = false;
	cout<<"*****************************************************"<<endl;
	cout<< "Now enter the third password it falls between 10-19"<<endl;
	cin>> input;
	while(!pass)
	{
		if(input==passThree)
		{
			pass = true;
			cout<<"Correct. Current pass = 4 8 15"<<endl;
		}
		else
		{
			cout<< "Nope. Try again"<<endl;
			cin>>input;
		}
	}
	pass = false;
	cout<<"*****************************************************"<<endl;
	cout<< "Now enter the fourth password, again 10-19"<<endl;
	cin>> input;
	while(!pass)
	{
		if(input==passFour)
		{
			pass = true;
			cout<<"Correct. Current pass = 4 8 15 16"<<endl;
		}
		else
		{
			cout<< "Nope. Try again"<<endl;
			cin>>input;
		}
	}
	pass = false;
	cout<<"*****************************************************"<<endl;
	cout<< "Now enter the fifth password, again 20-29"<<endl;
	cin>> input;
	while(!pass)
	{
		if(input==passFive)
		{
			pass = true;
			cout<<"Correct. Current pass = 4 8 15 16 23"<<endl;
		}
		else
		{
			cout<< "Nope. Try again"<<endl;
			cin>>input;
		}
	}
	pass = false;
	cout<<"*****************************************************"<<endl;
	cout<< "Now enter the sixth password. No hints this time..."<<endl;
	cout<< "If you're going to get the joke here you'll know the last one, or you can google '4 8 15 16 23' and it will give you the last one"<<endl;
	cout<< " I promise it isn't anything bad"<<endl;
	cin>> input;
	while(!pass)
	{
		if(input==passSix)
		{
			pass = true;
			cout<<"Correct. Current pass = 4 8 15 16 23 42"<<endl;
			cout<< "Get it, they're the numbers from lost. Good show"<<endl;
			cout<< "The bigger question here is, why do I still know those after not having watched it in like seven year?"<<endl;
			cout<<"No idea. But I needed something to create layers of security, even simply."<<endl;
		}
		else
		{
			cout<< "Nope. Try again"<<endl;
			cin>>input;
		}
	}
	
}


