/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ Osoku, Godwin Okoi ]
 * Matric No:   [ PDS/2013/2764 ]
 * Department:  [ Computer Science ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main() {
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;

    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";

    // TODO: Put your code to receve input from user here
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Gender: ";
    cin >> gender;
    cout << "Month of Birth: ";
    cin >> month;
    cout << "Day of Birth: ";
    cin >> day;
    cout << "Year of Birth: ";
    cin >> year;
    cout << "Weight(kg): ";
    cin >> weight;
    cout << "Height(m): ";
    cin >> height;
    cout << "Current Day: ";
    cin >> currentDay;
    cout << "Current Month: ";
    cin >> currentMonth;
    cout << "Current Year: ";
    cin >> currentYear;

    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
    HealthProfile health(firstName, lastName, gender, month, day, year, weight, height, currentDay, currentMonth, currentYear);

    // Print information from the object - by calling getInformation() function
    health.getInformation();

}
