#pragma once

#include <cassert>
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::string;





template <typename T1, typename T2> 
class pair {
	
	public:
	T1 first;
	T2 second;

	pair(T1 first, T2 second) : first(first),second(second) {}
	



ostream& operator<< (ostream& out, const pair<T1,T2>& thepair) {
	out << thepair.first << "," << thepair.second;
	return out;
}


};



