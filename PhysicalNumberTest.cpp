/**
 * Examples of automatic tests for the exercise on physical numbers.
 *
 * @author Erel Segal-Halevi
 * @since 2019-02
 */

#include <iostream>
#include <sstream>
using std::cout, std::endl, std::istringstream;
#include "PhysicalNumber.h"
using ariel::PhysicalNumber, ariel::Unit;
#include "badkan.hpp"

int main() {
  badkan::TestCase testcase;
  int grade=0;
  int signal = setjmp(badkan::longjmp_buffer);
  if (signal == 0) {

    // BASIC TESTS - DO NOT CHANGE
    PhysicalNumber a(2, Unit::KM);
    PhysicalNumber b(300, Unit::M);
    PhysicalNumber c(2, Unit::HOUR);
    PhysicalNumber d(30, Unit::MIN);

    PhysicalNumber km(7, Unit::KM);
    PhysicalNumber m(500, Unit::M);
    PhysicalNumber cm(20, Unit::CM);
    PhysicalNumber sec(360, Unit::SEC);
    PhysicalNumber min(45, Unit::MIN);
    PhysicalNumber hour(1, Unit::HOUR);
    PhysicalNumber g(1000, Unit::G);
    PhysicalNumber ton(20, Unit::TON);
    PhysicalNumber kg(8, Unit::KG);


    testcase
    .setname("Basic output")
    .CHECK_OUTPUT(a, "2[km]")
    .CHECK_OUTPUT(b, "300[m]")

    .setname("Compatible dimensions")
    .CHECK_OUTPUT(b+a, "2300[m]")
    .CHECK_OUTPUT((a+=b), "2.3[km]")
    .CHECK_OUTPUT(a, "2.3[km]")
    .CHECK_OUTPUT(a+a, "4.6[km]")
    .CHECK_OUTPUT(b-b, "0[m]")
    .CHECK_OUTPUT(c, "2[hour]")
    .CHECK_OUTPUT(d, "30[min]")
    .CHECK_OUTPUT(d+c, "150[min]")

    .setname("Incompatible dimensions")
    .CHECK_THROWS(a+c)
    .CHECK_THROWS(a+d)
    .CHECK_THROWS(b+c)
    .CHECK_THROWS(b+d)

    .setname("Basic input")
    .CHECK_OK(istringstream("700[kg]") >> a)
    .CHECK_OUTPUT((a += PhysicalNumber(1, Unit::TON)), "1700[kg]")

    // YOUR TESTS - INSERT AS MANY AS YOU WANT

    .setname("Compatible dimensions")
    .CHECK_OUTPUT(km-m, "6.5[km]")
    .CHECK_OUTPUT((m-=km), "-6500[m]")
    .CHECK_EQUAL (m==km, false)
    .CHECK_EQUAL (m<km, true)
    .CHECK_EQUAL (m>km, false)
    .CHECK_OUTPUT(++km, "8[km]")
    .CHECK_OUTPUT(--km, "7[km]")
// Throws : 
//Ton  - Meter @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    .CHECK_THROWS(m+ton)
    .CHECK_THROWS(m-ton)
    .CHECK_THROWS(m==ton)
    .CHECK_THROWS(m<ton)
    .CHECK_THROWS(m>ton)
    .CHECK_THROWS(m+=ton)
    .CHECK_THROWS(m-=ton)
    .CHECK_THROWS(m<=ton)
    .CHECK_THROWS(m>=ton)
    .CHECK_THROWS(m!=ton)

    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    // Ton - km
    .CHECK_THROWS(km+ton)
    .CHECK_THROWS(km-ton)
    .CHECK_THROWS(km==ton)
    .CHECK_THROWS(km<ton)
    .CHECK_THROWS(km>ton)
    .CHECK_THROWS(km+=ton)
    .CHECK_THROWS(km-=ton)
    .CHECK_THROWS(km<=ton)
    .CHECK_THROWS(km>=ton)
    .CHECK_THROWS(km!=ton)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// Ton -  CM

.CHECK_THROWS(m+ton)
    .CHECK_THROWS(cm-ton)
    .CHECK_THROWS(cm==ton)
    .CHECK_THROWS(cm<ton)
    .CHECK_THROWS(cm>ton)
    .CHECK_THROWS(cm+=ton)
    .CHECK_THROWS(cm-=ton)
    .CHECK_THROWS(cm<=ton)
    .CHECK_THROWS(cm>=ton)
    .CHECK_THROWS(cm!=ton)


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Ton - hour

    .CHECK_THROWS(istringstream("200[g") >> g)
      .CHECK_THROWS(istringstream("0.2[]") >> a)
      .CHECK_THROWS(istringstream("200g]") >> g)
      .CHECK_THROWS(istringstream("0.2[kg]") >> a)

 //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&77
 //output:
  //time units-
    .CHECK_OUTPUT(hour+min, "1.45[Hour]")
    .CHECK_OUTPUT((min+=sec), "51[Min]")
    .CHECK_OUTPUT(min, "51[Min]")
    .CHECK_OUTPUT(++hour, "2[Hour]")
    .CHECK_OUTPUT(min-sec, "45[Min]")
    .CHECK_OUTPUT(--min, "50[Min]")
    .CHECK_EQUAL (min<hour, true)
    .CHECK_EQUAL (sec>min, false)
    //.CHECK_EQUAL (hour.getNumber()==6, false)
    .CHECK_EQUAL (hour!=min, true)
    //.CHECK_EQUAL (min.getNumber()<=4, false)
    //.CHECK_EQUAL (sec.getNumber()>=1000, true)
   // .CHECK_EQUAL (-min.getNumber() , -50)
   // .CHECK_EQUAL (+min.getNumber(), 50)
    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //Mass units:

      .CHECK_OUTPUT(g+kg,"2100[g]")
      .CHECK_OUTPUT(ton-kg , "7.98")
      // .CHECK_OUTPUT(kg+=g , "2.1[kg]")
      .setname("...")
      .print(cout, /*show_grade=*/false);
      grade = testcase.grade();
    } else {
      testcase.print_signal(signal);
      grade = 0;
    }
    cout <<  "*** Grade: " << grade << " ***" << endl;
    return grade;
}
