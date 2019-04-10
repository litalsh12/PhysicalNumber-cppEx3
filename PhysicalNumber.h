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
      PhysicalNumber operator+ (const PhysicalNumber& right);
      PhysicalNumber operator+= (const PhysicalNumber& right);
      PhysicalNumber operator+();// plus onary (?)
      PhysicalNumber operator- (const PhysicalNumber& right);
      PhysicalNumber operator-= (const PhysicalNumber& right);
      PhysicalNumber operator-();//minus onery (?)
     //compare operators
      bool operator> (const PhysicalNumber& right);
      bool operator>= (const PhysicalNumber& right);
      bool operator< (const PhysicalNumber& right);
      bool operator<= (const PhysicalNumber& right);
      bool operator== (const PhysicalNumber& right);
      bool operator!= (const PhysicalNumber& right);

      PhysicalNumber operator--();
      PhysicalNumber operator++();
     //

     friend istream& operator >> (istream & is,PhysicalNumber& f);
     friend ostream& operator<<(ostream & os,const PhysicalNumber& f);

    };
    istream& operator >> (istream & is,PhysicalNumber& f);
    ostream& operator<<(ostream & os,const PhysicalNumber& f);

};
