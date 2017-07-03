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
    int experience, day, month, year, id;
    char status;
    
    
public:
    manager();
    manager(string name, int age, double salary, int meetingsamonth, char status, int day, int month, int year)
    {
        name = "";
        age = 0;
        salary = 1;
        id = 0;
    }
void setid(int newid)
    {
        newid = id;
    }
    void setname(string newname)
    {
        newname = name;
    }
    void setsalary(double newsalary)
    {
        newsalary = salary;
    }
    void setexperience(int newexperience)
    {
        newexperience = experience;
    }
    void setstatus(char newstatus)
    {
        newstatus = status;
    }
    void sethireddate(int m, int d, int y)
    {
        m = month;
        d = day;
        y = year;
    }
    int getid()
    {
        return id;
    }
    string getname(){
        return name;
    }
    double getsalary()
    {
        return salary;
    }
    int getexperience()
    {
        return experience;
    }
    void hireddate()
    {
        cout << month << " - " << day << " - "<< year << endl;
    }
    
};
