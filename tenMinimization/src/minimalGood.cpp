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

class Values
{
private:
	int myA;
	int myB;
public:
	void setInts(int a, int b)
	{
		myA = a;
		myB = b;
	}
	std::pair<int,int> getInts()
	{
		std::pair <int,int> myPair;
		myPair.first = myA;
		myPair.second = myB;
		return myPair;
	}

};
int main()
{
	int a=0;
	int b =0;
	Values myVal;
	cout<< "Enter the first int"<<endl;
	cin>>a;
	cout<<"Enter the second int"<<endl;
	cin>>b;
	cout<< "Here are what the class variables are currently"<<endl;
	cout<< "A: "<< myVal.getInts().first<<endl;
	cout<< "B: "<< myVal.getInts().second<<endl;
	myVal.setInts(a,b);
	cout<< "Here are what the class variables are after setting them"<<endl;
	cout<< "A: "<< myVal.getInts().first<<endl;
	cout<< "B: "<< myVal.getInts().second<<endl;

}


