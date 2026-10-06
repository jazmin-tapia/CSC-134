// CSC 134
// M3HW1
// Jazmin Tapia
//10/6/26

//question 1
#include <iostream>
#include <iomanip>
using namespace std;


int main () {
    string line = "--------------------------------------------------------------------------";
    string doilike;

    cout << "Question 1" << endl;
    cout << "Hello, I'm a c++ program!" << endl;
    cout << "Do you like me? please type yes or no." << endl;
    cin >> doilike;
    if (doilike == "yes") {
        cout << "Thats great! I'm sure we'll get along." << endl;
    }
    else if (doilike == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
     else {
        cout << "If you're not sure… that's OK." << endl;


        
    }


}