
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int abc(double a, double b, double c, double& x1, double& x2) {
	if (a == 0) {
		if (b == 0 && c == 0) {
			return -1;
		}
		else if (b == 0) {
			return 0;
		}
		else {
			x1 = -c / b;
			return 1;
		}
	}
	auto d = [a, b, c]() { return b * b - 4 * a * c;};
	if (d() > 0) {
		x1 = (-b + sqrt(d())) / (2 * a);
		x2 = (-b - sqrt(d())) / (2 * a);
		return 2;
	}
	else if (d() == 0) {
		x1 = -b / (2 * a);
		return 1;
	}
	else if (d() < 0){
		return 0;
	}
}

int main() {
	system("chcp 65001 > nul1");
	double x1 = 0.0, x2 = 0.0, a, b, c;
	cin >> a >> b >> c;
	switch (abc(a, b, c, x1, x2)) {
	case -1:
		cout << "безмежна кількість кореннів";
		break;
	case 0:
		cout << "розв'язків немає";
		break;
	case 1:
		cout << "x1=" << x1;
		break;
	case 2:
		cout << "x1=" << x1 << " x2=" << x2;
		break;
	}
}