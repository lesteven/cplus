#include <iostream>

void add(int x) {
    ++x;
}
void addPoint(int* x) {
    ++*x;
}

void addAddy(int& x) {
    ++x;
}
int main() {
    int x = 10;
    add(10);
    std::cout << x << "\n";

    int y = 10;
    addPoint(&y);
    std::cout << y << "\n";
   
    int z = 10;
    addPoint(&z);
    std::cout << z << "\n";

    int v[] = {0,1,2,3,4,5};

    for (auto& x : v)
        ++x;

    for (auto& x : v) {
        std::cout << x << "\n";
        std::cout << &x << "\n";
    }

}
