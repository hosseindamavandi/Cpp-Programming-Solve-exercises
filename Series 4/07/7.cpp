/*#include <iostream>
using namespace std;
int main() {

	int Num, temp, sum;
	int count=0;
	cin >> Num;
	
		temp = Num;
		
			for(sum=0;temp>0;temp/=10)
				sum += (temp % 10);
		
			for (Num++; count <= sum; Num++) {
				for (int i = 2; i <= Num/2; i++) {
					if (Num % i==0)
						break;
					if (i == Num/2) 
						count++;
				}

				if (count == sum) {
					cout << Num;
					break;
				}
			}
		
	system("pause>0");
	return 0;
}*/