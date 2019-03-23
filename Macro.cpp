#include <iostream>

using namespace std;

#define ADD(x, y) \
    (x + y)

#define NUM 100

#define TEST \
    int foo = 10; \
    cout << foo << "\n"; \

int main() {
    cout << ADD(5,10) << "\n";
    cout << NUM << "\n";
    TEST
}
