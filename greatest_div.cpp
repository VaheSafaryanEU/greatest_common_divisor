#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int n1 = 2166;
    int n2 = 6099;
    int r = gcd(n1, n2);
    std::cout << "The GCD of " << n1 << " and " << n2 << " is: " << r << std::endl;

    return 0;
}

