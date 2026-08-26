//CSC 134
//M1LAB - apple sales
// Jazmin Tapia
//8/26/26
//calculate apple prices.

#include <iostream>
using namespace std;

int main()
{
    // introduce yourself
    string name = "Tapia"; // your own name here
    string product = "piano"; //i can change this

    cout << "Welcome to the " << name << " ";
    cout << product << " farm." << endl;

   //do product price calculations
   int product_count = 100;
   double product_price = 0.50; //in USD

   cout << "We have " << product_count << " ";
   cout << product << " (s). They are $" << product_price;
   cout << " each." << endl;

   double total_price = product_count * product_price;
   cout << "Total price for all " << product_count;
   cout << " is: $" << total_price << endl;

    return 0;
}
