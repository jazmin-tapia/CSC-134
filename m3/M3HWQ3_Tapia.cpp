// CSC 134
// M3HW1
// Jazmin Tapia
//10/6/26

//question 3
#include <iostream>
#include <iomanip>
using namespace std;

void runaway ();
void stayfight ();
void fightspatula ();
void fightsword ();

int main () {
    cout << "Question 3" << endl;
    int choice;

    cout << "There is an evil hippo charging at you!\n" << endl;
    cout << "Will you either:\n" << endl;
    cout << "1. Stay and fight " << endl;
    cout << "2. Run away" << endl;
    cin >> choice;
     if (1 == choice) {
    stayfight();
  }
  else if (2 == choice) {
    runaway();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    //program ends or we could loop around again
  }


}
void runaway() {
    string line = "--------------------------------------------------------------------------";
    cout << line << endl;

    cout << "you chose to run away." << endl;
    cout << "There were 30 evil hippos waiting to ambush you!" << endl;
    cout << "They chase you up a tree and you have to call 911 to rescue you." << endl;
    cout << "You get embarrased and move to Ireland." << endl;
    cout << "You lose!" << endl;
}

void stayfight() {
    string line = "--------------------------------------------------------------------------";
    int choice2;
    cout << line << endl;

    cout << "You chose to stay and fight." << endl;
    cout << "You find a spatula and a sword!" << endl;
    cout << "What will you choose to fight the evil hippo with?\n";
    cout << "1. The spatula" << endl;
    cout << "2. The sword" << endl;
    cin >> choice2;
    if (1 == choice2) {
        fightspatula();
    }
    else if (2 == choice2) {
        fightsword();
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

}

 void fightspatula() {
    string line = "--------------------------------------------------------------------------";
    cout << line << endl;

    cout << "You chose to fight the evil hippo with a spatula!" << endl;
    cout << "You throw the spatula at him." << endl;
    cout << "He is unfazed and continues charging at you anyways." << endl;
    cout << "He chases you up a tree, and you have to call 911 to save you." << endl;
    cout << "You get so embarrased you move to Ecuador." << endl;
    cout << "You lose!" << endl;

    
}
void fightsword () {
    string line = "--------------------------------------------------------------------------";
    cout << line << endl;

    cout << "You chose to fight the evil hippo with a sword!" << endl;
    cout << "You wield the sword." << endl;
    cout << "He runs away, because he is so intimidated." << endl;
    cout << "You win!" << endl;
}
