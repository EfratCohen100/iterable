#pragma once
namespace itertools
{
template <typename T>
class range
{
    class iterator{
public:
    T _iter;
    iterator(T iter);

     T _container1;
     T _container2;

 range(T rangeConst1 , T rangeCont2);
 T begin(T container1,T container2);
 T end( T container2, T container2);
 
  void operator++(iter++);

 }
};
};