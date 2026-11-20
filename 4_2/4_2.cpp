#include <iostream>
using namespace std;

int y(int x, int n) {
    if ( n <= 0) {
        return 1;
    }
    else {
        return (x + n) * y(x, n - 1);    
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << y(x, n);
    return 0;
}
