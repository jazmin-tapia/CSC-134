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
        question1();
        //question2();
        //question3();
        //question4();
    }

        void question1() {
            cout << "Question 1 goes here" << endl;
            string name;
            double start_account_balance;
            double amount_of_deposit;
            double amount_of_withdrawal;

            cout << "Enter full name: ";
            cin >> name;
            cout << "Enter starting account balance: $";
            cin >> start_account_balance;
            cout << "Enter deposit amount: $";
            cin >> amount_of_deposit;
            cout << "Enter withdrawal amount: $"; 
            cin >> amount_of_withdrawal;

            cout << "BANKING INFO: ";
            cout << "User" << name; 
            cout << "Account Number 322348";
            cout << "Account Balance: " << 


        





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
        }


        void question3() {
            cout << "Question 3 goes here" << endl;

        }

        void question4() {
            cout << "Question 4 goes here" << endl;
            
        }

    