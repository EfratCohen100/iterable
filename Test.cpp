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
#include<string.h>
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


auto rang1=range<int>(0,0);
auto rang2=range<int>(45,43);///error 
auto rang3=range<double>(8.7,10.7);
auto rang4=range<double> (2.3,6.3);
auto rang5=range<char>('a','f');
auto rang6=range<char>('a','k');
auto rang7=range<int>(7,4);//error


  testcase.setname("range test:")
  .CHECK_EQUAL(range(5,9),"5 6 7 8")
  .CHECK_EQUAL(range(1.1,7.1),"1.1 2.1 3.1 4.1 5.1 6.1")
  .CHECK_EQUAL(range(0.5,7.5),"0.5 1.5 2.5 3.5 4.5 5.5 6.5")   ///??? add 0.1 or 0.5 or 1
  .CHECK_EQUAL(range('a','d'),"a b c d")
  .CHECK_EQUAL(range(-5,3),"-5 -4 -3 -2 -1 0 1 2") ///minus??

  string result="";
  string result1="";
  string result2="";
  string result3="";
  string result4="";
  string result5="";
  string result6="";

  for (int i: range('2.0000005','9.0000005'))
   {
		result=to_string(i); 
   }  
   for (char i: range('a','e'))
   {
		result1=to_string(i); 
   }  
    for (int i: range('4.5','8.7'))//?????
   {
		result2=to_string(i); 
   }  
    for (char i: range('b','b'))
   {
		result3=to_string(i); 
   }  
  for (char i: string("computer"))
  {
     result4=to_string(i);   
  }
  for (char i: string(""))
  {
     result5+=to_string(i);   
  }
  for (char i: string("container"))
  {
     result6=to_string(i);   
  }

.CHECK_EQUAL(result=="2.0000005 3.0000005 4.0000005 5.0000005 6.0000005 7.0000005 8.0000005", true)
.CHECK_EQUAL(result1=="a b c d", true)
.CHECK_EQUAL(result2=="4.5 ", true)//????
.CHECK_EQUAL(result3=="b", true)
CHECK_EQUAL(result4=="c o m p u t e r", true)
.CHECK_EQUAL(result5==" ", true)
CHECK_EQUAL(result6=="c o n t a i n e r", true)

// template<typename Iterable>
// string iterable_to_string(const Iterable& iterable) {
//     ostringstream ostr;
//     for (decltype(*iterable.begin()) i: iterable)
//         ostr << i << ",";
//     return ostr.str();
// }  
		


    testcase.setname("chain test:")
   .CHECK_EQUAL(chain(range(4,9),range(1,4)),"4 5 6 7 8 1 2 3")
   .CHECK_EQUAL(chain(range(0.1,0.5),range(3.2,6.2)),"0.1 0.2 0.3 0.4 3.2 4.2 5.2")  //????
   //.CHECK_EQUAL(chain(range('a','d'),string("hello")),"a b c h e l l o")

   string chain1="";
   string chain2="";
   string chain3="";
   string chain4="";
   string chain5="";
   string chain6="";
   string chain7="";
   string chain8="";
   
	for (int i: chain(range(0,4), range(5,7)))
  {
     chain1=to_string(i);
     testcase.CHECK_EQUAL(i,1 2 3 5 6 7);
  }
	
	for (char i: chain(range('e','e'), string("shira")))
  {
    chain2=to_string(i);
  }

for (auto i: chain(range(1.1,6.1), range('a','g')))
  {
     chain3=to_string(i);
  }
	
	for (char i: chain(range('s','d'), string("apple")))//***error
  {
    chain4=to_string(i);
  }
  for (int i: chain(range(1,4), range(5,8)))
  {
     chain5=to_string(i);
  }
	
	for (char i: chain(string("welcome"), string("mom")))
  {
    chain6=to_string(i);
  }
  for (int i: chain(range(h,k), range(k,p)))
  {
     chain7=to_string(i);
  }
	
	for (char i: chain(range('',''), string("liraz")))//???
  {
    chain8=to_string(i);
  }
;

