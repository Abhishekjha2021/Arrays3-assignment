#include <iostream>
#include <vector>

void multiply(std::vector<int>& result, int num) {
    int carry = 0;

    for (int& digit : result) {
        int product = digit * num + carry;
        digit = product % 10;
        carry = product / 10;
    }

    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    std::vector<int> result;
    result.push_back(1);

    for (int i = 2; i <= n; ++i) {
        multiply(result, i);
    }

    std::cout << "Factorial of " << n << " is: ";
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;
}

int main() {
    int num;
    
    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> num;

    if (num < 0) {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 1;  // Exit with an error code
    }

    factorial(num);

    return 0;
}
