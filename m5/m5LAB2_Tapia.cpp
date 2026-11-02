// M5LAB2
// Jazmin Tapia
// 11/2
//CSC 134

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{

	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
    double length;  // The rectangle's length
    double width;    // The rectangle's width
    double area;      // The rectangle's area
          
   // Get the rectangle's length.
   
   // Get the rectangle's width.
   width = getWidth();
  
   length = getLength();
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength() {
    double length;

    cout << "What is the length of our rectangle? " << endl;
    cin >> length;

    return length;
}

double getWidth() {
    double width;

    cout << "What is the width of our rectangle" << endl;
    cin >> width;

    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}


//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
