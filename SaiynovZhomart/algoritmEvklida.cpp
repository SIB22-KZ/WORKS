#include <iostream>
#include <gmpxx.h>
using namespace std;

mpz_class gcd(mpz_class a, mpz_class b) {
	mpz_class c;
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
cout<<"NOD dannyh chisel = "<<gcd(a,b);
}

		
		
