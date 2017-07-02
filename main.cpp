//
//  main.cpp
//  Final Project
//
//  Created by Derek Eckman on 6/27/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//
////// My Uml and my class of employee will make specfic changes and retreive specific information of employees. It will have clock in times, clock out times, and certain information for documentation.

////// I believe that I will run into huge problems with my idea of manager roles and employee roles of retrieving files.
//I also believe that a problem I will run into is figuring out how to organize the employees and the specific inform into a vector. I understand classes and how to retreieve information but organizing the employees into a vector and staying orgnaized will be hard.



#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include "Employee Class.cpp"
#include "Employee Class.hpp"
#include <fstream>
#include "Manager.cpp"

using namespace std;

//functions
void manageroptions();
void employeeoptions();
void addemployee();
void addmanager();
void printemployee();
bool manager();
void statusofuser();
void printfile();
void fireemployee();

int main()
{
    
    //create vector
    
    vector<employee*> database;
    
    ofstream outfile("Outfile.txt");
    int size;
    cout << "Welcome to Northwest Coffee database! " << endl;
    cout << endl;
    cout << "How big is the database: " << endl;
    cin >> size;
    
    
    
    
    ///show menu
    cout << "1) I am a manager. " << endl;
    cout << "2) I am an employee. " << endl;
    cout << "3) Add an employee. " << endl;
    cout << "4) Add a Manager. " << endl;
    
    int menuselect = 0;
    
    cin >> menuselect;

    
   
 
    switch (menuselect)
    {
        case 1:
            manageroptions();
            break;
        case 2:
            employeeoptions();
            break;
        case 3:
            addemployee();
            break;
        case 4:
            addmanager();
            break;
        default: cout << "Error wrong choice. ";
    }
    
    return 0;
}



void manageroptions(){
    int Mselect;
    
    cout << "1) Print data base. " << endl;
    cout << "2) Fire an employee. " << endl;
    cout << "3) Add an employee. " << endl;
    cout << "4) Exit. " << endl;
    
    cin >> Mselect;
    
    switch (Mselect) {
        case 1:

            printfile();
            
            break;
        case 2:
           
            fireemployee();
            
        case 3:
            //leave program
            break;
        default: cout << "Wrong option. " << endl;
            break;
    }
}

void employeeoptions()
{
    //employee options
    int Eselect;
    
    cout << "1) Time in. " << endl;
    cout << "2) Time out" << endl;
    cout << "3) Time off requests. " << endl;
    cout << "4) Hours currently. " <<endl;
    cout << "5) Exit. " << endl;
    cin >> Eselect;
    
    switch (Eselect) {
        case 1:
            
            ///time in
            //How do i specificly zero in on an employee and put in the time in seconds
            break;
            
        case 2:
            
            // time out
            //// same here.
            break;
            
        case 3:
            
            /// How do I search the database for a specific name?
            cout << "Enter name. " << endl;
            
            break;
        case 3:
            
            // adding up hours
            
            break;
            
        case 4:
            //cout hours
            
            break;
            
        case 5:
            
            break;
            
        default: cout << "Wrong option! Sorry. " << endl;
            break;
    }}

void addemployee()
{
    ofstream outfile("Outfile.txt");
    vector<employee> databaseE;
    string name, timeoffrequests;

    char status;
    int j, experience, month, day, year;
    
				cout<<"\nEnter first name:";
				cin >> name;
				cout<<"\nEnter years of experience with coffee :" << endl;
				cin>> experience;
    cout << "Enter gender. (M or F) " << endl;
    cin >> status;
    
				cout<<"\nEnter time off requests. ";
				cin>>timeoffrequests;
    
    cout << "Enter the month. " << endl;
    cin >> month;
    cout << "Enter the day. " << endl;
    cin >> day;
    cout << "Enter the year. " << endl;
    cin >> year;
    
    
    
    ////CHAd I dont know how to save a new employee to the outfile.txT!!!!
    
    //SAME with the manager fucntion
    
    
    
    data[j] = new employee(name, experience, status, timeoffrequests, month, day, year);
    databaseE.push_back(new employee(name, experience,status,timeoffrequests,month,day,year));
    data[j]->save("outFile.txt");
    j++;
    
    
    void addmanager()
    {
        ofstream outfile("Outfile.txt");
        vector<manager> databaseM;
        string name, timeoffrequests;
        char status;
        double salary;
        int j, experience, month, day, year;
        
        cout<<"\nEnter first name:";
        cin >> name;
        cout<<"\nEnter years of experience with coffee :" << endl;
        cin>> experience;
        cout << "Enter gender. (M or F) " << endl;
        cin >> status;
        cout << " Salary set: "
        cin >> salary;
        cout<<"\nEnter time off requests. ";
        cin>>timeoffrequests;
        
        cout << "Enter the month. " << endl;
        cin >> month;
        cout << "Enter the day. " << endl;
        cin >> day;
        cout << "Enter the year. " << endl;
        cin >> year;
        
        data[j]=new Manager(name, age, salary, meetingsamonth, status, day, month, year);
        databaseM.push_back (new manager(name, status, month, day, year, ));
        databaseM->save("outFile.txt");
        j++;
    }
    
void statusofuser()
{
    
    cout << "Type //Manager or //Employee. " << endl;
    cin >> postion;
    if (postion == "manager")
    {
        if (manager() = true);
        {
        manageroptions();
        }
    }
    else
        cout << "Wrong password. You are allowed employee axcess. " << endl;
        employeeoptions();
    
}


bool manager()
{
    string password;
    cout << "Enter password. " << endl;
    cin >> password;
    if (password == "northwest")
    {
        return true;
    }
    else
        return false;
}

void printfile()
{
    for (
    cout <<
   databaseE
    
}
void fireemployee()
    {
        
    }
