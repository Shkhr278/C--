#include <iostream>

int add(int a, int b) {  // Takes two integers and returns their sum
    return a + b;
}

int main() {
    int result = add(5, 3);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
