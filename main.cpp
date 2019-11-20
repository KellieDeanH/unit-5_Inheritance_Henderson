//Kellie Henderson, Dr_T,11/12/19
//Unit5 Inheritance assignment
/*
11/12/19, Dr.Tyson McMillan, TCC TR
Skills: how to include more files and HTML, how to include photos in c++, worked on adding color, and setters and getters. 





*/
#include<fstream>
#include <cstdlib> 
#include<unistd.h>
#include <iostream>  // Provides cerr
#include "Input_Validation_Extended.h"
#include<string>
#include<sstream> 
#include "color.h"
#include<iomanip>
#include "showMenu.h"
using namespace std;


int main()
{
  cout << fixed << setprecision(2);
  char option;  // define the option in int main
  
     
     Semester fT;
     Semester pT;
     Semester hT;
     fT.setHoursTaken(12);
     pT.setHoursTaken(9);
     hT.setHoursTaken(6);

 do
 {   
   cout << "\033[2J\033[1;1H"; 
  showMenu(fT,pT,hT);// call show menu here
  option = validateChar(option);// give option to handle option
  handleOption(fT,pT,hT,option); // what is in the menu
 }while(option != 'x' && option != 'X' ); 


  Point t1(10,15);
  cout << "X = " << t1.getX() << endl;
  cout << "Y = " << t1.getY() << endl;
// Dr.T challenge add a printPoint() void
// Print the X and Y data to a text file called Point.txt
// call the printPoint() method

t1.printPoint();
t1.printPointHTML();
    return 0;
}
