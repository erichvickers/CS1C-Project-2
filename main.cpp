/*
 SQUAD PROJECT 2 :
#6.	Provide “contact us” methods
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int contact;

	 cout << "CONTACT PAGE TO CONTACT THE SQUAD ! THE CREATORS OF THE 2D GRAPHICS MODELER ! " <<endl << endl;
	cout << "If you Wish to Contact The Creators of The 2D Graphics Modeler" << endl
			<< "By Email ~ Please Enter the Number 1 : " << endl
			<< "By Phone ~ Please Enter the Number 2 : " << endl<< endl;
cin >> contact;
	if(contact == 1)
	{
		cout << "The Creators of the Program 2D Graphics Modeler Direct Phone Number is :" << endl
				<<"1800-244-3119 "<< endl<< endl;
	}
	else if(contact == 2)
		{
			cout << "The Creators of the Program 2D Graphics Modeler Direct Email is : " << endl
					<< "SQUAD@gmail.com";
		}
	return 0;
}




