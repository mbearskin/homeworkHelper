//Programmer: Martha Winger-Bearskin  Date:3/22/13
//File Name: functionDefs.cpp         Class: CS 53 A
//Purpose: This file contains the fuction definitions for my homeowork helper
//program 

#include "prototypes.h"


void greetings()
{
  cout << "Welcome to Marge's Homework Helper" << endl;
  return;
}

short mainMenu()
{
  short choice;
  
  cout << "Main Menu" << endl;
  cout << "1. Enter Two Values" << endl;
  cout << "2. Add Values" << endl;
  cout << "3. Multiply Values" << endl;
  cout << "4. Quit" << endl << endl;
  cout << "Enter your selection: " << endl;
  cin >> choice;
  return choice;
}


short valueMenu()
{
  short choice;
  
  do
  {
    
  
  cout << "\nWhat type of value would you like to enter?" << endl;
  cout << "1. Real Numbers (non-whole numbers)" << endl;
  cout << "2. Integers" << endl;
  cout << "3. Vectors" << endl;
  cout << "Enter your selection: " << endl;
  cin >> choice;
  if(choice < 1 || choice > 3)
    cout << "Error: That is not a valid menu option!" << endl << endl;
  }while(choice < 1 || choice > 3);
  
  return choice;
}


void getValues(vector & v1, vector & v2)
{
  cout << "Enter the first element of your vector: " << endl;
  cin >> v1.m_elementA;
  cout << "Enter the second element of your vector: " << endl;
  cin >> v1.m_elementB;
  cout << "Enter the third element of your vector: " << endl;
  cin >> v1.m_elementC;
  
  cout << "Enter the first element of your second vector: " << endl;
  cin >> v2.m_elementA;
  cout << "Enter the second element of your second vector: " << endl;
  cin >> v2.m_elementB;
  cout << "Enter the third element of your second vector: " << endl;
  cin >> v2.m_elementC;
  
}

vector add(const vector &v1, const vector &v2)
{
  vector sum;
  
  sum.m_elementA = (v1.m_elementA + v2.m_elementA);
  sum.m_elementB = (v1.m_elementB + v2.m_elementB);
  sum.m_elementC = (v1.m_elementC + v2.m_elementC);
  
  return sum;
}


float multiply(const vector &v1, const vector &v2)
{
  float product;
  
  product = ((v1.m_elementA * v2.m_elementA) + (v1.m_elementB * v2.m_elementB)
            + (v1.m_elementC * v2.m_elementC));
  
  return product;
}

ostream& operator << (ostream& os,const vector& v)
{
  os << "<" << v.m_elementA << "," << v.m_elementB
  << "," << v.m_elementC << ">";
  return os;
}
void signOff()
{
  cout << endl <<  "Have a great day!" << endl;
  return;
}