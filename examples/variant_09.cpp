#include <iostream>
#include "arraylib.h"

using namespace std;

int main() {
    int a[] = {1, -2, 3, 0, 5};
    size_t n = sizeof(a) / sizeof(a[0]);

    cout << "Сумма: " << arr_sum(a, n) << endl;
    cout << "Максимум: " << arr_max(a, n) << endl;
    cout << "Минимум: " << arr_min(a, n) << endl;
    cout << "Среднее: " << arr_average(a, n) << endl;
    cout << "Положительных: " << arr_count_positive(a, n) << endl;
    cout << "Отрицательных: " << arr_count_negative(a, n) << endl;
    cout << "Нулей: " << arr_count_zero(a, n) << endl;
    cout << "Произведение: " << arr_product(a, n) << endl;
    cout << "Медиана: " << arr_median(a, n) << endl;

    return 0;
}