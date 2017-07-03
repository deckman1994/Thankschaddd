//
//  Employee Class.hpp
//  Final Project
//
//  Created by Derek Eckman on 6/27/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include <stdio.h>
#include "Employee Class.hpp"
#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

class employee{
private:
    int id, month, day, year, experience;
    string name, postion;
    double wage, clockintime, clockouttime;
    char status;
    
    public :
    employee()
    {
        name = "Bill";
        id = 1;
        postion = "VP";
    }
    employee(string name, string postion, int experience, double wage)
    {
        name = "Bill";
        postion = "VP";
        experience = 0;
        wage = 0;
    }
    void setname(string newname)
    {
        newname = name;
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
    
    char getstatus()
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
    void setstatus(char newstatus)
    {
        newstatus = status;
    }
    
    
};