.CHECK_EQUAL(chain1=="0 1 2 3 5 6", true)
.CHECK_EQUAL(chain2=="e s h i r a", true)
.CHECK_EQUAL(chain3=="1.1 2.1 3.1 4.1 5.1 a b c d e f", true)//????
.CHECK_EQUAL(chain4=="", true)//***error****
CHECK_EQUAL(chain5=="1 2 3 5 6 7", true)
.CHECK_EQUAL(chian6=="w e l c o m e m o m ", true)
CHECK_EQUAL(chain7=="h i j k l m n o", true)
CHECK_EQUAL(chain8=="l i r a z", true)


    testcase.setname("test zip:")
  //  .CHECK_EQUAL(zip(range(1,7),string("byebye")),"1,b 2,y 3,e 4,b 5,y 6,e")
   //.CHECK_EQUAL(zip(range(1,7),range(10,16)),"1,10 2,11 3,12 4,13 5,14 6,15")
  //.CHECK_EQUAL(zip(zip(range(1,4), string("xyz")),zip(string("abc"),range(6,9)))),"1,x,a,6  2,y,b,7  3,z,c,8")

   string zip1="";
   string zip2="";
   string zip3="";
   string zip4="";
   string zip5="";
   string zip6="";
   string zip7="";
   string zip8="";
   
	for (auto pair: zip(range(9.2,14.2), string("galit")))//"9.2,g 10.2,a 11.2,l 12.2,i 13.2,t"
  {
    zip1=to_string(i);

  }
	for (auto pair: zip(zip(string("dani")),zip(string("roni"),range(6,10))))//"d,r,6 a,o,7 n,n,8 i,i,9"
  {
    zip2=to_string(i);

  }
  for (auto pair: zip(range(5,5), string("dh")))//"5d,h"**error**?
  {
    zip3=to_string(i);

  }
	for (auto pair: zip(zip(range(0,5), string("box")),zip(string("888"),range(6,10))))///????????
  {
        zip4=to_string(i);

  }
  for (auto pair: zip(range(1.3,5.3), string("mira")))//"1.3m,2.3i,3.3r,4.3a"
  {
    zip5=to_string(i);

  }
	for (auto pair: zip(zip(range(1,5), string("2222")),zip(string("1111"),range(6,10))))//1,2,1,6  2,2,1,7 3,2,1,8  5,2,1,9 
  {
        zip6=to_string(i);

  }
  for (auto pair: zip(range(1,5), string("good")))//1,g 2,o 3,o 4,d
  {
    zip7=to_string(i);

  }
	for (auto pair: zip(zip(range(0,0), string("kkk")),zip(string("mnb"),range(1,1))))//????
  {
        zip8=to_string(i);

  }

;

.CHECK_EQUAL(zip1=="9.2,g 10.2,a 11.2,l 12.2,i 13.2,t", true)
.CHECK_EQUAL(zip2=="d,r,6 a,o,7 n,n,8 i,i,9", true)
.CHECK_EQUAL(zip3=="5d,h", true)//????error
.CHECK_EQUAL(zip4=="", true)//***error****???
CHECK_EQUAL(zip5=="1.3m,2.3i,3.3r,4.3a", true)
.CHECK_EQUAL(zip6=="1,2,1,6  2,2,1,7 3,2,1,8  5,2,1,9", true)
CHECK_EQUAL(zip7=="1,g 2,o 3,o 4,d", true)
CHECK_EQUAL(zip8=="", true)///error!?????

    ;

    testcase.setname("product test:")
     
   //.CHECK_EQUAL(product(range(1,3),string("helo")),"1,h 1,e 1,l 1,o 2,h 2,e 2,l 2,o")
   //.CHECK_EQUAL(product(range(1,3),range(0.1,3.1)),"1,0.1 1,1.1 1,2.1 2,0.1 2,1.1 2,2.1")

   ///add test here : product with zip,product with chain

   string product1="";
   string product2="";
   string product3="";
   string product4="";
   string product5="";
   string product6="";
   string product7="";
   string product8="";

	for (auto pair: product(range(1,2), string("may")))//"1,m 1,a 1,y"
  {
     product1=to_string(pair);
  }

for (auto pair: product(string("2"), string("marker")))//"2,m 2,a 2,r 2,k 2,e 2,r"
{
     product2=to_string(pair);
}

for (auto pair: product(range(1,4), range(0,1)))//"1,0 2,0 3,0"
{
     product3=to_string(pair);
}

for (auto pair: product(range(6.7,9.7), string("log")))//"6.7,l 6.7,o 6.7,g 7.7,l 7.7,o 7.7,g 8.7l 8.7o 8.7g"
{
         product4=to_string(pair);
}

for (auto pair: product(range(2,5), range(5,7)))//"2,5 2,6 3,5 3,6 4,5 4,6"
{
         product5=to_string(pair);

}

