//Name: Kenneth Burroughs
//Project #1
//Project Due Date: 2/2/2026
/*Project Description: In this project, a Fraction class will be used to code a calculator.
This calculator should give the user the ability to specify operations and input operands (Fractions).*/

//Fraction.cpp - DO NOT CHANGE EXISTING IMPLEMENTATIONS
//               ONLY CHANGE ROUTINES YOU ARE ASKED TO 
//				 ADD
#include "Fraction.h"
//***************************************************************
//class definition/ implementation
//***************************************************************


//***************************************************************
//Constructors
//***************************************************************
Fraction::Fraction():num(0), den(1){}

Fraction::Fraction(int n):num(n), den(1){}

Fraction::Fraction(int n, int d):num(n){
    if (d == 0)                       
         d = 1;
    den = d;
}

//***************************************************************
//Helper function
//***************************************************************
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd (b, a % b);
}

//***************************************************************
//Extra methods
//***************************************************************
void Fraction::reduce(){
    int val = gcd(num, den);
    num/= val;
    den/= val;
}

/*
    Remove these comments and insert definitions if you added optional
	methods
*/


//***************************************************************
//Input/Output methods
//***************************************************************
void Fraction::PrintNotReduced(ostream& os)const{
     os << num << "/" << den;    
}


void Fraction::PrintReduced(ostream& os) const{
     Fraction temp = *this;
     temp.reduce();
     os << temp.num << "/" << temp.den;
}
void Fraction::Input(istream& is){
     char dummy;
     is >> num >> dummy >> den;
}

//***************************************************************
//Getters and Setters
//***************************************************************
int Fraction::getNum()const{
    return num;
}
int Fraction::getDen()const{
    return den;
}
void Fraction::setNum(int n){
    num = n;
}

void Fraction::setDen(int d){
    if (d == 0)
        d = 1;
    den = d;
}

//***************************************************************
//Arithmetic Operators
//***************************************************************

Fraction Fraction::operator*(const Fraction& right)const{
    Fraction result;
    result.num = num * right.num;
    result.den = den * right.den;
    return result;
}

Fraction Fraction::operator/(const Fraction& right)const{
     Fraction res;
     res.num = num * right.den;
     res.den = den * right.num;
     return res;
}

Fraction Fraction::operator+(const Fraction& right)const{
	Fraction sum;
// Using butterfly method to get GCD for denominators. (a * d + b * c) / (b * d)
	sum.num = (num * right.den) + (den * right.num);
	sum.den = den * right.den;
	return sum;
}

Fraction Fraction::operator-(const Fraction& right)const{
	Fraction difference;
// Same process, but with "-" insead of "+".
	difference.num = (num * right.den) - (den * right.num);
	difference.den = den * right.den;
	return difference;
}

//***************************************************************
//Relational Operators
//***************************************************************
bool Fraction::operator==( const Fraction& right)const{
     bool equal = false;
    
     if (num* right.den == right.num * den)
        equal = true;
     return equal;
}

bool Fraction::operator!=( const Fraction& right)const{
     return !(num* right.den == right.num * den);
}

bool Fraction::operator<(const Fraction& right)const{
	if ((num * right.den) < (den * right.num)) {
		return true;
	}
	else {
		return false;
	}
}

bool Fraction::operator>(const Fraction& right) const {
	if ((num * right.den) > (den * right.num)) {
		return true;
	}
	else {
		return false;
	}
}

bool Fraction::operator<=(const Fraction& right) const {
	if ((num * right.den) <= (den * right.num)) {
		return true;
	}
	else {
		return false;
	}
}

bool Fraction::operator>=(const Fraction& right) const {
	if ((num * right.den) >= (den * right.num)) {
		return true;
	}
	else {
		return false;
	}
}