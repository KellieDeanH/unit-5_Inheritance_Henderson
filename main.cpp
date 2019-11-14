//Kellie Henderson, Dr_T,11/12/19
//Unit5 Inheritance assignment

#include <cstdlib> 
#include <iostream>  // Provides cerr
#include "Input_Validation_Extended.h"
#include<string>
#include<sstream> 
#include "color.h"
#include<iomanip>
using namespace std;

class StudentType
{
  protected:
  int hoursTaken = 12;

  public:
  StudentType(){} 
 void setHoursTaken(int ht){hoursTaken= ht;} 
 int getHoursTaken() const {return hoursTaken;}

};

class Semester : public StudentType
{
  private:
     double monthsInSemester = 4.0;
     double semestersInAYear = 3;
     double hoursInADegree = 60.0;
  public:
  Semester() : StudentType(){}
     double costPerCredit = 64.0, bookCost = 100.00, tRavel= 90.00, food = 150.00,hoursPerClass = 3, roomBoardMonthly = 400.00;
    double tuition() 
    {return (costPerCredit*hoursTaken);}

    double roomBoard()
    {return(monthsInSemester*roomBoardMonthly); }

    double monthlyTravel()
    {return (tRavel*monthsInSemester);}

    double semesterFood()
    {return (food*monthsInSemester);}

    double bookCostPerClass() // this is an iformational learning cost kellie 
    {return ((hoursTaken/hoursPerClass)*bookCost);}

    double semestersInAdegree()
    {return ( hoursInADegree/hoursTaken );}

    double costForDegree()
    {return (totalCost() * semestersInAdegree());}

    double timeInYears()
    {return (semestersInAdegree() / semestersInAYear); }

    double totalCost()
    {return (tuition() + roomBoard() + monthlyTravel() + semesterFood() + bookCostPerClass());}



 
  void setcostPerCredit(double cPc){costPerCredit = cPc;}
  double getcostPerCredit() const {return costPerCredit;}
  void setBookCost(double bC){bookCost = bC;}
  double getBookCost() const {return bookCost;}
  void setRoomBoardMonthly(double rBM){roomBoardMonthly= rBM;}
  double getRoomBoardMonthly() const {return roomBoardMonthly;}
  void setTRavel(double tR){tRavel=tR;}
  double getTRavel() const {return tRavel;}
  void setFood(double f){food=f;}
  double getFood() const {return food;}
  void setSemestersInAYear(int sy) {semestersInAYear =sy;}
  int getSemestersInAYear()const{return semestersInAYear;}
  void setHoursInADegree(double dg){hoursInADegree = dg;}
  double getHoursInADegree()const {return hoursInADegree;}
  

};


