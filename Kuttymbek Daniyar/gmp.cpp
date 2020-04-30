#include <iostream>
#include <gmpxx.h>
#include <gmp.h>

using namespace std;

int main() {
    mpz_class x,y,z;
    cout << "Please enter x and y numbers to calculater gcd \n";
    cin >> x >> y;
    while(y) z=y,y=x%y,x=z;
    cout << "Your gcd(x,y) is " << x;
}