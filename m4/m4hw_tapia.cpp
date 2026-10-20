//M4hw
//Tapia
//10/19
//CSC 134
//silver

#include <iostream>
using namespace std;

int main () {
int firstnum, secondnum, answer;
int usernumber;
cout << "Enter a number from 1 - 12?" << endl;
cin >> usernumber;

firstnum = usernumber;
for (int i= 1; i<= 12; i++) {
answer = firstnum * i;

cout << firstnum << " times " << i << " is " << answer << endl;

}


 }