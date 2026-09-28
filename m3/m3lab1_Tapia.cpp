// if statement example3
// standard header


#include <iostream>
using namespace std;

////
// here we use a new trick that isn't covered until "Functions",
// but the basics aren't too hard to pick up.
// So far main() has been our only function, and all code was
// located there.
//
// In this example, we add multiple functions that are used
// by main(). If this isn't clear to you, don't worry -- we 
// will spend more time on them in detail later.

// declare that we are going to have more functions than main()
// (I will say "function" and "method" interchangeably)
// we should give them "verb" names, like we give our 
// variables "noun" names. 

void chooseweartiara();
void choosedontweartiara();
void choosefedorarebellion();

// the lines above tell the program that these functions will 
// exist, but we have to define them later on in the file.
////

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  int choice; 

  // ask the question
  cout << "You are getting ready for a pageant!\n";
  cout << "Do you wear your tiara with your dress?" << endl;
  cout << "1. Wear your tiara" << endl;
  cout << "2. Do not wear your tiara" << endl;
  cout << "3. Be different, throw on a fedora" << endl;

  cout << "? ";
  cin >> choice;

  if (1 == choice) {
    chooseweartiara();
  }
  else if (2 == choice) {
    choosedontweartiara();
  }
  else if (3 == choice) {
    choosefedorarebellion();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    //program ends or we could loop around again
  }

  cout << "Thank you for entering in the pageant!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

////
// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
////




void chooseweartiara() {
  // this function is called in main if the user chooses 1.
  cout << "You chose to wear your tiara!" << endl;
  cout << "You win the pageant!! You get a 10 minute standing ovation and go on to win Miss Universe! Congratulations!" << endl;
}

void choosedontweartiara() {
  // this function is called in main if the user chooses 1.
  cout << "You chose to not wear your tiara!" << endl;
  cout << "You lose the pageant.. you get bood out of the venue, and you immgrate to ireland and start a new life because everyone hated you in the pageant. You are too embarrased to show your face here again." << endl;
}

void choosefedorarebellion() {
    cout << "You chose go against the grain and wear a fedora!" << endl;
    cout << "They kick you out of the pageant, fedoras are against the rules!" << endl;
}
// If we had a Door #3, or 4, we would add another else if to our
// main(), and then declare and define chooseDoor3() and so on.
