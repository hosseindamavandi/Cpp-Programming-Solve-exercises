#include <iostream>
using namespace std;
int main() {

	string st[100];
	int N, i;
	cin >> N;
	
		for (i = 0; i < N; i++)
			cin >> st[i];

		for (i -= 1; i >= 0; i--)
			cout << st[i] << " ";

	system("pause>0");
	return 0;
}