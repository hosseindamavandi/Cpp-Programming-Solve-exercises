#include <iostream>
using namespace std;
int main() {

	int N, sum = 0;
	cin >> N;

	for (int i = 1; i < N; i++) 
		if (N % i==0) 
			sum +=i;

	if (sum == N) 
		cout << "YES";
	else 
		cout << "NO";

	system("pause>0");
	return 0;
}