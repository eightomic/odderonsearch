#include <stddef.h>

char odderonsearch_first(int *haystack, size_t haystack_length, int needle,
                         size_t *position) {
  size_t i = 0;

  if (haystack_length & 1) {
    if (haystack[0] == needle) {
      *position = 0;
      return 1;
    }

    i = 1;
  }

  while (i < haystack_length) {
    if (haystack[i] == needle) {
      *position = i;
      return 1;
    }

    if (haystack[i + 1] == needle) {
      *position = i + 1;
      return 1;
    }

    i += 2;
  }

  return 0;
}

char odderonsearch_last(int *haystack, size_t haystack_length, int needle
                        size_t *position) {
  if (haystack_length & 1) {
    haystack_length--;

    if (haystack[haystack_length] == needle) {
      *position = haystack_length;
      return 1;
    }
  }

  while (haystack_length) {
    haystack_length -= 2;

    if (haystack[haystack_length + 1] == needle) {
      *position = haystack_length + 1;
      return 1;
    }

    if (haystack[haystack_length] == needle) {
      *position = haystack_length;
      return 1;
    }
  }

  return 0;
}
