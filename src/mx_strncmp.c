#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, size_t n) {
    size_t i = 0;

    if (!n && (!s1 || !s2)) {
        return 0;
    }
    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n) {
        i++;
    }
    if (i == n) {
        return 0;
    }
    else {
        return s1[i] - s2[i];
    }
}

