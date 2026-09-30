/*
CSC 134
M2HW1 - HW (4 questions max)
Tapia
9/16/26
HOW TO USE: 
- fill in the functions fpr any question i answer
- uncomment those functions in main, so they run.
*/

#include <iostream>
#include <iomanip>
using namespace std;


//covered in module 5, heres the basics
// list extra functions above main 
// write full version above main
void question1();
void question2();
void question3();
void question4();

int main() {
    // Run only the questions you finish by removing the //
  // question1();
   // question2();
   // question3();
    question4();
}

void question1() {
    string name;
    double start_account_balance;
    double amount_of_deposit;
    double amount_of_withdrawal;
    double account_balance;
    int acc_num;
    acc_num = 2838424;

    cout << "Enter full name: "<< endl; 
    getline (cin, name);

    cout << "Enter starting account balance: $" << endl;
    cin >> start_account_balance;

    cout << "Enter deposit amount: $" << endl;
    cin >> amount_of_deposit;

    cout << "Enter withdrawal amount: $" << endl;
    cin >> amount_of_withdrawal;

    account_balance = start_account_balance + amount_of_deposit - amount_of_withdrawal;
  
    cout << setprecision(2) << fixed;
    cout << "Name: " << name << endl; 
    cout << "Account number: " << acc_num << endl;
    cout << "Account Balance: " << account_balance << endl;
            
}

void question2() {
    cout << "Question 2 goes here" << endl;

    // declare constants and variables
    const double COST_PER_CUBIC_FOOT = 0.3; //(material and fabrication cost per cu feet, our cost to make)
    const double CHARGE_PER_CUBIC_FOOT = 0.52; //(billed invoice amount per cu feet, customer cost)
    //variables describing the crate
    double length, width, height;       //you can declare multiple of the same type at once
    double volume;                      // V= l * w * h, in cubic ft
    double crate_cost;                  // price to make the crate, USD
    double crate_charge;                // price we sell it for, USD
    double profit;                      //charge - cost

   // get the dimensions of the crate 
   cout << "Please enter the crate dimensions." << endl;
   cout << "Crate length: " << endl;
   cin >> length;
   cout << "Crate width: " << endl;
   cin >> width; 
   cout << "Crate height: " << endl;
   cin >> height;

    //Claculate the volume (everything else depends on the volume)
    volume = length * width * height; //cubic feet

    // calculate price and cost
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    // calculate profit (price - cost)
    profit = crate_charge - crate_cost; //what they pay us, minus what we spent. 

    // Display results to user
    cout << setprecision(2) << fixed; //2 decimals for all values
    cout << "A crate measuring " << length << " x " << width << " x " << height << "ft. " << endl;
    cout << "Is volume: " << volume << " cubic ft. " << endl;
    cout << endl;
    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl;
}



void question3() {
    double total_slices;
    double slices_eaten;
    double slices_per_pizza;
    double totalppl;
    double leftovers;
    double pizza_amt;


    cout << "How many pizzas do you want to order?" << endl;
    cin >> pizza_amt;
    cout << "How many slices per pizza? " << endl;
    cin >> slices_per_pizza;
    cout << "How many people? " << endl;
    cin >> totalppl;

    
}

void question4() {
    string school_name;
    string school_team;
    string school_chant;
    school_name = "FTCC";
    school_team = "Trojans";
    school_chant = "Let's go ";

    cout << school_chant << school_name << endl;
    cout << school_chant << school_name << endl;
    cout << school_chant << school_name << endl;
    cout << school_chant << school_team << endl; 

    
}

    