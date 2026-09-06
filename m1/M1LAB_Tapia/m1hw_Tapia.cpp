// CSC 134
/*
M1HW - Movie Talk
Tapia, J
8/31
Example: Talk about Forrest Gump
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
movie_name = "Forrest Gump ";
movie_year = 1994;
movie_grossm = 680; // about half a billion, internationally

//print the movie blurb
cout << "The movie " << movie_name << "came out in " << movie_year << "." << endl;

cout << "it grossed in total $" << movie_grossm << " million." << endl;

//print a movie quote
cout << "QUOTE:" << endl << " \t\"Life was like a box of chocolates; you never know what you're gonna get.\" " << endl;

    return 0; // no errors
}