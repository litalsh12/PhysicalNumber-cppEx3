
#include <iostream>
#include <sstream>
#include <stdexcept>
using std::cout, std::endl, std::boolalpha, std::istringstream;
#include "PhysicalNumber.h"
#include "Unit.h"
using ariel::PhysicalNumber, ariel::Unit;
     ariel::PhysicalNumber::PhysicalNumber(double n,Unit _unit){
     this->num=n;
     this->_unit=_unit;
     }
     ariel::PhysicalNumber::~PhysicalNumber(){
    }
     PhysicalNumber ariel::operator+(const PhysicalNumber& left,const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
     
     PhysicalNumber ariel::operator+= (PhysicalNumber& left,const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
     PhysicalNumber ariel::operator+ (PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
     PhysicalNumber ariel::operator- (PhysicalNumber& left, const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
     PhysicalNumber ariel::operator-= (PhysicalNumber& left, const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
     PhysicalNumber ariel::operator-(const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
       }
       //minus onery (?)
     //compare operators
     bool ariel::operator>(const PhysicalNumber& left, const PhysicalNumber& right){
       return      true;
     }
     bool ariel::operator>=(const PhysicalNumber& left, const PhysicalNumber& right){
       return      true;
     }
     bool ariel::operator<(const PhysicalNumber& left, const PhysicalNumber& right){
       return      true;
     }
     bool ariel::operator<=(const PhysicalNumber& left, const PhysicalNumber& right){
       return      true;
     }
     bool ariel::operator==(const PhysicalNumber& left, const PhysicalNumber& right){
       return      true;
     }
    bool ariel::operator!=(const PhysicalNumber& left, const PhysicalNumber& right){
       return      true;
     }
     //
    PhysicalNumber ariel::operator--(PhysicalNumber& left){
       return      PhysicalNumber(0,ariel::KG);
     }
     PhysicalNumber ariel::operator++(PhysicalNumber& left){
       return      PhysicalNumber(0,ariel::KG);
     }
     //
     istream& ariel::operator>> (istream & is,PhysicalNumber& f){
       return      is;
     }
     ostream& ariel::operator<<(ostream & os,const PhysicalNumber& f){
       return      os;
    }
  

