#pragma once
#include "range.hpp"

namespace itertools
{
template <typename T>
class chain
{

public:
    T _container1;
    T _container2;
    chain(T container1, T container2);
    // T begin(T start1, T start2);
    // T end(T stop1, T stop2);
};
};