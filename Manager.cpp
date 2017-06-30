//
//  Manager.cpp
//  Final Project
//
//  Created by Derek Eckman on 6/29/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include "Manager.hpp"
#include <string>
#include <iostream>

using namespace std;

class manager
{
private:
    string name;
    int age;
    double salary;
    int meetingsamonth;
    char status;
    int day, month, year;
    
public:
    manager();
    manager(string name, int age, double salary, int meetingsamonth, char status, int day, int month, int year)
    {
        name = "";
        age = 0;
        salary = 1;
        meetingsamonth = 0;
        status = 'M';
        day= 0;
        month = 0;
        year = 0;
    }
    //HOW do I set wages with a class in a class?
    void setwages();
    
    
};
