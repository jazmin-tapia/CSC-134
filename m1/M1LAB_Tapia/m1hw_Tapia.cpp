// CSC 134
/*
M1HW - Movie Talk
Tapia, J
8/31
Example: Talk about Shrek
*/

#include <iostream>
using namespace std;

//Starting point
int main () {
    
// purpose: practice using string, int, and double within text.
// declare variables
string movie_name; // film title as in IMDB
int movie_year; // year of release
double movie_grossm; // millions of USD of the gross

// Example: Shrek 
movie_name = "Shrek";
movie_year = 2001;
movie_grossm = 484.4; // about half a billion, internationally

//print the movie blurb
cout << "The movie " << movie_name << "came out in " << movie_year << "." << endl;

cout << "it grossed in total $" << movie_grossm << "million." << endl;

//print a movie quote
cout << "QUOTE:" << endl << " \t\"Ogres are like onions. Onions have layers. Ogres have layers.\" " << endl;

    return 0; // no errors
}