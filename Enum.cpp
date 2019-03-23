#include <iostream>

// dont do this in production code -> b/c brings in too many identifiers
using namespace std;

enum class Light { red, yellow, green };
enum Test { baz, bar, foo };
enum Test2 { baz2 = 5, bar2, foo2 };

int main() {
    Light light = Light::red;
    if (light == Light::red) {
        cout << "true" << "\n";
    }
    
    int baz[10];
    int arr[foo];
    double hello[4];
    cout << sizeof(arr)/sizeof(*arr) << "\n";
    cout << sizeof(*arr) << "\n";
    cout << sizeof(*hello) << "\n";

    Test yeah = Test::bar;
    if (yeah == Test::bar) {
        cout << "it's true!\n";
    }
    int hey[Test2::foo2];
    cout << sizeof(hey)/sizeof(*hey) << "\n";
}
