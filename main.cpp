/*
 *
 SQUAD
 Project#2
Help Option :

 */



#include <iostream>
#include <string>

using namespace std;

//1.

int main()
{
	int helpOption;
	//Display Menu for options of what 2D graphics Modeler program Demonstrates
	//User can Select which Shape to draw & that with 2D graphics Modeler user is able to use :
	//Pen Width, Pen Style, Pen Cap Style, Pen Join Style Brush Color, Brush Style

	cout << " SQUAD's 2D Graphics Modeler : Help Option: " << endl << endl
	<< "In Squad's 2D Graphics Modeler " << endl
			<< "You are able to draw any Shape you choose "
			<< " with the Options of " << endl << endl
					<<"Coloring the Shape by changing the Shape Properties. " << endl
					<< "&Changing the Shapes Size by changing the Shape Dimensions. " <<endl << endl

			<<"WIth SQUAD's 2D Graphics Modeler You can alter the : " << endl
			<<" Shape That you wish to Draw!"<< " "<< "YAY!" << endl
			<< "Lets Start Drawing !  " << endl << endl;

	//Give user the option to draw the following shapes: Line, Polyline, Polygon, Rectangle, Ellipse,




	cout << "Please Enter a Number of the shape you want to Draw "
			<< endl;

	cout << "1. Line " <<endl;


	cout << "2. PolyLine " <<endl;

	cout << "3. Polygon " <<endl;
	cout	<< "4. Rectangle " <<endl;
	cout	<< "5. Ellipse " << endl;


	cin >> helpOption;

	if( helpOption == 1)
	{
		cout << "You have selected to draw a Line: "
				<< endl;

	}
	else if(helpOption == 2)
	{
		cout << "You have selected to draw a PolyLine: "
				<<endl;

	}
	else if(helpOption == 3)
	{
		cout << "You have selected to draw a Polygon: "
				<<endl;
	}
	else if(helpOption == 4)
	{
		cout << "You have selected to draw a Rectangle: "
				<<endl;
	}
	else if(helpOption == 5)
	{
		cout << "You have selected to draw a Ellipse: "
				<<endl;
	}

	return 0;
}
