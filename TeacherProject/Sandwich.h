//
//  Sandwich.h
//  TeacherProject
//
//  Created by Denise Beecroft on 7/26/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

// define structure

#ifndef Sandwich_h
#define Sandwich_h

#include <string>
using namespace std;

class Sandwich
{
private:
    int breadCount;
    string filling;
    string name;
public:
    Sandwich();
    void setBreadCount(int breadCount);
    int getBreadCount();
    void setFilling(string filling);
    string getFilling();
    void setName(string name);
    string getName();
};

#endif /* Sandwich_h */

// end structure
