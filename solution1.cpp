#include <iostream>
#include <vector>

int countTripletsWithSum(const std::vector<int>& arr, int x) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i] + arr[j] + arr[k] == x) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    // Example array
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 15;

    int result = countTripletsWithSum(arr, x);

    std::cout << "Number of triplets with sum " << x << ": " << result << std::endl;

    return 0;
}
