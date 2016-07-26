//
//  Sandwich.cpp
//  TeacherProject
//
//  Created by Denise Beecroft on 7/26/16.
//  Copyright © 2016 Denise Beecroft. All rights reserved.
//

#include "Sandwich.h"

// Constructors

Sandwich :: Sandwich()
{
    this->breadCount = 2;
    this->filling = "ham and swiss cheese";
    this->name = "Ham & Swiss";
}

// end constructors

Sandwich :: ~Sandwich()
{
    // Delete all instance of new memory.  
}

int Sandwich :: getBreadCount()
{
    return breadCount;
}

void Sandwich :: setBreadCount(int breadCount)
{
    this->breadCount = breadCount;
}

string Sandwich :: getFilling()
{
    return filling;
}

void Sandwich :: setFilling(string filling)
{
    this->filling = filling;
}

string Sandwich :: getName()
{
    return name;
}

void Sandwich :: setName(string name)
{
    this->name = name;
}