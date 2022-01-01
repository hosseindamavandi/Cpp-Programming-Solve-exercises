/*#include <iostream>
using namespace std;
int main() {
	
	int N, k;
	cin >> N;
	int j = 1;
	for (int i = 0; i < N + 1; i++) {

		for (k = 0; k < ((2 * N + 1) - j) / 2; k++)
			cout << " ";
		for (k = 0; k < j; k++)
			cout << "*";
		for (k = 0; k < ((2 * N + 1) - j) / 2; k++)
			cout << " ";
		cout << endl;
		j += 2;
	}

	j -= 4;
	for (int i = 0; i < N; i++) {

		for (k = 0; k < ((2 * N + 1) - j) / 2; k++)
			cout << " ";
		for (k = 0; k < j; k++)
			cout << "*";
		for (k = 0; k < ((2 * N + 1) - j) / 2; k++)
			cout << " ";
		cout << endl;
		j -= 2;
	}

	system("pause>0");
	return 0;
}*/