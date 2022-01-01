#include <iostream>
using namespace std;
int main() {

	char Num[100];

	cin >> Num;

	for (int i = 0; Num[i]; i++) {
		cout << Num[i] << ": ";
		for (int j = 0; j < (Num[i] - '0'); j++)
			cout << Num[i];
		cout << endl;
	}

	system("pause>0");
	return 0;
}