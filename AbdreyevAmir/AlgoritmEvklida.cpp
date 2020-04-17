#include <iostream>
#include <gmpxx.h>

using namespace std;
int gcd(long x, long y) {
  long z;
  while (y != 0) {
    z = y;
    y = x % y;
    x = z;
  }
cout<<x<<endl;
return 0;
}

int main() 
{
	long x = 54123521;
	long y = 89432137;
	gcd(x,y);
	
}
