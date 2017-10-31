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

class Values
{
public:
	int publicA;
	int publicB;
	int privateA=13;
	int privateB=13;
};

int main()
{
	Values myVal;
	string input;
	int in;
	cout<< "Hey, hey you user...Wanna mess with some public variables in a class? "<<endl;
	cin>>input;
	cout<< "I'm just gonna assume you said yes, because who wouldn't.\n Enter a new int"<<endl;
	cin>>in;
	myVal.publicA = in;
	myVal.publicB = in;

	cout<< "Wasn't that fun... wanna mess with some prototceted varables now? "<<endl;
	cout<< "Eh who am I kidding. You do. Enter a new int"<<endl;
	cin>> in ;
	myVal.privateA = in;
	cout<< "well look at that. I guess you are privlidged and can mess with things"<<endl;


}


