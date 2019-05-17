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
#include<string.h>
#include "chain.hpp"
#include "powerset.hpp"
#include "product.hpp"
#include "range.hpp"
#include "zip.hpp"
#include "badkan.hpp"

using namespace std;
using namespace itertools;

int main() {
	badkan::TestCase testcase;
	int grade = 0;
	int wrong = 0;
	int right = 0;

	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0)
  {


  ostringstream ostr;

  // string result=""; string result1="";  string result2="";  string result3="";  string result4="";  string result5=""; string result6=""; string result7=""; string result8=""; string result9="";
  

  // for (double i: range(2.0000005,9.0000005))// not work print 2.000001
  //  {
	// 	result+=to_string(i); 
  //   result.append(" ");

  //  }  
  //  for (char i: range('a','e'))
  //  {
	// 	result1+=i; 
  //   result1.append(" ");

  //  }  
  // //   for (int i: range(4.5,8.7))
  // //  {
	// // 	result2=to_string(i); 
  // //  }  
  //   for (char i: range('b','b'))///????? not work print " "
  //  {
	// 	result3+=i; 
  //   result3.append(" ");

  //  }  
  // for (char i: string("computer"))
  // {
  //    result4+=i;   
  //    result4.append(" ");

  // }

  // for (auto i: string(" "))
  // {
  //    result5+=i;
   
  // }
  //   for (int i:range(5,9)) //"5 6 7 8"
  // {
  //    result6+=to_string(i);
  //    result6.append(" ");
   
  // }
  //     for (double i:range(1.1,7.1)) //"1.1 2.1 3.1 4.1 5.1 6.1"
  // {
  //    result7+=to_string(i);
  //    result7.append(" ");
   
  // }
  //     for (double i:range(0.5,7.5)) //"0.5 1.5 2.5 3.5 4.5 5.5 6.5"----<problem print 0.500, 1.5000
  // {
  //    result8+=to_string(i);
  //    result8.append(" ");
   
  // }
  //    for (int i:range(-5,3)) //"-5 -4 -3 -2 -1 0 1 2"
  // {
  //    result9+=to_string(i); 
  //    result9.append(" ");
  
  // }

  // testcase.setname("range test:")
 
  // .CHECK_EQUAL(result=="2.0000005 3.0000005 4.0000005 5.0000005 6.0000005 7.0000005 8.0000005 ", true)
  // .CHECK_EQUAL(result1=="a b c d ", true)
  // //.CHECK_EQUAL(result2=="4.5 ", true)//????
  // .CHECK_EQUAL(result3=="b", true)
  // .CHECK_EQUAL(result4=="c o m p u t e r ", true)
  // .CHECK_EQUAL(result5==" ", true)

  //  .CHECK_EQUAL(result6=="5 6 7 8 ", true)
  //  .CHECK_EQUAL(result7=="1.1 2.1 3.1 4.1 5.1 6.1 ", true)
  //  .CHECK_EQUAL(result8=="0.5 1.5 2.5 3.5 4.5 5.5 6.5 ", true)
  //  .CHECK_EQUAL(result9=="-5 -4 -3 -2 -1 0 1 2 ", true)
  
    
  // ;
  //    cout<<result5<<endl;
    string chain1=""; string chain2=""; /*string chain3=""*/; string chain4=""; string chain5=""; string chain6=""; string chain7=""; string chain8=""; string chain9="";  string chain10=""; string chain11="";
   
	for (int i: chain(range(0,4), range(5,7)))
  {
     chain1+=to_string(i);
  }
	
	for (char i: chain(range('e','e'), string("shira")))
  {
    chain2+=i;
   chain2.append(" ");

  }

// for (auto i: chain(range(1.1,6.1), range('a','g')))//problem!!!!!!!!
//   {
//      chain3+=to_string(i);
//      chain3.append(" ");
//   }
	
	for (char i: chain(range('g','k'), string("apple")))
  {
    chain4+=i;
    chain4.append(" ");
  }
  for (int i: chain(range(1,4), range(5,8)))
  {
     chain5+=to_string(i);
     chain5.append(" ");
  }
	
	for (char i: chain(string("welcome"), string("mom")))
  {
    chain6+=i;
    chain6.append(" ");
  }
  for (char i: chain(range('h','k'), range('k','p')))
  {
     chain7+=i;
     chain7.append(" ");
  }
	
	// for (char i: chain(range(' ',' '), string("liraz")))//???
  // {
  //   chain8=to_string(i);
  // }

    for (int i:chain(range(4,9),range(1,4)))//"4 5 6 7 8 1 2 3"
  {
     chain9+=to_string(i);
     chain9.append(" ");
  }
      for (double i:chain(range(0.1,0.5),range(3.2,6.2)))//"0.1 0.2 0.3 0.4 3.2 4.2 5.2"
  {
     chain10+=to_string(i);
     chain10.append(" ");
  }
       for (char i:chain(range('a','d'),string("hello")))//"a b c h e l l o"
  {
     chain11+=i;
     chain11.append(" ");
  }


    testcase.setname("chain test:")
 
   .CHECK_EQUAL(chain1=="0 1 2 3 5 6", true)
   .CHECK_EQUAL(chain2=="e s h i r a", true)
   //.CHECK_EQUAL(chain3=="1.1 2.1 3.1 4.1 5.1 a b c d e f", true)
   .CHECK_EQUAL(chain4=="g h i j a p p l e", true)
   .CHECK_EQUAL(chain5=="1 2 3 5 6 7", true)
   .CHECK_EQUAL(chain6=="w e l c o m e m o m ", true)
   .CHECK_EQUAL(chain7=="h i j k l m n o", true)
  //.CHECK_EQUAL(chain8=="    l i r a z", true)
   .CHECK_EQUAL(chain9=="4 5 6 7 8 1 2 3", true)
   .CHECK_EQUAL(chain10=="0.1 0.2 0.3 0.4 3.2 4.2 5.2", true)
   .CHECK_EQUAL(chain11=="a b c h e l l o", true)
   ;


cout<<chain2<<endl;


   string zip1=""; string zip2=""; string zip3="";  string zip5=""; string zip6=""; string zip7=""; string zip8="";  string zip9="";   string zip10="";
   
	for (auto pair: zip(range(9.2,14.2), string("galit")))//"9.2,g 10.2,a 11.2,l 12.2,i 13.2,t"
  {
    ostr<<pair<<" ";
  }
  zip1=ostr.str();
  ostr.str("");

	for (auto pair: zip((string("dani")),zip(string("roni"),range(6,10))))//"d,r,6 a,o,7 n,n,8 i,i,9"
  {
    ostr<<pair<<" ";
  }
  zip2=ostr.str();
  ostr.str("");

  for (auto pair: zip(range(5,7), string("dh")))//"5,d 6,h"
  {
    ostr<<pair<<" ";
  }
  zip3=ostr.str();
  ostr.str("");

  for (auto pair: zip(range(1.3,5.3), string("mira")))//"1.3m,2.3i,3.3r,4.3a"
  {
    ostr<<pair<<" ";
  }
  zip5=ostr.str();
  ostr.str("");


	for (auto pair: zip(zip(range(1,5), string("2222")),zip(string("1111"),range(6,10))))//1,2,1,6  2,2,1,7 3,2,1,8  5,2,1,9 
  {
    ostr<<pair<<" ";
  }
zip6=ostr.str();
ostr.str("");

  for (auto pair: zip(range(1,5), string("good")))//1,g 2,o 3,o 4,d
  {
    ostr<<pair<<" ";
  }
zip7=ostr.str();
ostr.str("");

    for (auto pair:zip(range(1,7),string("byebye")))//"1,b 2,y 3,e 4,b 5,y 6,e"
  {
    ostr<<pair<<" ";
  }
zip8=ostr.str();
ostr.str("");

     for (auto pair:zip(range(1,7),range(10,16)))//"1,10 2,11 3,12 4,13 5,14 6,15"
  {
    ostr<<pair<<" ";
  }
zip9=ostr.str();
ostr.str("");

     for (auto pair:zip(zip(range(1,4), string("xyz")),zip(string("abc"),range(6,9))))//"1,x,a,6  2,y,b,7  3,z,c,8"
  {
    ostr<<pair<<" ";
  }
  zip10=ostr.str();
  ostr.str("");

   

  testcase.setname("test zip:")

.CHECK_EQUAL(zip1=="9.2,g 10.2,a 11.2,l 12.2,i 13.2,t", true)
.CHECK_EQUAL(zip2=="d,r,6 a,o,7 n,n,8 i,i,9", true)
.CHECK_EQUAL(zip3=="5,d 6,h", true)
.CHECK_EQUAL(zip5=="1.3m,2.3i,3.3r,4.3a", true)
.CHECK_EQUAL(zip6=="1,2,1,6  2,2,1,7 3,2,1,8  5,2,1,9", true)
.CHECK_EQUAL(zip7=="1,g 2,o 3,o 4,d", true)
.CHECK_EQUAL(zip8=="1,b 2,y 3,e 4,b 5,y 6,e", true)
.CHECK_EQUAL(zip9=="1,10 2,11 3,12 4,13 5,14 6,15", true)
.CHECK_EQUAL(zip10=="1,x,a,6  2,y,b,7  3,z,c,8", true)

;



   string product1=""; string product2=""; string product3=""; string product4=""; string product5=""; string product6="";  string product7=""; string product8="";  string product9="";

	for (auto pair: product(range(1,2), string("may")))//"1,m 1,a 1,y"
  {
     product1+=to_string(pair);
  }

for (auto pair: product(string("2"), string("marker")))//"2,m 2,a 2,r 2,k 2,e 2,r"
{
     product2+=to_string(pair);
}

for (auto pair: product(range(1,4), range(0,1)))//"1,0 2,0 3,0"
{
     product3+=to_string(pair);
}

for (auto pair: product(range(6.7,9.7), string("log")))//"6.7,l 6.7,o 6.7,g 7.7,l 7.7,o 7.7,g 8.7l 8.7o 8.7g"
{
         product4+=to_string(pair);
}

for (auto pair: product(range(2,5), range(5,7)))//"2,5 2,6 3,5 3,6 4,5 4,6"
{
         product5+=to_string(pair);

}

for (auto pair: product(string("roya"), string("root")))//"r,r r,o r,o r,t o,r, o,o, o,o o,t y,r y,o y,o y,t a,r a,o a,o a,t"
{
        product6+=to_string(pair);

}

for (auto pair: product(string("neno"),range(60,62)))//"n,60 n,61 e,60 e,61 n,60 n,61 o,60 0,61"
{
       product7+=to_string(pair);

}
for (auto pair:product(range(1,3),string("helo")))//"1,h 1,e 1,l 1,o 2,h 2,e 2,l 2,o"
{
       product8+=to_string(pair);

}
for (auto pair:product(range(1,3),range(0.1,3.1)))//"1,0.1 1,1.1 1,2.1 2,0.1 2,1.1 2,2.1"
{
       product9+=to_string(pair);

}


    testcase.setname("product test:")

.CHECK_EQUAL(product1=="1,m 1,a 1,y", true)
.CHECK_EQUAL(product2=="2,m 2,a 2,r 2,k 2,e 2,r", true)
.CHECK_EQUAL(product3=="1,0 2,0 3,0", true)
.CHECK_EQUAL(product4=="6.7,l 6.7,o 6.7,g 7.7,l 7.7,o 7.7,g 8.7l 8.7o 8.7g", true)
.CHECK_EQUAL(product5=="2,5 2,6 3,5 3,6 4,5 4,6", true)
.CHECK_EQUAL(product6=="r,r r,o r,o r,t o,r, o,o, o,o o,t y,r y,o y,o y,t a,r a,o a,o a,t", true)
.CHECK_EQUAL(product7=="n,60 n,61 e,60 e,61 n,60 n,61 o,60 0,61", true)
.CHECK_EQUAL(product8=="1,h 1,e 1,l 1,o 2,h 2,e 2,l 2,o", true)
.CHECK_EQUAL(product9=="1,0.1 1,1.1 1,2.1 2,0.1 2,1.1 2,2.1", true)

  ;


  string powerset2="";  string powerset3="";  string powerset4=""; string powerset5=""; string powerset7=""; string powerset8="";  string powerset9="";


	for (auto subset: powerset(chain(range('a','b'),range('f','h'))))//"{}{a}{f}{g}{a,f}{a,g}{f,g}{a,f,g}"
  {
      powerset2+=to_string(subset);
  }
  for (auto subset: powerset(range(13,15)))//"{},{13},{14},{13,14}"
  {
      powerset3+=to_string(subset);
  }

	for (auto subset: powerset(chain(range('s','k'),range('x','z'))))//"{},{s},{i},{g},{}"
  {
      powerset4+=to_string(subset);
  }

  for (auto subset: powerset(range(4.6,8.6)))//"{},{4.6},{5.6},{7.6},{4.6,5.6},{4.6,7.6},{5.6,7,6},{4.6,5.6,7.6}"
  {
      powerset5+=to_string(subset);
  }


  for (auto subset: powerset(range(6,10)))//"{},{6},{7},{8},{9},{6,7},{6,8},{6,9},{8,9},{7,8},{7,9},{6,7,8},{6,7,9},{7,8,9},{6,7,8,9}"
  {
      powerset7+=to_string(subset);
  }

    for (auto subset: powerset(range(1,4)))//"{}{1}{2}{1,2}{3}{1,3}{2,3}{1,2,3}"
  {
      powerset8+=to_string(subset);
  }

     for (auto subset:powerset(chain(range('a','c'),range('x','z'))))//"{}{a}{b}{a,b}{x}{a,x}{b,x}{a,b,x}{y}{a,y}{b,y}{a,b,y}{x,y}{a,x,y}{b,x,y}{a,b,x,y}"
  {
      powerset9+=to_string(subset);
  }

  


testcase.setname("powerset test:")

.CHECK_EQUAL(powerset2=="{}{a}{f}{g}{a,f}{a,g}{f,g}{a,f,g}", true)
.CHECK_EQUAL(powerset3=="{},{13},{14},{13,14}", true)
.CHECK_EQUAL(powerset4=="{},{s},{i},{g},{}", true)
.CHECK_EQUAL(powerset5=="{},{4.6},{5.6},{7.6},{4.6,5.6},{4.6,7.6},{5.6,7,6},{4.6,5.6,7.6}", true)
.CHECK_EQUAL(powerset7=="{},{6},{7},{8},{9},{6,7},{6,8},{6,9},{8,9},{7,8},{7,9},{6,7,8},{6,7,9},{7,8,9},{6,7,8,9}", true)
.CHECK_EQUAL(powerset8=="{}{1}{2}{1,2}{3}{1,3}{2,3}{1,2,3}", true)
.CHECK_EQUAL(powerset9=="{}{a}{b}{a,b}{x}{a,x}{b,x}{a,b,x}{y}{a,y}{b,y}{a,b,y}{x,y}{a,x,y}{b,x,y}{a,b,x,y}", true)
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