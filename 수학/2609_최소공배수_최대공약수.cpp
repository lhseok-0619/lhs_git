#include <iostream>

using namespace std;

int main() {
	int a, b, tmp;
	int gcd, lcm;

	cin >> a >> b;

	if (a > b) tmp = b;
	else tmp = a;

	for (int i = 2; i <= tmp; i++) {
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	cout << gcd << endl;


	lcm = (a * b) / gcd;

	cout << lcm << endl;






}