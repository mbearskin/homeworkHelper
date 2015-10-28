//Programmer: Martha Winger-Bearskin     Date:3/22/13
//File Name: hmwkHelper.cpp              Class: CS 53 A
//Purpose: This is the main function for my Homework Helper program for
//Assignment 7. This is a menu drive program that will both add and multiply two
//real numbers, interegers or vectors.

#include "prototypes.h"
#include <iostream>
using namespace std;

int main()
{
  
  bool quit = false;
  bool valEntered = false;
  short selection1;
  short selection2;
  float realVal1;
  float realVal2;
  short intVal1;
  short intVal2;
  vector vect1;
  vector vect2;
  
  
  greetings();
  
  do
  {
    selection1 = mainMenu();
    if(!valEntered && selection1 != 1 && selection1 !=4)
      cout << endl << "ERROR: You must selct option 1 first!!" << endl << endl;
    else
    {
      switch(selection1)
      {
        case 1:
          valEntered = true;
          selection2 = valueMenu();
          switch (selection2)
          {
            case 1:
              getValues(realVal1, realVal2);
              break;
            case 2:
              getValues(intVal1, intVal2);
              break;
            case 3:
              getValues(vect1, vect2);
              break;
          }
          break;
        case 2:
          switch (selection2)
          {
            case 1:
              cout << "The Sum of " << realVal1 << " and " << realVal2
              << " is " << add(realVal1, realVal2) << endl << endl;
              break;
            case 2:
              cout << "The Sum of " << intVal1 << " and " << intVal2
              << " is " << add(intVal1, intVal2) << endl << endl;
              break;
            case 3:
              cout << "The Sum of " << vect1 << " and " << vect2
              << " is " << add(vect1, vect2) << endl << endl;
              break;
          }
        break;
        case 3:
          switch (selection2)
          {
            case 1:
              cout << "The product of " << realVal1 << " and " << realVal2
              << " is " << multiply(realVal1, realVal2) << endl << endl;
              break;
            case 2:
              cout << "The product of " << intVal1 << " and " << intVal2
              << " is " << multiply(intVal1, intVal2) << endl << endl;
              break;
            case 3:
              cout << "The product of " << vect1 << " and " << vect2
              << " is " << multiply(vect1, vect2) << endl << endl;
              break;
          }
        break;
        case 4:
          quit = true;
          break;
        default:
          cout << "ERROR: Not a vaild menu option!" << endl << endl;
      }
    }
      
  }while(!quit);
  
  signOff();
  
  return 0;
}

