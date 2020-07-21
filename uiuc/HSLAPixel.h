#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  class HSLAPixel {
  public:
      HSLAPixel();
      HSLAPixel(double, double, double);
      HSLAPixel(double, double, double, double);
      double h{},s{},l{},a{};
  };


}
