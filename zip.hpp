#pragma once
#include "range.hpp"

namespace itertools
{
template <typename T>

class zip
{
    range _contZip1;
    range _contZip2;
    string _strZip;

public:
    zip(range contZip1, range contZip2);
    zip(range contZip, string strZip);
};

};
