#pragma once
#include "range.hpp"

namespace itertools
{
template <typename T>

class zip
{
    T _contZip1;
    T _contZip2;

public:
    zip(T contZip1, T contZip2);
    T begin(T start1, T stop2);
    T end(T start2, T stop2);
};

};