void showMenu(Semester fT, Semester pT, Semester hT)
{
// ok so here is where we need getters
//display  initial variables like this. 
// i need to get my semester class set
// make a section for each type of student and their costs.
cout << "___________________________________________________" << endl;
cout << color(32);
cout << "\nCost Per Semester (Fall/Spring/Summer) Full Time:" << endl;
cout << reset();
cout << "___________________________________________________" << endl;
cout << "Tuition Full Time:$" << fT.tuition() << endl;
cout << "Boarding Cost Per Semester:$" << fT.roomBoard() << endl;
cout << "Travel cost Per Semester:$" << fT.monthlyTravel() << endl;
cout << "Food Cost Per Semester:$" << fT.semesterFood() << endl;
cout << "Book Cost Per Class Full Time:$" << fT.bookCostPerClass() << endl;
cout << "Hours a full time student takes: " << fT.getHoursTaken() << endl;
cout << "Hours in a degree: " << fT.getHoursInADegree() << endl;
cout << "Total cost per semester Full Time:$" << fT.totalCost() << endl;
cout << "Total cost for degree @ Half Time: $" << fT.costForDegree() << endl;
cout << "___________________________________________________" << endl;
cout << color(32);
cout << "\nCost Per Semester (Fall/Spring/Summer) Part Time:" << endl;
cout << reset();
cout << "___________________________________________________" << endl;
cout << "Tuition Part Time:$" << pT.tuition() << endl;
cout << "Boarding Cost Per Semester:$" << pT.roomBoard() << endl;
cout << "Travel Cost Per Semester:$" << pT.monthlyTravel() << endl;
cout << "Food Cost Per Semester:$" << pT.semesterFood() << endl;
cout << "Book Cost Per Class Part Time:$" << pT.bookCostPerClass() << endl;
cout << "Hours a part time student takes: " << pT.getHoursTaken() << endl;
cout << "Hours in a degree: " << fT.getHoursInADegree() << endl;
cout << "Total cost per semester Part Time:$" << pT.totalCost() << endl;
cout << "Total cost for degree @ Half Time: $" << pT.costForDegree() << endl;
cout << "___________________________________________________" << endl;
cout << color(32);
cout << "\nCost Per Semester (Fall/Spring/Summer) Half Time:" << endl;
cout << reset();
cout << "___________________________________________________" << endl;

cout << "Tuition Half Time:$" << hT.tuition() << endl;
cout << "Boarding Cost Per Semester:$" << hT.roomBoard() << endl;
cout << "Travel Cost Per Semester:$" << hT.monthlyTravel() << endl;
cout << "Food Cost Per Semester:$" << hT.semesterFood() << endl;
cout << "Book Cost Per Class Half Time:$" << hT.bookCostPerClass() << endl;
cout << "Hours a half time student takes: " << hT.getHoursTaken() << endl;
cout << "Hours in a degree: " << fT.getHoursInADegree() << endl;
cout << "Total cost per semester Half Time: $" << hT.totalCost() << endl;
cout << "Total cost for degree @ Half Time: $" << hT.costForDegree() << endl;
cout << "___________________________________________________" << endl;
cout << "\n" << endl;
cout << "___________________________________________________" << endl;


  cout << color(31) ;
    cout  << " \t \t Menu" << endl;
    cout  << " What would you like to update?" << reset()<< endl;
    cout << color(32) ;
    cout << "A: Cost per credit hour " << endl;
    cout << "B: Book Cost per Class " << endl;
    cout << "C: Room and Board Cost Per Month " << endl;
    cout << "D: Food Cost Per Month" << endl;
    cout << "E: Travel Costs Per Month" << endl;
    cout << "F: Hours a full time student takes" << endl;
    cout << "G: Hours a part time student takes " << endl;
    cout << "H: Hours a half time student takes " << endl;
    cout << "I: Hours in a degree " << endl;
    cout << "X: Exit " << reset() << endl;
    





}

// make a handle option to give the menu selections for the user. 
void handleOption(Semester &fT, Semester &pT, Semester &hT,char option)
{ 
  double cPc;
  int hoursTaken;


if(option == 'A' || option == 'a')
{
  cout<<"\nPlease enter the cost per credit hour for your course." << endl;
 cPc = validateDouble(cPc);
 fT.setcostPerCredit(cPc);
 pT.setcostPerCredit(cPc);
 hT.setcostPerCredit(cPc);

}
else if (option == 'B' || option == 'b')
{cout<<"Please  enter the book cost per class." << endl;
cPc = validateDouble(cPc);
fT.setBookCost(cPc);
pT.setBookCost(cPc);
hT.setBookCost(cPc);
 }
 else if (option == 'C' || option == 'c')
{cout<<"Please  enter the Boarding cost per month." << endl;
cPc = validateDouble(cPc);
fT.setRoomBoardMonthly(cPc);
pT.setRoomBoardMonthly(cPc);
hT.setRoomBoardMonthly(cPc);
 }
 else if (option == 'D' || option == 'd')
{cout<<"Please  enter the food cost per month." << endl;
cPc = validateDouble(cPc);
fT.setFood(cPc);
pT.setFood(cPc);
hT.setFood(cPc);
 }
 else if (option == 'E' || option == 'e')
{cout<<"Please  enter the travel cost per month." << endl;
cPc= validateDouble(cPc);
fT.setTRavel(cPc);
pT.setTRavel(cPc);
hT.setTRavel(cPc);
 }
else if (option == 'F' || option == 'f')
{cout<<"Please  enter the hours a full time student takes." << endl;
cPc= validateDouble(cPc);
fT.setHoursTaken(cPc);

}
else if (option == 'G' || option == 'g')
{cout<<"Please  enter the hours a part time student takes." << endl;
cPc= validateDouble(cPc);
pT.setHoursTaken(cPc);
}
else if (option == 'H' || option == 'h')
{cout<<"Please  enter the hours a half time student takes." << endl;
cPc= validateDouble(cPc);
hT.setHoursTaken(cPc);
}
else if (option == 'I' || option == 'i')
{cout<<"Please  enter the hours in a degree." << endl;
cPc= validateDouble(cPc);
fT.setHoursInADegree(cPc);
}
}


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
    return 0;
}
