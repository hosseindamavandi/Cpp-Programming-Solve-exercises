#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ( a < c )
    {
        cout << "Right" << endl;
    }
    if ( c < a )
    {
        cout << "Left" << endl;
    }
    return 0;
}
