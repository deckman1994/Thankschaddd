//
//  Employee Class.cpp
//  Final Project
//
//  Created by Derek Eckman on 6/27/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include "Employee Class.hpp"
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

class employee{
private:
    string name;
    int id;
    string postion;
    int experience;
    int month;
    int day;
    int year;
    char status;
    double wage;
    double clockintime;
    double clockouttime;
    string timeoffrequests;
    
    public :
    
    employee(string name, int experience, char status, string timeoffrequests, int month, int day, int year)
    {
        name = "Bill";
        experience = 1;
        status = 'M';
        timeoffrequests = "Vacation";
        month = 1;
        day= 1;
        year = 1;
    }
    
    void setexperience(int exp)
    {
        exp = experience;
    }
    
    int getexperience()
    {
        return experience;
        
    };
    void sethireddate(int m, int d, int y)
    {
        m = month;
        d = day;
        y = year;
    };
    
    void setstatus(string stat)
    {
        stat = status;
    }
    
    string getstatus()
    {
        return status;
    };

    void setwage(double newwage)
    {
        newwage = wage;
        
    }
    double getwage()
    {
        return wage;
    }
    
    void clockin(double IN)
    {
        IN = clockintime;
        
    }
    void clockout(double OUT)
    {
        OUT = clockouttime;
    };
    
    void fireemployee(string name)
    {
        
    }
    int getid()
    {
        return id;
    }
    void setid(int newid)
    {
        newid = id;
    }
    string getpostion()
    {
        return postion;
    }
    void setpostion(string POS)
    {
        POS = postion;
    }
    
    string getname()
    {
        return name;
    }
    
    string gettimeoffrequests()
    {
        return timeoffrequests;
    }
    
};
