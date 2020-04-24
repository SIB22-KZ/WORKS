#include <iostream>
#include <gmpxx.h>
#include <gmp.h>

using namespace std;

int main() {
    mpz_class x,y,z;
    cin >> x >> y;
    if(x < y) swap(x,y);
    while(y) z=y,y=x%y,x=z;
    cout << x;
}