/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
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

#ifndef HEALTHPROFILE_H
#define	HEALTHPROFILE_H

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition

class HealthProfile {
    // public interface
public:
    HealthProfile(string firstName, string lastName, string gender, int month,
            int day, int year, int weight, double height, int currentDay,
            int currentMonth, int currentYear); // constructor that initializes patient information
    int getAge(); // function to get patients age in years
    double getBMI(); // function to calculate and return BMI
    int getMaximumHeartRate(); // function to calculate and return maximum heart rate
    double getTargetHeartRate(); // function to calculate and return minimum target heart rate
    double getMinTargetHeartRate(); // function to calculate and return minimum target heart rate
    double getMaxTargetHeartRate(); // function to calculate and return maximum target heart rate
    void getInformation(); // function to print object information

    // TODO: Provide get and set function prototypes of each class attribute
    void setFirstName(string firstName); // function to initialize firstName
    void setLastName(string lastName); // function to initialize lastName
    void setGender(string gender); // function to initialize gender
    void setMonth(int month); // function to initialize month
    void setDay(int day); // function to initialize day
    void setYear(int year); // function to initialize year
    void setWeight(int weight); // function to initialize weight
    void setHeight(double height); // function to initialize height
    void setAge(int currentDay, int currentMonth, int currentYear); // function to calculate age
    string getFirstName(); // function to initialize firstName
    string getLastName(); // function to initialize lastName
    string getGender(); // function to initialize gender
    int getMonth(); // function to initialize month
    int getDay(); // function to initialize day
    int getYear(); // function to initialize year
    int getWeight(); // function to initialize weight
    double getHeight(); // function to initialize height
    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has already been provided


    // private interface
private:
    string firstName; // variable to hold firstName
    string lastName; // variable to hold lastName
    string gender; // variable to hold gender
    int month; // variable to hold month
    int day; // variable to hold day
    int year; // variable to hold year
    double height; // variable to hold height
    int weight; // variable to hold weight
    int age; // variable to hold age

}; // end class HealthProfile

#endif	/* HEALTHPROFILE_H */


