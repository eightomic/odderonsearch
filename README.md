# OdderonSearch

[![OdderonSearch](odderonsearch.jpg)](https://github.com/eightomic/odderonsearch)

OdderonSearch (as a proprietary, source-available product of [Eightomic](https://eightomic.com)) is the fast efficient linear search that has low-footprint implementation (efficient memory usage and small code size), no division/modulus/multiplication operators and ultra-fast speed (relative to the aforementioned constraints).

Each mention of OdderonSearch refers to both of the following variants individually (`odderonsearch_first` and `odderonsearch_last`) implemented in C.

[odderonsearch.c](odderonsearch.c)

The `odderonsearch_first` function searches in a `haystack` array (of `haystack_length` elements) for the first occurrence (left-to-right) of a `needle`.

When `needle` is found, `1` is returned and the index position (of `needle`) is assigned as the value pointed to by `position`. When `needle` isn't found, `0` is returned.

The integral type of each element in `haystack` must match the integral type of `needle`.

Each of the following results log the fastest process execution speed (in milliseconds) among several repetitions of a speed benchmark (with `gcc -O0` from an AMD A4-9120C) that searches for 10 million pseudorandom `needle` elements in `haystack_length` pseudorandom `haystack` elements in a blocking `#pragma GCC unroll 0 loop`.

```
haystack_length   Elapsed                 Elapsed
                  (odderonsearch_first)   (naive_linear_search_first)

1                 62ms                    67ms
2                 90ms                    93ms
3                 97ms                    120ms
4                 129ms                   171ms
5                 138ms                   189ms
6                 173ms                   240ms
7                 178ms                   270ms
8                 237ms                   312ms
12                348ms                   498ms
16                409ms                   498ms
32                828ms                   1011ms
64                1359ms                  1640ms
128               2138ms                  2779ms
256               3252ms                  4334ms
```

The `odderonsearch_last` function searches in a `haystack` array (of `haystack_length` elements) for the last occurrence (right-to-left) of a `needle`.

When `needle` is found, `1` is returned and the index position (of `needle`) is assigned as the value pointed to by `position`. When `needle` isn't found, `0` is returned.

The integral type of each element in `haystack` must match the integral type of `needle`.

Each of the following results log the fastest process execution speed (in milliseconds) among several repetitions of a speed benchmark (with `gcc -O0` from an AMD A4-9120C) that searches for 10 million pseudorandom `needle` elements in `haystack_length` pseudorandom `haystack` elements in a blocking `#pragma GCC unroll 0 loop`.

```
haystack_length   Elapsed                Elapsed
                  (odderonsearch_last)   (naive_linear_search_last)

1                 59ms                   73ms
2                 84ms                   97ms
3                 90ms                   132ms
4                 123ms                  167ms
5                 131ms                  211ms
6                 162ms                  237ms
7                 171ms                  267ms
8                 211ms                  294ms
12                294ms                  431ms
16                373ms                  599ms
32                791ms                  1035ms
64                1279ms                 1739ms
128               2053ms                 2890ms
256               3147ms                 4586ms
```
