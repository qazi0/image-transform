
#include "HSLAPixel.h"

namespace uiuc {

    HSLAPixel::HSLAPixel() {
        l = 1;
        h = 0;
        s = 0;
        a = 1;
    }
    HSLAPixel::HSLAPixel(double h_, double s_, double l_, double a_) {
        h = h_;
        s = s_;
        l = l_;
        a = a_;
    }

    HSLAPixel::HSLAPixel(double h_, double s_, double l_) {
        h = h_;
        s = s_;
        l = l_;
        a = 1;
    }
}
