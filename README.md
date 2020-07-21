# Image Transform

## Intro

PNG Editor in C++, with grayscaling, illinifying, spot light creation and watermarking support.
This is the final project of an Object-oriented C++ course I took.

### Prerequisites

```
 C++11 or later
```

### Building and Running

Use the provided `Makefile` to build:

```
make
```

To execute the image transformations specified in `main.cpp`:

```
./ImageTransform
```

This will generate the required transformed images in the working directory.

## Running the tests

Automated Tests using the Catch C++ Unit Testing framework are in `tests/` directory and can be built by:
```
make test
```

Run with:
```
./test
````

## Features

Currently the editor supports four image transformations - grayscale, illinify, spotlight and watermarking.

### Sample input

![Alma](/alma.png)

![Watermark](/overlay.png)

### Sample outputs

![Grayscaled](/out-grayscale.png)

![Illinifyd](/out-illinify.png)

![Spotlighted](/out-spotlight.png)

![Watermarked](/out-watermark.png)

## Built With

* [CLion](https://www.jetbrains.com/clion/) - A cross-platform IDE for C and C++

## Authors

* **Siraj Qazi**

## License

This project is licensed under the GNU General Public License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

 - [PurpleBooth](https://github.com/PurpleBooth) for the simplistic README template.
