/*#include <iostream>
using namespace std;
int main() {

	char word[1000];
	int N;
	cin >> N;

	for (N; N > 0; N--) {
		cin.ignore();
		cin.get(word, 1000);
		for (int i = 0; word[i]; i++) {
			if ('A' <= word[i] && word[i] <= 'Z')
				word[i] -= ('A' - 'a');

			if ('a' <= word[i] && word[i] <= 'z')
				if (i == 0 || word[i - 1] == ' ' )
					word[i] += ('A' - 'a');
		}
		cout << word << endl;
	}

	system("pause>0");
	return 0;
}*/