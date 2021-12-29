#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int p1,s1,p2,s2,sums=0,sump=0 ;
    cin >> p1 >> s1 >> s2 >> p2;

    if (p1 + p2 > s1 + s2)
        cout <<"Persepolis";
    if (s1 + s2 > p1 + p2)
        cout << "Esteghlal";
    if (s1 + s2 == p1 + p2) {
        if (s1 < p2)
            cout << "Persepolis";
        else if (p2 < s1)
            cout << "Esteghlal";
        else
            cout << "Penalty";
    }

    return 0;
}
