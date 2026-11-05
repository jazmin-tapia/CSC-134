//m5hw
//Jazmin Tapia
//CSC 134
// 11/4
//Gold

#include <iostream>
#include <limits>
using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();

int main() {
int choose = 0;
while (choose > 6 || choose < 6) {
cout << "------------------------------------------------------------------------" << endl;
cout << "Would you like to: " << endl;
cout << "[1.] Calculate average rainfall " << endl;
cout << "[2.] Calculate hyperrectangle " << endl;
cout << "[3.] Convert number to roman numeral " << endl;
cout << "[4.] Access geometry calculator " << endl;
cout << "[5.] Calculate distance traveled " << endl;
cout << "[6.] EXIT" << endl;
cout << "Choose an option, (1 - 6): ";
cin >> choose;
if (choose == 1) {
  question1();
  } else if (choose == 2) {
  question2();
  } else if (choose == 3) {
  question3();
  } else if (choose == 4) {
  question4();
  } else if (choose == 5) {
  question5();
  } else if (choose == 6) {
    cout << ". . ." << endl;
    cout << "EXIT COMPLETE." << endl;
  } else {
  cout << "This is not a valid option. Please select a valid option: " ;
  cin >> choose;
    }
  }
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
cout << "------------------------------------------------------------------------" << endl;
cout << "Question 1: Calculate average rainfall" << endl;
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
cout << "------------------------------------------------------------------------" << endl;
cout << "Question 2: Calculate hyperrectangle" << endl;
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

void question3() {
int enterednumber;
string romannumeral;
cout << "------------------------------------------------------------------------" << endl;
cout << "Question 3: Convert number to roman numeral" << endl;
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

void question4() {
int urchoice;
double radius;
double circlearea;
double squareof_r;
double pi;
cout << "------------------------------------------------------------------------" << endl;
cout << "Question 4: Access geometry calculator " << endl;
cout << "[1.] Calculate the area of a Circle" << endl;
cout << "[2.] Calculate the area of a Rectangle" << endl;
cout << "[3.] Calculate the area of a Triangle" << endl;
cout << "[4.] QUIT" << endl;
cout << "Enter your choice (1-4): ";
cin >> urchoice;
if (urchoice == 1) {
  cout << "---------------------" << endl;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  squareof_r = radius * radius;
  pi = 3.14159;
  circlearea = pi * squareof_r;
  if (radius < 0) {
    cout << "The radius can't be less than 0." << endl;
    question4();
  } else {
    cout << "The area of this circle is " << circlearea << "." << endl;
  }
}
else if (urchoice == 2) {
  double length;
  double width;
  double rectanglearea;
 cout << "---------------------" << endl;
  cout << "Enter the rectangle length: ";
  cin >> length;
  cout << "Enter the rectangle width: ";
  cin >> width;
  rectanglearea = length * width;
  if (length < 0 || width < 0) {
    cout << "Only enter positive values for length and width." << endl;
  question4();
  } else {
    cout << "The area of this rectangle is " << rectanglearea << "." << endl;
  }
}
else if (urchoice == 3) {
  double base;
  double height;
  double trianglearea;
  cout << "---------------------" << endl;
  cout << "Enter the triangle base: ";
  cin >> base;
  cout << "Enter the triangle height: ";
  cin >> height;
  trianglearea = base * height * 0.5;
  if (base < 0 || height < 0) {
    cout << "Only enter positive values for base and height." << endl;
    question4();
    } else {
    cout << "The area of this triangle is " << trianglearea << "." << endl;
    }
  }
else if (urchoice == 4) {
  cout << "------------------------------------------------------------------------" << endl;
  cout << "Rerouting to menu..." << endl;
  }
else {
  cout << "The valid choices are 1 through 4; please rerun program. " << endl;
  }
}

void question5() {
  double speedpermph;
  double hourstraveled;
  int count = 1;
  cout << "------------------------------------------------------------------------" << endl;
  cout << "Question 5: Calculate distance traveled" << endl;
  cout << "What is the speed of the vehicle per mph? ";
  cin >> speedpermph;
  cout << "How many hours has it traveled? ";
  cin >> hourstraveled;
  if (speedpermph < 0) {
    cout << "The speed of the vehicle cannot be negative." << endl;
    question5();
  }
  else if (hourstraveled < 1) {
    cout << "Hours traveled cannot be less than 1." << endl;
    question5();
  } else {
  cout << endl << "Hour   Distance Traveled" << endl;
  cout << "-----------------------" << endl;
  while (count <= hourstraveled) {
    cout << count << "\t" << count * speedpermph << endl;
    count++;
    }
  }
}
