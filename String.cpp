#include <iostream>


void mod(char arr[]) {
    arr[0] = 'b';
}

int main() {
    char str[10] = "hello";
    char *point = str;
    std::cout << point << "\n";
    int num = 10;
    int *numP = &num;
    std::cout << numP << "\n";
    std::cout << *numP << "\n";

    std::cout << str << "\n";
    mod(str);
    std::cout << str << "\n";
}