for (auto pair: product(string("roya"), string("root")))//"r,r r,o r,o r,t o,r, o,o, o,o o,t y,r y,o y,o y,t a,r a,o a,o a,t"
{
        product6=to_string(pair);

}

for (auto pair: product(string("neno"),range(60,62)))//"n,60 n,61 e,60 e,61 n,60 n,61 o,60 0,61"
{
       product7=to_string(pair);

}

for (auto pair: product(range(5,4), string("yoyo")))//erorr*******
{
        product8=to_string(pair);

}

.CHECK_EQUAL(product1=="1,m 1,a 1,y", true)
.CHECK_EQUAL(product2=="2,m 2,a 2,r 2,k 2,e 2,r", true)
.CHECK_EQUAL(product3=="1,0 2,0 3,0", true)
.CHECK_EQUAL(product4=="6.7,l 6.7,o 6.7,g 7.7,l 7.7,o 7.7,g 8.7l 8.7o 8.7g", true)
CHECK_EQUAL(product5=="2,5 2,6 3,5 3,6 4,5 4,6", true)
.CHECK_EQUAL(product6=="r,r r,o r,o r,t o,r, o,o, o,o o,t y,r y,o y,o y,t a,r a,o a,o a,t", true)
CHECK_EQUAL(product7=="n,60 n,61 e,60 e,61 n,60 n,61 o,60 0,61", true)
CHECK_EQUAL(product8=="", true)///error!?????
  ;

    testcase.setname("powerset test:")
    .CHECK_EQUAL(powerset(range(1,4)),"{}{1}{2}{1,2}{3}{1,3}{2,3}{1,2,3}")
    .CHECK_EQUAL(powerset(chain(range('a','c'),range('x','z'))),"{}{a}{b}{a,b}{x}{a,x}{b,x}{a,b,x}{y}{a,y}{b,y}{a,b,y}{x,y}{a,x,y}{b,x,y}{a,b,x,y}")
     

    string powerset1="";
    string powerset2="";
    string powerset3="";
    string powerset4="";
    string powerset5="";
    string powerset6="";
    string powerset7="";
    string powerset8="";


	for (auto subset: powerset(range(0,"")))//"{},{0}"
  {
      powerset1=to_string(subset);
  }

	for (auto subset: powerset(chain(range('a','b'),range('f','h'))))//"{}{a}{f}{g}{a,f}{a,g}{f,g}{a,f,g}"
  {
      powerset2=to_string(subset);
  }
  for (auto subset: powerset(range(13,15)))//"{},{13},{14},{13,14}"
  {
      powerset3=to_string(subset);
  }

	for (auto subset: powerset(chain(range('s','k'),range('x','z'))))//"{},{s},{i},{g},{}"
  {
      powerset4=to_string(subset);
  }

  for (auto subset: powerset(range(4.6,8.6)))//"{},{4.6},{5.6},{7.6},{4.6,5.6},{4.6,7.6},{5.6,7,6},{4.6,5.6,7.6}"
  {
      powerset5=to_string(subset);
  }

	for (auto subset: powerset(chain(range('',''),range('a','a'))))//{},{a}
  {
      powerset6=to_string(subset);
  }
  for (auto subset: powerset(range(6,10)))//"{},{6},{7},{8},{9},{6,7},{6,8},{6,9},{8,9},{7,8},{7,9},{6,7,8},{6,7,9},{7,8,9},{6,7,8,9}"
  {
      powerset7=to_string(subset);
  }

	for (auto subset: powerset(chain(range('0','0'),range('888','777'))))//***error!!****
  {
      powerset8=to_string(subset);
  }

.CHECK_EQUAL(powerset1=="{},{0}", true)//****error??****
.CHECK_EQUAL(powerset2=="{}{a}{f}{g}{a,f}{a,g}{f,g}{a,f,g}", true)
.CHECK_EQUAL(powerset3=="{},{13},{14},{13,14}", true)
.CHECK_EQUAL(powerset4=="{},{s},{i},{g},{}", true)
CHECK_EQUAL(powerset5=="{},{4.6},{5.6},{7.6},{4.6,5.6},{4.6,7.6},{5.6,7,6},{4.6,5.6,7.6}", true)
.CHECK_EQUAL(powerset6=="{},{a}" true)
CHECK_EQUAL(powerset7=="{},{6},{7},{8},{9},{6,7},{6,8},{6,9},{8,9},{7,8},{7,9},{6,7,8},{6,7,9},{7,8,9},{6,7,8,9}", true)
CHECK_EQUAL(powerset8=="", true)///error!?????
  
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