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
private:
	int myA;
	int myB;
public:
	void setIntA(int a)
	{
		myA = a;
		//myB = b;
	}
	void setIntB(int b)
	{
		myB = b;
	}
	int getIntA()
	{
		//std::pair <int,int> myPair;
		//myPair.first = myA;
		//myPair.second = myB;
		return myA;
	}
	int getIntB()
	{
		return myB;
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
	cout<< "A: "<< myVal.getIntA()<<endl;
	cout<< "B: "<< myVal.getIntB()<<endl;
	myVal.setIntA(a);
	myVal.setIntB(b);
	cout<< "Here are what the class variables are after setting them"<<endl;
	cout<< "A: "<< myVal.getIntA()<<endl;
	cout<< "B: "<< myVal.getIntB()<<endl;

}


