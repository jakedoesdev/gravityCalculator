/*
Author:   	 Jacob Everett (jae0204)
Date:	  	 09/11/2018
Class:		 CSCE 1030.001
Professor:	 Mark Thompson
Description:	 This program calculates the acceleration due to gravity given a planet's mass and radius, and then calculates 
		 how long it will take an object to fall to the ground on the planet from a given height.
*/

#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {

const double GRAV_CONST = 6.673e-11; 	//constant value of earth gravity
double gravAccel = 0.0;			//computed value of acceleration due to gravity
double gravFeet = 0.0;			//computed value of acceleration converted to feet
double planetMass = 0.0;			//user-entered planet mass
double objTime = 0.0;				//computed time object takes to hit the surface
long int planetRadius = 0;      //user-entered planet radius
int objHeight = 0;				//user-entered height from which object is dropped


cout << "+------------------------------------------------+" << endl;
cout << "|      Computer Science and Engineering          |" << endl;
cout << "|       CSCE 1030 - Computer Science I           |" << endl;
cout << "|   Jacob Everett   jae0204 jae0204@my.unt.edu   |" << endl;
cout << "+------------------------------------------------+" << endl;

//get planet mass from user
cout << "Enter planet mass in kilograms: " << endl;	 	

cin >> planetMass;
cin.ignore();					

//get planet radius from user
cout << "Enter planet radius in meters: " << endl;

cin >> planetRadius;
cin.ignore();

//calculate acceleration due to gravity
gravAccel = ((GRAV_CONST * planetMass)/(pow(planetRadius, 2.0)));

//set cout decimal precision to 2
//std::cout.precision(2);						
//std::cout << std::fixed;

//output to screen acceleration due to gravity
cout << "The acceleration due to gravity is " << gravAccel << " meters per second squared." << endl;

//get object height from user in feet
cout << "Enter height object is dropped from in feet: " << endl;

cin >> objHeight;

//convert acceleration in m/s to ft/s
gravFeet = gravAccel * 3.28;

//calulate amount of time object takes to fall
objTime = sqrt((2 * objHeight)/(gravFeet));

//output to screen amount of time object takes to fall
cout << "The object will reach the ground in " << objTime << " seconds." << endl;


return 0;

}
