#include <vector>
#include <iostream>

void mod(std::vector<int> v, std::vector<int>& rv) {
    v[1] = 10;
    rv[1] = 5;
}

int main() {
    std::vector<int> vec = {1,2,3};
    std::vector<int> vec2 = {8,9,11};
    mod(vec, vec2);

    std::cout << vec[1] << "\n";
    std::cout << vec2[1] << "\n";
}
