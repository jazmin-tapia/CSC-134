// CSC 134
// M3HW1
// Jazmin Tapia
//10/6/26

//question 4
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;


int main () {
 cout << "Let's do some math!" << endl;
    int seed = time(0);

    srand(seed);
    const int MAX = 50;
    int firstnum;
    int secondnum;
    int answer;
    int theiranswer;

    firstnum  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    secondnum  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
   
    cout << "What is " << firstnum << " + " << secondnum << "? " << endl;
    answer = firstnum + secondnum;
    cin >> theiranswer;
    if (theiranswer == answer) {
        cout << "That's correct!" << endl;
    }
    else {
        cout << "That's incorrect!" << endl;
        cout << "The correct answer is: " << answer << endl;
    }
    

}