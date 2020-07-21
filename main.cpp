
// Main driver file
#include "ImageTransform.h"

int main() {
    std::ios_base::sync_with_stdio(false);
    uiuc::PNG png, png2, result;

    png.readFromFile("alma.png");
    result = grayscale(png);
    result.writeToFile("out-grayscale.png");

    result = createSpotlight(png, 450, 150);
    result.writeToFile("out-spotlight.png");

    result = illinify(png);
    result.writeToFile("out-illinify.png");

    png2.readFromFile("overlay.png");
    result = watermark(png, png2);
    result.writeToFile("out-watermark.png");

    return 0;
}
