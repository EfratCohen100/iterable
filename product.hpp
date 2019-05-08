#pragma once
#include "range.hpp"


namespace itertools
{
template <typename T>

class product
{
 T _contProdut1;
 T _contProduct2;
public:
    product(T contProdut1, T contProduct2);
    T begin(T start1, T start2);
    T end(T stop1, T stop2);
};

};
