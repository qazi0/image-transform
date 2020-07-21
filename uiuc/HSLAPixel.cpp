/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

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
