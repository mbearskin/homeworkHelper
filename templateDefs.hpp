//Programmer: Martha Winger-Bearskin  Date:3/22/13
//File Name: templateDefs.hpp         Class: CS 53 A
//Purpose: This file contains the template definitions for the homeowork helper
//program

#ifndef TEMPLATEDEFS_H
#define TEMPLATEDEFS_H


template <typename T>
void getValues(T & val1, T & val2)
{
  cout << "Enter value 1: ";
  cin >> val1;
  cout << endl << "Enter value 2: ";
  cin >> val2;
    cout << endl << endl;
  return;
}


template <typename T>
T add(const T val1, const T val2)
{
  T sum = (val1 + val2);
  
  return sum;
}


template <typename T>
T multiply(const T val1, const T val2)
{
  T product = (val1 * val2);
  
  return product;
}


#endif


