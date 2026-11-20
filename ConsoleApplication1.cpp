#include <iostream>
using namespace std;

int main()
{
    int i ;
    cin >> i;
    i = i < 256 && i > 32 ? i : 0;
    char c = i;
    cout << c << ' ' << i;
    return 0;
}
