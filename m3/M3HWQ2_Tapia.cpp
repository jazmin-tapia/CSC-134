// CSC 134
// M3HW1
// Jazmin Tapia
//10/6/26

//question 2
#include <iostream>
#include <iomanip>
using namespace std;

void dinein ();
void takeaway ();

int main () {
    cout << "Question 2" << endl;
    int choice;

    cout << "Is this dine in or takeaway? \n" << endl;
    cout << "Enter 1 for dine in, 2 for takeaway.";
    cin >> choice;
     if (1 == choice) {
    dinein();
  }
  else if (2 == choice) {
    takeaway();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    //program ends or we could loop around again
  }
    cout << "Thank you, come again!" << endl << endl;
}
void dinein () {
    string meal_name;    //ex: chicken sandwich 
    double meal_price;   //$
    double tax_rate;     //Percent
    double tax_amount;   //$
    double total2;        //$, meal + tax (for dining in)
    double total1;       // for takeaway
    double tip_rate;
    double tip_amount;
    int choice;
    meal_name = "Meal"; // pick my own if i want 
    tax_rate = 0.08; //8%
    tip_rate = 0.15; // 15%
    // tax $ is the meal $ times the tax rate


    cout << "Enter meal price: " << endl;
    cin >> meal_price;
    tax_amount = meal_price * tax_rate;
    tip_amount = meal_price * tip_rate;
    total1 = meal_price + tax_amount;
    total2 = meal_price + tax_amount + tip_amount;

    string line = "--------------------------------------------------------------------------";
    cout << line << endl;
    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << "   Tax: " << setw(10) << tax_amount << endl;
    cout << setw(20) << " Tip: " << setw(10) << tip_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total2 << endl;
}
void takeaway() {
string meal_name;    //ex: chicken sandwich 
    double meal_price;   //$
    double tax_rate;     //Percent
    double tax_amount;   //$
    double total2;        //$, meal + tax (for dining in)
    double total1;       // for takeaway
    double tip_rate;
    double tip_amount;
    int choice;
meal_name = "Meal"; // pick my own if i want 
    tax_rate = 0.08; //8%
    tip_rate = 0.15; // 15%
    // tax $ is the meal $ times the tax rate

    cout << "Enter meal price: " << endl;
    cin >> meal_price;
    tax_amount = meal_price * tax_rate;
    tip_amount = meal_price * tip_rate;
    total1 = meal_price + tax_amount;
    total2 = meal_price + tax_amount + tip_amount;

    string line = "--------------------------------------------------------------------------";
    cout << line << endl;
    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << "  Tax: " << setw(10) << tax_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total1 << endl;
}