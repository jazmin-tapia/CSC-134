//m5hw
//Jazmin Tapia
//CSC 134
// 11/4

#include <iostream>
#include <limits>
using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();

int main() {
question2();
}

void question1() {
string month1;
string month2;
string month3;
double rainfall1;
double rainfall2;
double rainfall3;
double sumrainfall;
double finalrainfall;
cout << "Question 1:" << endl;
cout << "Enter month: ";
cin >> month1;
cout << "Enter inches of rainfall for " << month1 << ": ";
cin >> rainfall1;
cout << "Enter month: ";
cin >> month2;
cout << "Enter inches of rainfall for " << month2 << ": ";
cin >> rainfall2; 
cout << "Enter month: ";
cin >> month3;
cout << "Enter inches of rainfall for " << month3 << ": ";
cin >> rainfall3;
sumrainfall = rainfall1 + rainfall2 + rainfall3;
finalrainfall = sumrainfall / 3.0;
cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << finalrainfall << " inches" << endl;
}

void question2() {
double width;
double length;
double height;
double volume;
cout << "Question 2" << endl;
cout << "Calculate Hyperrectangle: " << endl;
cout << "Enter width of your block: ";
cin >> width;
cout << "Enter length of your block: ";
cin >> length;
cout << "Enter height of your block: ";
cin >> height;
if (width <=0) {
    cout << "Width cant be zero or negative." << endl;
     }
  if (height <=0) {
    cout <<  "Width cant be zero or negative." << endl;
     } 
volume = width * length * height;
cout << "The volume of your block is " << volume << "." << endl;


}