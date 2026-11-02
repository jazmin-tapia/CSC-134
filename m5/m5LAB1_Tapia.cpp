#include <iostream>
#include <limits>
using namespace std;
/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Jazmin Tapia
10/28/26
This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/
// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_gotocave();
void choice_diamondsword();
void choice_TNT();
void choice_tamewolves();
void choice_finishwsword();

// TODO: add your new prototypes here
int main() {
cout << "M5LAB1 - Choose Your Own Adventure" << endl;
// Start the story.
main_menu();
// When main_menu() returns, the story is over.
cout << "Thanks for playing!" << endl;
return 0; // finished with no errors
}
// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().
void main_menu() {
// A menu that accepts 1, 2, 3, or 4 (quit).
cout << "----------------------------------------------------------------------------" << endl;
cout << "Main Menu" << endl;
cout << "You teleported as Steve in Minecraft. You are being chased by zombies into a dark cave, and you are worried "<< endl;
cout << "that Herobrine is hiding inside to ambush you." << endl;
cout << "Do you:" << endl;
cout << "[1.] take the risk, head right into the cave to possibly find shelter from the zombies chasing you." << endl;
cout << "[2.] Fearlessly fight the zombies off with your trusty diamond sword." << endl;
cout << "[3.] Use TNT and flint and steel and blow something up because you're too nervous to deal with this." << endl;
cout << "[4.] [Quit]" << endl;
cout << "Choose: ";
int choice = 0;
cin >> choice;
if (cin.fail()) {
// The player typed something that is not a number.
cin.clear(); // reset cin so it can read again
choice = 0; // treat it as an invalid choice
}
// Throw away the rest of the line the player typed.
cin.ignore(numeric_limits<streamsize>::max(), '\n');
if (1 == choice) {
choice_gotocave();
} else if (2 == choice) {
choice_diamondsword();
} else if (3 == choice) {
choice_TNT();
} else if (4 == choice) {
cout << "Ok, quitting game" << endl;
return; // go back to main()
} else {
cout << "That's not a valid choice, please try again." << endl;
main_menu(); // try again
}
}
void choice_gotocave() {
cout << "----------------------------------------------------------------------------" << endl;
cout << "You chose to run into the cave to find shelter from the zombies on your trail. " << endl;
cout << "Herobrine is in the cave, waiting to get you! You must retreat from the cave at once!" << endl;
cout << "Do you:" << endl;
cout << "[1.] Fearlessly fight the zombies off with your trusty diamond sword." << endl;
cout << "[2.] Use TNT and flint and steel to get rid of the zombies and Herobrine. " << endl;
int choice = 0;
cout << "Choose: ";
cin >> choice;
if (1 == choice) {
choice_diamondsword();
} else if (2 == choice) {
choice_TNT();
} else {
cout << "That's not a valid choice, please try again." << endl;
main_menu(); 
}
}
void choice_diamondsword() {
cout << "----------------------------------------------------------------------------" << endl;
cout << "You chose to use your trusty diamond sword to fight off the zombies, away from the spooky cave. " << endl;
cout << "They're overpowering you, there's too many zombies! " << endl;
cout << "Do you:" << endl;
cout << "[1.] Quickly tame an army of 100 wolves with bones so they can fight the zombies for you." << endl;
cout << "[2.] Use TNT and flint and steel to get rid of all of the zombies. " << endl;
int choice = 0;
cout << "Choose: ";
cin >> choice;
if (1 == choice) {
    choice_tamewolves();
} else if (2 == choice) {
    choice_TNT();
} else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu();
}
}
void choice_TNT() {
cout << "----------------------------------------------------------------------------" << endl;
cout << "You chose to use TNT and flint and steel to get rid of your enemies."  << endl;
cout << " You accidentally blew yourself up because you were right next to the TNT... " << endl;
cout << "You LOST!" << endl;
cout << "Would you like to respawn?" << endl;
cout << "[1.] Yes" << endl;
cout << "[2.] Yes, but the second option. you do want to respawn." << endl;
int choice = 0;
cin >> choice;
if (1 == choice) {
    main_menu();
} else if (2 == choice) {
    main_menu();
} else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu();
}
}
void choice_tamewolves() {
cout << "----------------------------------------------------------------------------" << endl;
cout << "You chose to tame an army of 100 wolves to fight off those pesky zombies for you. " << endl;
cout << "The wolves fight off most of the zombies, but there are a few remaining zombies left that are coming for you! " << endl;
cout << "Do you:" << endl;
cout << "[1.] Finish the zombies off with your trusty diamond sword." << endl;
cout << "[2.] Use TNT and flint and steel to get rid of all of the zombies. " << endl;
int choice = 0;
cout << "Choose: " << endl;
cin >> choice;
if (1 == choice) {
    choice_finishwsword();
} else if (2 == choice) {
    choice_TNT();
} else {
    cout << "That's not a vaid choice, please try again." << endl;
    main_menu();
}
}
void choice_finishwsword() {
cout << "----------------------------------------------------------------------------" << endl;
cout << "You chose to finish the zombies off with your favorite diamond sword. " << endl;
cout << "You successfully got rid of the zombies that were chasing you!! " << endl;
cout << "You run away safely far far away from the cave that Herobrine was living in, and go on to live a cozy safe" << endl;
cout << "minecraft life. " << endl;
cout << "You WON!" << endl;
}
