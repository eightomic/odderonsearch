# OdderonSearch

[![OdderonSearch](odderonsearch.jpg)](https://github.com/eightomic/odderonsearch)

## Table of Contents

- [Introduction](README.md?tab=readme-ov-file#introduction)
- [Author](README.md?tab=readme-ov-file#author)
- [License](README.md?tab=readme-ov-file#license)
- [Implementation](README.md?tab=readme-ov-file#implementation)

## Introduction

OdderonSearch is the efficient linear search algorithm that has low-footprint implementation (efficient memory usage and small code size), no division/modulus/multiplication operators and ultra-fast speed.

## Author

OdderonSearch was created by William Stafford Parsons as a product of [Eightomic](https://eightomic.com).

## License

OdderonSearch is licensed with [BSD-3-Clause](LICENSE).

## Implementation

Each mention of OdderonSearch refers to both of the following variants individually (`odderonsearch_first` and `odderonsearch_last`) implemented in C.

[odderonsearch.c](odderonsearch.c)

The `odderonsearch_first` function searches in a `haystack` array (of `haystack_length` elements) for the first occurrence (left-to-right) of a `needle`.

When `needle` is found, `1` is returned and the index position (of `needle`) is assigned as the value pointed to by `position`. When `needle` isn't found, `0` is returned.

The integral type of each element in `haystack` must match the integral type of `needle`.

The `odderonsearch_last` function searches in a `haystack` array (of `haystack_length` elements) for the last occurrence (right-to-left) of a `needle`.

When `needle` is found, `1` is returned and the index position (of `needle`) is assigned as the value pointed to by `position`. When `needle` isn't found, `0` is returned.

The integral type of each element in `haystack` must match the integral type of `needle`.
