//CSC 134
// m2T2 - receipt 
//Tapia
// 9/14/26
// build a receipt that loooks like a receipt

#include <iostream>
//iomanip lets you use setw() and setprecision() and fixed
#include <iomanip>
using namespace std;

int main() {

    // DECLARE VARIABLES
    string meal_name;    //ex: chicken sandwich 
    double meal_price;   //$
    double tax_rate;     //Percent
    double tax_amount;   //$
    double total;        //$, meal + tax

    // INPUT
    // Right now, nothing, they pick exactly one sandwich 
    // for now, hard code some values
    meal_name = "Chicken Sandwich"; // pick my own if i want 
    meal_price = 5.99;
    tax_rate = 0.08; //8%

    //PROCESSING
    // tax $ is the meal $ times the tax rate
    tax_amount = meal_price * tax_rate;
    total = meal_price + tax_amount;

    //OUTPUT
    // TO DO: Print like a receipt
    string line = "--------------------------------------------------------------------------";
    cout << line << endl;
    //set width of columns and set 2 decimal places
    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << " tax: " << setw(10) << tax_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << "Thank you, come again!" << endl << endl;
    return 0; //no errors

}