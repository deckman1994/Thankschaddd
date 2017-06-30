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

vector<employee*> database;
employee* data[5];
ofstream outfile("Outfile.txt");

using namespace std;

//manager option

void manageroptions(){
    int Mselect;
    
    cout << "1) Print. " << endl;
    cout << "2) Fire an employee. " << endl;
    cout << "3) Add an employee. " << endl;
    cout << "4) Exit. " << endl;
    
    cin >> Mselect;
    
    switch (Mselect) {
        case 1:
            //printfile();
            
            break;
        case 2:
            //employee fire
            break;
       
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
            
            break;
        case 2:
            // time out
            
            break;
        case 3:
            
            cout << "Enter name. " << endl;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cin >> name;
            
            
            for(int l=0;l<database.size();l++)
            {
                if(database[l]->getLastName()==search)
                {
                    database.erase(database.begin()+l);
                    break;
                }
                
            }
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
    employee* data[5];
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
    
				data[j]=new employee(name, experience, status, timeoffrequests, month, day, year);
        data.push_back (new employee((name, experience, status, timeoffrequests, month, day, year)));
                data[j]->save("outFile.txt");
				j++;
                                             

void addmanager()
{
    ofstream outfile("Outfile.txt");
    employee* data[5];
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
        data.push_back (new employee((name, status, month, day, year, )));
        data[j]->save("outFile.txt");
				j++;
}

int main()
{
    
    //create vector
    
    vector<employee*> database;
    employee* data[5];
    ofstream outfile("Outfile.txt");
    
    cout << "Welcome to Northwest Coffee database! " << endl;
    cout << endl;
    cout << "How big is the database: " << endl;
    cin >> data.size();
    
    
    ///show menu
    cout << "1) I am a manager. " << endl;
    cout << "2) I am an employee. " << endl;
    cout << "3) Add an employee. " << endl;
    cout << "4) Add a Manager. " << endl;
  
    //manager options
    int menuselect;
    
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
}}
