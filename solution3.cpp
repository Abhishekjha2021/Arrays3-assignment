#include <iostream>
#include <vector>

int firstNonRepeatingElement(const std::vector<int>& arr) {
    const int n = arr.size();

    // Create an array to store the frequency of each element
    std::vector<int> frequency(100001, 0);

    // Create an array to store the order of appearance of each element
    std::vector<int> order;

    // Count the frequency and order of appearance of each element
    for (int i = 0; i < n; ++i) {
        int num = arr[i];
        frequency[num]++;
        order.push_back(num);
    }

    // Find the first non-repeating element
    for (int i = 0; i < n; ++i) {
        int num = order[i];
        if (frequency[num] == 1) {
            return num;
        }
    }

    // If no non-repeating element is found, return a sentinel value (e.g., -1)
    return -1;
}

int main() {
    // Example array
    std::vector<int> arr = {3, 5, 2, 7, 2, 5, 3, 8, 9};

    int result = firstNonRepeatingElement(arr);

    if (result != -1) {
        std::cout << "The first non-repeating element is: " << result << std::endl;
    } else {
        std::cout << "No non-repeating element found." << std::endl;
    }

    return 0;
}
