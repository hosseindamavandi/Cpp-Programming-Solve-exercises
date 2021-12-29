#include <iostream>
using namespace std;

int main() {
	int i=0 , j=0 ;
	char a , b , c , d , e;
	
	cin >> a >> b >> c >> d >> e;
	
	
	if ( a == 'R') 
	
		 i = ++i ;
		
	else if ( a == 'Y')	
		
		j = ++j ;
			
	
	
	if ( b == 'R') 
	
		 i = ++i ;
		
	else if ( b == 'Y')	
		
		j = ++j ;
			
	
	
	if ( c == 'R') 
	
		 i = ++i ;
		
	else if ( c == 'Y')	
		
		j = ++j ;
			
			
	
	if ( d == 'R') 
	
		 i = ++i ;
		
	else if ( d == 'Y')	
		
		j = ++j ;
		
			
	
	if ( e == 'R') 
	
		 i = ++i ;
		
	else if ( e == 'Y')	
		
		j = ++j ;
		
		
	
	
	if ( i >= 3 ) 
	
		 cout << "nakhor lite" ;
		
	else if ( i >= 2 && j >= 2 )	
		
		cout << "nakhor lite";	
	
	else if ( j + i == 5 )	
	
		cout << "nakhor lite";
		
	else cout << "rahat baash";	
	
		
	return 0;
}
