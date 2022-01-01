#include <iostream>
using namespace std;
int main() {

	int a, b, l, sum = 0;
	cin >> a >> b >> l;

	for (int i = 0; i < l; i++)
		if (i % 2 == 0)
			sum += a;
		else
			sum += b;

	cout << sum;

	system("pause>0");
	return 0;
}