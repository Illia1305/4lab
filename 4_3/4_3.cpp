
#include <iostream>
using namespace std;

int mul(int x = 1, int y = 1, int z = 1) {
    return x * y * z;
}

int mul2() {
    return 1;
}

int mul2(int x) {
    return x;
}

int mul2(int x, int y) {
    return x * y;
}

int mul2(int x, int y, int z) {
    return x * y * z;
}


int main() {
    cout << mul() << " " << mul2() << endl;
    cout << mul(5) << " " << mul2(5) << endl;
    cout << mul(5,2) << " " << mul2(5, 2) << endl;
    cout << mul(5, 2, 6) << " " << mul2(5, 2, 6) << endl;
    return 0;
}
