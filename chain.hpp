#pragma once
#include "range.hpp"

namespace itertools
{
template <typename T>
class chain
{

public:
    range _container1;
    range _container2;
    string _container;
    chain(range container1, range container2);
    chain(range container1, string container2);
};
}
