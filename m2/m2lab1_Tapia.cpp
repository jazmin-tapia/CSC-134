//M2LAb1 CRATES
// Tapia
//9/16/26
//Excercise 3.11 from Gaddis

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    // declare constants and variables
    const double COST_PER_CUBIC_FOOT = 0.23; //(material and fabrication cost per cu feet, our cost to make)
    const double CHARGE_PER_CUBIC_FOOT = 0.50; //(billed invoice amount per cu feet, customer cost)
    //variables describing the crate
    double length, width, height;       //you can declare multiple of the same type at once
    double volume;                      // V= l * w * h, in cubic ft
    double crate_cost;                  // price to make the crate, USD
    double crate_charge;                // price we sell it for, USD
    double profit;                      //charge - cost

   // get the dimensions of the crate 
   cout << "Please enter the crate dimensions." << endl;
   cout << "Crate length: ";
   cin >> length;
   cout << "Crate width: ";
   cin >> width; 
   cout << "Crate height: ";
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

    return 0; // no errors

}