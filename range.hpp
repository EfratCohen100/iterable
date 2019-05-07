#pragma once
namespace itertools
{
template <typename T>
class range
{
public:
     T rangeCont;

    range(T rangeConst1 , T rangeCont2);
  range begin(range container);
  range end(range container);

};
}
