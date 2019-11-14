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
  int hoursTaken= 12;

  public:
  StudentType(){} 
 void setHoursTaken(int ht){hoursTaken= ht;} 
 int getHoursTaken() const {return hoursTaken;}

};

class Semester : public StudentType
{
  private:
     
    double costPerCredit = 64.0, bookCost = 100.00, tRavel= 90.00, food = 150.00, hoursPerClass = 3, roomBoardMonthly = 400.00, monthsInSemester = 4.0;
  public:
  Semester() : StudentType(){}
    
    double tuition() 
    {return (costPerCredit*hoursTaken);}

    double roomBoard()
    {return(monthsInSemester*roomBoardMonthly); }

    double monthlyTravel()
    {return (tRavel*monthsInSemester);}

    double semesterFood()
    {return (food*monthsInSemester);}

    double bookCostPerClass()
    {return ((hoursTaken/hoursPerClass)*bookCost);}

    double totalCost()
    {return (tuition() + roomBoard() + monthlyTravel() + semesterFood() + bookCostPerClass());}



  




 
  void settuition(double cOp){costPerCredit = cOp;}
  void setbookCost(double bC){bookCost = bC;}
  void setroomBoardMonthly(double rBM){roomBoardMonthly= rBM;}
  void settRavel(double tR){tRavel=tR;}
  void setfood(double f){food=f;}




};
void showUniVariables ()
{
double cPCR = 59.00, bCPC = 100.00, rABC = 400.00, fCPM = 150.00, tCPM = 90.00; 

cout << "Cost per credit hour	" << endl;
cPCR = validateDouble(cPCR);
cout << cPCR << endl;
cout << "Book Cost per Class" << endl; 
bCPC = validateDouble(bCPC);//this is cost per book // it is the one they can change the amount of book for
cout << cPCR << endl;

cout << "Room and Board Cost Per Month" << endl;
rABC = validateDouble(rABC);
cout << rABC << endl;

cout << "Food Cost Per Month" << endl;
fCPM = validateDouble(fCPM);
cout << fCPM << endl;

/*Travel Costs Per Month	 $ 90.00 */


}

void showMenu(Semester fT, Semester pT, Semester hT)
{

// ok so here is where we need our getters
cout << fT.getHoursTaken() << "Test";//display your initial variables like this. 
// i need to get my semester class sets? you should have access to them by using fT. pT. and hT.
//im still doing the old way lol when i finally understood it we moved on
// make a section for each type of student and their costs.
cout << "___________________________________________________" << endl;
cout << "\nCost Per Semester (Fall/Spring/Summer) Full Time:" << endl;
cout << "___________________________________________________" << endl;
cout << "Tuition Full Time:$" << fT.tuition() << endl;
cout << "Boarding Cost Per Semester:$" << fT.roomBoard() << endl;
cout << "Travel cost Per Semester:$" << fT.monthlyTravel() << endl;
cout << "Food Cost Per Semester:$" << fT.semesterFood() << endl;
cout << "Book Cost Per Class Full Time:$" << fT.bookCostPerClass() << endl;
cout << "Total cost per semester Full Time:$" << fT.totalCost() << endl;
cout << "___________________________________________________" << endl;
cout << "\nCost Per Semester (Fall/Spring/Summer) Part Time:" << endl;
cout << "___________________________________________________" << endl;
cout << "Tuition Part Time:$" << pT.tuition() << endl;
cout << "Boarding Cost Per Semester:$" << pT.roomBoard() << endl;
cout << "Travel Cost Per Semester:$" << pT.monthlyTravel() << endl;
cout << "Food Cost Per Semester:$" << pT.semesterFood() << endl;
cout << "Book Cost Per Class Part Time:$" << pT.bookCostPerClass() << endl;
cout << "Total cost per semester Part Time:$" << pT.totalCost() << endl;
cout << "___________________________________________________" << endl;
cout << "\nCost Per Semester (Fall/Spring/Summer) Half Time:" << endl;
cout << "___________________________________________________" << endl;

cout << "Tuition Half Time:$" << hT.tuition() << endl;
cout << "Boarding Cost Per Semester:$" << hT.roomBoard() << endl;
cout << "Travel Cost Per Semester:$" << hT.monthlyTravel() << endl;
cout << "Food Cost Per Semester:$" << hT.semesterFood() << endl;
cout << "Book Cost Per Class Half Time:$" << hT.bookCostPerClass() << endl;
cout << "Total cost per semester Half Time:$" << hT.totalCost() << endl;
cout << "___________________________________________________" << endl;
cout << "\n" << endl;
cout << "___________________________________________________" << endl;



    cout  << " Menu" << endl;
    cout  << " What would you like to update?" << endl;
    cout << color(32) ;
    cout << "A: Cost per credit hour " << endl;
    cout << "B: Book Cost per Class " << endl;
    cout << "C: Room and Board Cost Per Month " << endl;
    cout << "D: Food Cost Per Month" << endl;
    cout << "E: Travel Costs Per Month" << endl;
    cout << "F:   " << reset() << endl;





}

// make a handle option to give the menu selections for the user. 






int main()
{
    
  
     
     Semester fT;
     Semester pT;
     Semester hT;

     pT.setHoursTaken(9);
     hT.setHoursTaken(6);

//showUniVariables();

showMenu(fT,pT,hT);
    return 0;
}
