#pragma once
#include <iostream>
#include "Unit.h"

using namespace std;

namespace ariel{
class PhysicalNumber{
   private:
   Unit _unit;
   double num;
  
  public:
     PhysicalNumber(double n,Unit _unit);
     ~PhysicalNumber();
     //math operators
     friend PhysicalNumber operator +(const PhysicalNumber& left,const PhysicalNumber& right);
     friend PhysicalNumber operator += (PhysicalNumber& left,const PhysicalNumber& right);
     friend PhysicalNumber operator + (PhysicalNumber& right);// plus onary (?)
     friend PhysicalNumber operator - (PhysicalNumber& left, const PhysicalNumber& right);
     friend PhysicalNumber operator -= (PhysicalNumber& left, const PhysicalNumber& right);
     friend PhysicalNumber operator -(const PhysicalNumber& right);//minus onery (?)
     //compare operators
     friend bool operator >(const PhysicalNumber& left, const PhysicalNumber& right);
     friend bool operator >=(const PhysicalNumber& left, const PhysicalNumber& right);
     friend bool operator <(const PhysicalNumber& left, const PhysicalNumber& right);
     friend bool operator <=(const PhysicalNumber& left, const PhysicalNumber& right);
     friend bool operator ==(const PhysicalNumber& left, const PhysicalNumber& right);
     friend bool operator !=(const PhysicalNumber& left, const PhysicalNumber& right);
     //
     friend PhysicalNumber operator --(PhysicalNumber& left);
     friend PhysicalNumber operator ++(PhysicalNumber& left);
     //
     friend istream& operator >> (istream & is,PhysicalNumber& f);
     friend ostream& operator<<(ostream & os,const PhysicalNumber& f);

    
};
};
