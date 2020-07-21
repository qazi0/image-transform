all: program

program: part2.o ../uiuc/catch/catchmain.o ../uiuc/HSLAPixel.o ../ImageTransform.o ../uiuc/PNG.o ../uiuc/lodepng/lodepng.o
    g++ part2.o ../uiuc/catch/catchmain.o ../uiuc/HSLAPixel.o ../ImageTransform.o ../uiuc/PNG.o ../uiuc/lodepng/lodepng.o -o program

clean:
    rm -f *.o
    rm -f program