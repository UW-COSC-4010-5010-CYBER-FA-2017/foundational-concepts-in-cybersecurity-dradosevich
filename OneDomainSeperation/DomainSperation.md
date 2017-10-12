/*
Danny Radosevich
Cyber Security 
Principles of Cyber Secuirty
Example for poor domain speration
*/

/*
	Why is this a poor example of domain seperation? The "highlyImportantValue" is declared global so it can be accessed by essentially anything in the program.
	int highlyImportantvalue
	
*/
/*
	Why is this an example of domain seperation? Well the tester of the program doesn't need to acces
	the "highlyImportantValue" but only the  programmer has access to this variable. Creating a fence between its declaration and the rest of the world. 
	class example
{
	private: int highlyImportantValue;
	public: int forProgrammerEyesOnly()
	{
		return highlyImportantValue;
	}

};
*/

