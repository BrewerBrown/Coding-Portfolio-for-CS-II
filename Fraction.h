//Name: Kenneth Burroughs
//Project #1
//Project Due Date: 2/2/2026
/*Project Description: In this project, a Fraction class will be used to code a calculator.
This calculator should give the user the ability to specify operations and input operands (Fractions).*/

//Fraction.h - DO NOT CHANGE current items... only add what you need

#ifndef _FRACTION_H
#define _FRACTION_H

#include <iostream>
using namespace std;

//Helper function
int gcd(int a, int b);

class Fraction{
      //Data Members
      int num;
      int den;     
      
public:
       //Constructors
       Fraction();
       Fraction(int n); 
       Fraction(int n, int d);

       //Extra methods
       void reduce();
       
        /*
       		Remove these comments and insert declarations you think should be
       		added here. This is optional. Be sure not to add functionality to methods
       		that should just be functions in the driver
       */
      
       
       //Input/Output Methods
       void PrintNotReduced(ostream& os)const;
       void PrintReduced(ostream& os) const;
       void Input(istream& is);

       //Getters and Setters 
       int getNum()const;
       int getDen()const;
       void setNum(int n);
       void setDen(int d);

       //Arithmetic Operators
             
       Fraction operator*(const Fraction& right)const; 
       Fraction operator/(const Fraction& right)const;
       
       Fraction operator+(const Fraction& right)const;
       Fraction operator-(const Fraction& right)const;
       
       
       //Relational Operators
       bool operator==(const Fraction& right)const;
       bool operator!=(const Fraction& right)const;
       
	   bool operator<(const Fraction& right)const;
	   bool operator>(const Fraction& right)const;
	   bool operator<=(const Fraction& right)const;
	   bool operator>=(const Fraction& right)const;
      

};

#endif