#include <iostream>
#include <gmpxx.h>
using namespace std;
int gcd(mpz_class a, mpz_class b) {
	long c;
	while(b!=0) {
		c=b;
		b=a%b;
		a=c; }
	return a; }
int main() {
mpz_class a,b;
cout<<"Vvedite chislo a:";
cin>>a;
cout<<"Vvedite chislo b:";
cin>>b;
cout<<"NOD chisel a,b = "<<gcd(a,b);
}

		
		
