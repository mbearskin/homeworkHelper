//Programmer: Martha Winger-Bearskin   Date:3/22/13
//File Name: prototypes.h              Class:CS 53 A
//Purpose: This is a header file that contains the function prototypes and struc
//definitions for the Homework Helper program

#ifndef PROTOTYPES_H
#define PROTOTYPES_H
#include <iostream>
using namespace std;

//structure definition to hold a vector 
struct vector
{
  float m_elementA;
  float m_elementB;
    float m_elementC;
  
};

//The greetings() displays a gretting to user.
//Pre: none
//Post: greeting is displayed to screen.
void greetings();

//The mainMenu() displays the Main menu to user. These options are entering
//values, performing operations on the values and quit.
//Pre: none
//Post: displays a menu to user and reads in and returns choice.
short mainMenu();

//The valueMenu() displays a menu to user with options for the type of values 
//being entered.
//Pre: none
//Post: displays a menu to user and reads in and returns choice.
short valueMenu();

//The getValues() reads in vectors from user.
//Pre: none
//Post:reads in 2 vectors form user.
void getValues(vector &v1, vector &v2);

//The getValues templated function reads in 2 values from user.
//Pre: the >> operator must be defined for both parameters.
//Post: 2 values are read in from user. 
template <typename T>
void getValues(T & val1, T & val2);

//The add() adds vectors and returns the sum.
//Pre:none
//Post:two vectors are added and the sum(another vector) is returned.
vector add(const vector &v1, const vector &v2);

//The add() template will add two values and return the sum.
//Pre: the + operator must be defined for both parameters.
//Post: two values will be added and the sum will be returned. 
template <typename T>
T add(const T val1, const T val2);

//The multiply() will multiply vectors and return the product.
//Pre: none
//Post: two vectors will be multiplied and the product will be returned.
float multiply(const vector &v1, const vector &v2);

//The multiply() template will multiply two values and return the product.
//Pre: the * operator must be defined for both parameters. 
//Post: 2 values will be multiplied and the product will be returned.
template <typename T>
T multiply(const T val1, const T val2);

//This Funtion overloads the << operator to display the user defined structure
//vector.
//Pre: none
//Post: the << can now be used to display a vector structure like this <a,b,c>
ostream& operator << (ostream& os,const vector& v);

//The signOff() displays a sign off message to user.
//Pre: none
//Post: sign off is displayed to screen
void signOff();

#include "templateDefs.hpp"
#endif