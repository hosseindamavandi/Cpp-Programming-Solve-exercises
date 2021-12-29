#include <iostream>
using namespace std;
int main()
{
    int a , b ;
    cin>>a >> b ;
    
    int q = (a/100)+((a%100)/10)*10 +((a%100)%10)*100;
    
    int w = (b/100)+((b%100)/10)*10 +((b%100)%10)*100;
    
    if( q < w)
    { cout << a<<'\t'<< "< "<<b ; }
    
    else if( w < q)
    {cout << b <<'\t'<<"< "<< a;}
    
    else 
    { cout << a <<'\t'<<"= "<< b ;}
    return 0;
}
