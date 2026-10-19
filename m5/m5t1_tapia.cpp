//m5t1
//Jazmin Tapia
//CSC 134
//10/19/26



#include <iostream>
using namespace std;

// declare functions here
//void functions
void greet ();
void speak(string message);
int num_add(int num);
int num_double(int num);


int main()
{
    cout << "void function example" << endl;
    greet();
    speak("Hello world!");
    speak("another message.");
    cout << "Value returning example" << endl;
    int number;
    cout << "enter an integer: ";
    cin >> number;
    int answer = num_add(number);
    cout << "num_add(" << number << ") returns:" << answer << endl;

    answer = num_double(number);
    cout << "num_double(" << number << ") returns:" << answer << endl;


    return 0;
}

//define functions here 
void greet () {
    //greet user, no arguments in, no return out 
    cout << "Whats up?" << endl;
}
void speak(string message) {
    // talk to user
    // argument: string, the message to speak 
    // return: none
    //(useful if i want the text to look a certain way)
    cout << message << endl;
}
int num_add(int num) {
    // arguments: num, the value to start with
    // return : int, num + 1
    num = num + 1;// or num +- 1
    return num; 
}
int num_double(int num) {
    // arguments: num, the value to start with
    // return : int, num + 1
    num *=2; // same as num = num * 2
    return num;
}