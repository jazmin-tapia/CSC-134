//csc 134
//m6t1
//Jazmin Tapia
//11/9/26

#include <iostream>
using namespace std;

// Functions Declarations
void method1();
void method2();
void method3();

// main 
int main () {
    //count of # of pokemon per day, two different ways 
    method1();
    method2();
    method3(); // range based for loop
    return 0; 
}

void method1() {
    // Method 1: with arrays
    string item = "pokemon";
    cout << "Count how many " << item << " were seen each day. " << endl;
    // count for five days
    const int SIZE = 5;
    int counts [SIZE];
    int total = 0;
    double average = 0;
    // Get the input, add to total
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": "; //print days 1-5, not 1-4.
        cin >> counts [i];
        total += counts[i];
    }
    cout << "Total " << item << "seen: " << total << endl;
    average = (double) total / SIZE; // double / int -> double
    cout << "Average  per day: " << average << endl;
for (int i=0; i < SIZE; i++) {
    cout << "Day " << i+1 << ": " << counts[i] << endl;
    }
}

void method2() {
    //same total and avg no array.
    string item = "pokemon";
    cout << "Count how many " << item << " were seen each day. " << endl;
    // count for five days
    const int SIZE = 5;
    int total = 0;
    int today;
    double average = 0;
    // get the input, add to total
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> today;
        total += today;
    }
    cout << "Total " << item << " seen: " << total << endl;
    average = (double) total / SIZE; // double / int -> double
    cout << "Average  per day: " << average << endl;
}

void method3() {;
//range based loop
// cant buffer overflow, cuz we dont handle the index ourselves
const int SIZE = 5;
int counts [5] = {0, 0, 0, 0, 0};
cout << "Count pokemon per day" << endl;
// This loop chnages the array, so needs refrence and symbol
for (int& count: counts) {
    cout << "> ";
    cin >> count;
}
// now do total avg
int total = 0;
double average = 0;
// This loop only reads values so doesnt need &
for (int count: counts) {
    total += count;
}
average = (double) total / SIZE;
cout << "Total: " << total << endl << "Average: " << average << endl;

}
//np