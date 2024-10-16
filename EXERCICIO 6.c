#include <iostream>
#include <vector>
#include <algorithm>

double calcularMediana(std::vector<int>& array) {
    std::sort(array.begin(), array.end());
    int n = array.size();
    if (n % 2 == 1) {
        return array[n / 2];
    } else {
        return (array[n / 2 - 1] + array[n / 2]) / 2.0;
    }
}

int main() {
    std::vector<int> array = {3, 1, 4, 1, 5, 9, 2};
    std::cout << calcularMediana(array) << std::endl;
    return 0;
}
