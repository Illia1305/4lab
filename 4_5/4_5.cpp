#include <iostream>
#include <cstdlib>
using namespace std;

void r(double& a, double& b, double& h, double& n) {
	cout << "Введiть a, b, h, n" << endl;
	cin >> a >> b >> h >> n;
}

int err(double x, double n) {
	if ((x <= 0 && n < 1) || (x > 0 && n < 2)) {
		cout << "Error";
		return 1;
	}
	return 0;
}

double y(double& x, double& n) {
	int i = 0;
	double p = 1;
	if (x <= 0) {
		while (i < n) {
			p *= i * i - x;
			i++;
		}
		p += x;
	}
	else {
		i++;
		p = 0;
		while (i < n) {
			int j = 0;
			while (j < n) {
				p += x / (i + j);
				j++;
			}
			i++;
		}
	}
	return p;
}

int main()
{
	system("chcp 65001 > nul");
	double a = 0, b = 0, h = 0, n = 0;
	r(a,b,h,n);
	if (a >= b || h <= 0) {
		cout << "Неправильнi данi\n";
	}
	else {
		for (double x = a; x <= b; x += h) {
			if (err(x, n) == 1) {
				return 0;
			}
			cout << "x=" << x << " y=" << y(x, n) << endl;
			
		}
	}
	return 0;
}