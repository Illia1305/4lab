
#include <iostream>

using namespace std;
int min(int i);
int max(int i);

int main() {
	int i, k;
	do {
		cin >> i;
		cout << "min=" << min(i) << " max = " << max(i) << endl;
	} while (i);
	return 0;
}

int min(int i) {
	static int m = i;
	if (m > i) {
		m = i;
	}
	return m;
}

int max(int i) {
	static int m = i;
	if (m < i) {
		m = i;
	}
	return m;
}