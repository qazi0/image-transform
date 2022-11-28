# Image Transform

### Description

PNG Editor in C++, with grayscaling, illinifying, spot light creation and watermarking support.

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

#### Input image:
![Alma](/alma.png)

#### Watermark to apply:
![Watermark](/overlay.png)

### Sample outputs

#### Grayscaled:
![Grayscaled](/out-grayscale.png)

#### Illinifyd:
![Illinifyd](/out-illinify.png)

#### Spotlighted:
![Spotlighted](/out-spotlight.png)

#### Watermarked:
![Watermarked](/out-watermark.png)

## Built With

* [CLion](https://www.jetbrains.com/clion/) - A cross-platform IDE for C and C++

## Authors

* **Siraj Qazi**

## License

This project is licensed under the GNU General Public License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

 - [PurpleBooth](https://github.com/PurpleBooth) for the simplistic README template.
