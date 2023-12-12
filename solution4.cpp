#include <iostream>
#include <algorithm>
#include <vector>

bool isSubset(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> sortedArr1(arr1);
    std::vector<int> sortedArr2(arr2);

    std::sort(sortedArr1.begin(), sortedArr1.end());
    std::sort(sortedArr2.begin(), sortedArr2.end());

    size_t i = 0;
    size_t j = 0;

    while (i < sortedArr1.size() && j < sortedArr2.size()) {
        if (sortedArr1[i] == sortedArr2[j]) {
            ++i;
            ++j;
        } else {
            ++i;
        }
    }

    return (j == sortedArr2.size());  // All elements of arr2 were found in arr1
}

int main() {
    // Example arrays
    std::vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    std::vector<int> arr2 = {3, 5, 1};

    if (isSubset(arr1, arr2)) {
        std::cout << "arr2 is a subset of arr1." << std::endl;
    } else {
        std::cout << "arr2 is not a subset of arr1." << std::endl;
    }

    return 0;
}
