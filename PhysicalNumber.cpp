
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
     ariel::PhysicalNumber ariel::PhysicalNumber::operator+(const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
     
     ariel::PhysicalNumber ariel::PhysicalNumber::operator+= (const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
     ariel::PhysicalNumber ariel::PhysicalNumber::operator+ (){
       return      PhysicalNumber(0,ariel::KG);
     }
     ariel::PhysicalNumber ariel::PhysicalNumber::operator- (const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
     ariel::PhysicalNumber ariel::PhysicalNumber::operator-= (const PhysicalNumber& right){
       return      PhysicalNumber(0,ariel::KG);
     }
    ariel::PhysicalNumber ariel::PhysicalNumber::operator-(){
       return      PhysicalNumber(0,ariel::KG);
       }
       //minus onery (?)
     //compare operators
     bool ariel::PhysicalNumber::operator>(const PhysicalNumber& right){
       return      true;
     }
     bool ariel::PhysicalNumber::operator>=(const PhysicalNumber& right){
       return      true;
     }
     bool ariel::PhysicalNumber::operator<(const PhysicalNumber& right){
       return      true;
     }
     bool ariel::PhysicalNumber::operator<=(const PhysicalNumber& right){
       return      true;
     }
     bool ariel::PhysicalNumber::operator==(const PhysicalNumber& right){
       return      true;
     }
    bool ariel::PhysicalNumber::operator!=(const PhysicalNumber& right){
       return      true;
     }
     //
    ariel::PhysicalNumber ariel::PhysicalNumber::operator--(){
       return      PhysicalNumber(0,ariel::KG);
     }
    ariel::PhysicalNumber ariel::PhysicalNumber::operator++(){
       return      PhysicalNumber(0,ariel::KG);
     }
     //
     istream& ariel::operator>> (istream & is,PhysicalNumber& f){
       return      is;
     }
     ostream& ariel::operator<<(ostream & os,const PhysicalNumber& f){
       return      os;
    }
  

