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
question4();
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
    cout << "Width can't be zero or negative." << endl;
    question2();
     }
if (height <=0) {
    cout <<  "Height can't be zero or negative." << endl;
    question2();
     } 
if (length <=0) {
    cout << "Length can't be zero or negative." << endl;
    question2();
    }  else  {
volume = width * length * height;
cout << "The volume of your block is " << volume << "." << endl;
  }
}

void question3 () {
  int enterednumber;
  string romannumeral;
  cout << "Question 3" << endl;
  cout << "Enter a number (1 - 10): ";
  cin >> enterednumber;
  if (enterednumber == 1) {
    romannumeral = "I";
  } else if (enterednumber == 2) {
    romannumeral = "II";
  } else if (enterednumber == 3) {
    romannumeral = "III";
  } else if (enterednumber == 4) {
    romannumeral = "IV";
  } else if (enterednumber == 5) {
    romannumeral = "V";
  }  else if (enterednumber == 6) {
    romannumeral = "VI";
  } else if (enterednumber == 7) {
    romannumeral = "VII";
  } else if (enterednumber == 8) {
    romannumeral = "VIII";
  } else if (enterednumber == 9) {
    romannumeral = "IX";
  } else if (enterednumber == 10) {
    romannumeral = "X";
  } else {
    cout << "Invalid choice, please try again." << endl;
    question3();
  }
  cout << "The Roman numeral version of " << enterednumber << " is " << romannumeral << "." << endl;
}

void question4 () {
int urchoice;
  cout << "Question 4" << endl;
  cout << "Geometry calculator" << endl;
  cout << "[1.] Calculate the area of a Circle" << endl;
  cout << "[2.] Calculate the area of a Rectangle" << endl;
  cout << "[3.] Calculate the area of a Triangle" << endl;
  cout << "[4.] Quit" << endl;
  cout << "Enter your choice (1-4): ";
  cin >> urchoice;
  if (urchoice == 1) {
    
  }




}