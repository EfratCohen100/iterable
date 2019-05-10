/**
 *  .CHECK_OK()
 *  .CHECK_EQUAL("","")
 *  .CHECK_OUTPUT("","")
 *  .CHECK_THROWS()
 * 
 * @author Carmel & Efrat & Odelia
 * @since 2019-05
 */

#include <iostream>
#include <sstream>
using namespace std;
using namespace itertools;
#include "chain.hpp"
#include "powerset.hpp"
#include "product.hpp"
#include "range.hpp"
#include "zip.hpp"
#include "badkan.hpp"

int main() {
	badkan::TestCase testcase;
	int grade = 0;
	int wrong = 0;
	int right = 0;

	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0)
  {


    testcase.setname("range test:")
    .CHECK_EQUAL(range(5,9),"5 6 7 8")
    .CHECK_EQUAL(range(1.1,7.1),"1.1 2.1 3.1 4.1 5.1 6.1")
    .CHECK_EQUAL(range(0.5,7.5),"0.5 1.5 2.5 3.5 4.5 5.5 6.5")   ///??? add 0.1 or 0.5 or 1
    .CHECK_EQUAL(range('a','d'),"a b c d")
    .CHECK_EQUAL(range(-5,3),"-5 -4 -3 -2 -1 0 1 2") ///minus??

    ;


    testcase.setname("chain test:")
   .CHECK_EQUAL(chain(range(4,9),range(1,4)),"4 5 6 7 8 1 2 3")
   .CHECK_EQUAL(chain(range(0.1,0.5),range(3.2,6.2)),"0.1 0.2 0.3 0.4 3.2 4.2 5.2")  //????
   //.CHECK_EQUAL(chain(range('a','d'),string("hello")),"a b c h e l l o")

    ;


    testcase.setname("test zip:")
  //  .CHECK_EQUAL(zip(range(1,7),string("byebye")),"1,b 2,y 3,e 4,b 5,y 6,e")
   //.CHECK_EQUAL(zip(range(1,7),range(10,16)),"1,10 2,11 3,12 4,13 5,14 6,15")
  //.CHECK_EQUAL(zip(zip(range(1,4), string("xyz")),zip(string("abc"),range(6,9)))),"1,x,a,6  2,y,b,7  3,z,c,8")
 

    ;

    testcase.setname("product test:")
   //.CHECK_EQUAL(product(range(1,3),string("helo")),"1,h 1,e 1,l 1,o 2,h 2,e 2,l 2,o")
   //.CHECK_EQUAL(product(range(1,3),range(0.1,3.1)),"1,0.1 1,1.1 1,2.1 2,0.1 2,1.1 2,2.1")

   ///add test here : product with zip,product with chain

    ;


    testcase.setname("powerset test:")
    .CHECK_EQUAL(powerset(range(1,4)),"{}{1}{2}{1,2}{3}{1,3}{2,3}{1,2,3}")
    .CHECK_EQUAL(powerset(chain(range('a','c'),range('x','z'))),"{}{a}{b}{a,b}{x}{a,x}{b,x}{a,b,x}{y}{a,y}{b,y}{a,b,y}{x,y}{a,x,y}{b,x,y}{a,b,x,y}")
  
  
    ;


        
        grade = testcase.grade();
		wrong = testcase.wrong();
		right = testcase.right();
	}
	
    else
	{
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: " << grade << " "
		 << "Wrong: " << wrong << "  "
		 << "Right: " << right << " " << endl;
	return 0;
}