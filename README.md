# homeworkHelper
Intro to C++ Assignment 7
Prompt:
Background: Ok, so now Marge has a program to help Lisa with her advanced (relatively speaking) math homework.  Now Bart wants in on the action.  He is still (after 20+ years) in an elementary arithmetic class and needs his mon's help occasionally.  He's working on the NR (NimRod) degree like his father's.  So, your current project is to write a program, menu drive once again, that will help Marge help both kids.

Specifications: Your program is to present the user with a menu (let's call it menu1 for reference).  Its options are 1) Enter two values; 2) Add values; 3) Multiply values; 4) Quit.  Now, if option 1 of menu1 is chosen, the user is presented with another menu (let's call this one menu2 for reference).  menu2 will prompt the user to input 1) real numbers (non-whole numbers); 2) integers; 3) vectors.  Options 2 and 3 of menu1 are going to perform the desired operation and output the results.  Multiplication for vectors should be the "dot" product you learned in assignment #6.   After anytime an option of menu1 is chosen, the menu is presented again, until 'quit' is chosen.  

Now, it would seem that this program is very similar, and perhaps even simpler, than previous exercises.  But in this program you are going to
use a struct to contain a vector (as before)
use function overloading and function templates to handle the functionality of this program
Thus, for the options of menu2, you will write/use a function template to read in values from the user for reals and integers, but you will write/use a function overload for reading in vectors.  One function should do the work of reading in two values (reals, integers, vectors).  Thus, the template will provide the same functionality, but for two different types of input parameters, and the function overload will provide a different functionality for the vectors (since they are fundamentally different from reals or integers).  So, you will have two functions with the same name: one a template, one not.  This same "pattern" applies to options 2 and 3 of menu1.  



When you submit, do the following:

pick option 2 (better generate an error!)
pick option 1 and then choose to enter integers. Enter 4 and 6
pick option 3
pick option 1 and then choose to enter reals.  Enter 2.1 and 3.2.
pick option 2 
pick option 1 and then choose to enter vectors:  Enter <1,2,3> and <7,6,5>
pick option 3
quit
If you have any questions, be sure to ask!
