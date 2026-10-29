#include "arraylib.h"
#include <iostream>
#include <cstddef>
using namespace std;
int arr_sum(const int* a, size_t n) {
int s = 0;
for (size_t i = 0; i < n; ++i) s += a[i];
return s;
}
int arr_max(const int* a, size_t n) {
int m = a[0];
for (size_t i = 1; i < n; ++i) if (a[i] > m) m = a[i];
return m;
}
int arr_min(const int* a, size_t n) {
    int m = a[0];
    for (size_t i = 1; i < n; ++i)
        if (a[i] < m) m = a[i];
    return m;
}

double arr_average(const int* a, size_t n) {
    int s = 0;
    for (size_t i = 0; i < n; ++i) s += a[i];
    return static_cast<double>(s) / n;
}

int arr_count_positive(const int* a, size_t n) {
    int c = 0;
    for (size_t i = 0; i < n; ++i)
        if (a[i] > 0) ++c;
    return c;
}


int arr_count_negative(const int* a, size_t n) {
    int cou = 0;

    for (size_t i = 0; i < n; ++i) {
        if (a[i] < 0) {
            ++cou;
        }
    }

    return cou;
}


int arr_count_zero(const int* a, size_t n) {
    int co = 0;

    for (size_t i = 0; i < n; ++i) {
        if (a[i] == 0) {
            ++co;
        }
    }

    return co;
}

int arr_product(const int* a, size_t n) {
    int p = 1;
    for (size_t i = 0; i < n; ++i) p *= a[i];
    return p;
}

double arr_median(const int* a, size_t n) {
    int* b = new int[n];

    for (size_t i = 0; i < n; ++i) b[i] = a[i];

    for (size_t i = 0; i < n; ++i)
        for (size_t j = i + 1; j < n; ++j)
            if (b[i] > b[j]) {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }

    double m;
    if (n % 2 == 1)
        m = b[n / 2];
    else
        m = (static_cast<double>(b[n / 2 - 1]) + b[n / 2]) / 2.0;

    delete[] b;
    return m;
}

