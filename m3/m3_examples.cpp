

#include <iostream>
using namespace std;

int main () {
    bool done = true;
    while (done == false) {
        cout << "Still going";
    }

    int count = 1;
    while (count < 6) {
        cout << "Count is: " << count << endl;
        count++; 
    }
    
    bool is_valid = false;
    int number;
    while (false == is_valid) {
        cout << "Enter a number from 1-5";
        cin >> number;
        if (number < 1) {
           cout << "Too low!" << endl;
     }
         else if (number > 5) {
        cout << "Too high!" << endl;
    }
        else {
            cout << "you entered: " << number << endl;
             is_valid = true;
         }

    }
    return 0;
}
    