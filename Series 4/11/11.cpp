#include <iostream>
using namespace std;

int main() {

	int A[100][100], B[100][100], x, y, z;
	int sum;
	cin >> x >> y >> z ;

	for (int i = 0; i < x; i++) 
		for (int j = 0; j < y; j++)
			cin >> A[i][j];

	for (int i = 0; i < y; i++)
		for (int j = 0; j < z; j++)
			cin >> B[i][j];

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < z; j++) {
			sum = 0;
			for (int k = 0; k < y; k++)
				sum += (A[i][k]) * (B[k][j]);
			cout << sum << " ";
		}
		cout << endl;
	}

	system("pause>0");
	return 0;
}