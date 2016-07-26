/*
  main.cpp
  TeacherProject

  Created by Denise Beecroft on 7/26/16.
  Copyright © 2016 Denise Beecroft. All rights reserved.
*/

// Preprocessor - happens before compiling (ignores #)
#include <iostream>
#include <string>
#include "Sandwich.h"

// using a specific library
using namespace std;

// starts and runs project
int main()
{
    Sandwich mySandwich;
    cout << mySandwich.getName() << endl;
    cout << "Let's rename my sandwich." << endl;
    cout << "Type in a new name." << endl;
    string tempName;
    //  cin >> tempName;
    getline(cin, tempName);
    mySandwich.setName (tempName);
    cout << "The new name is: " << mySandwich.getName() << endl;
    
    return 0;
    
}// denotes scope





// insert code here...

// will display on the console
//    cout << "Hello, World!\n";
//
//    double myFraction;
//
//    cout << myFraction << endl;
//    myFraction = 3.15;
//    /* = is a shover. Take what's on the
//     right and 'shove' it into the left. Assignment.*/
//
//    cout << myFraction << endl;
//
//    int myFavoriteNumber;
//    cout << myFavoriteNumber << endl;
//    cin >> myFavoriteNumber;
//    cout << myFavoriteNumber << endl;
//
//    bool myBoolean = true;
//    cout << myBoolean << endl;
//
//    string myWords;
//    myWords = "Howdy";
//    cout << myWords << endl;

// program exited properly