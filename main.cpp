#include <iostream>
#include <cstddef>
#include "arraylib.h"

using namespace std;

int main() {
    int arr[] = {1, -2, 3, 0, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum: " << arr_sum(arr, n) << endl;
    cout << "Maximum: " << arr_max(arr, n) << endl;
    cout << "Minimum: " << arr_min(arr, n) << endl;
    cout << "Average: " << arr_average(arr, n) << endl;
    cout << "Positive count: " << arr_count_positive(arr, n) << endl;
    cout << "Negative count: " << arr_count_negative(arr, n) << endl;
    cout << "Zero count: " << arr_count_zero(arr, n) << endl;
    cout << "Product: " << arr_product(arr, n) << endl;
    cout << "Median: " << arr_median(arr, n) << endl;

    return 0;
}
