#include <iostream>
#include <gmpxx.h>
#include <gmp.h>

using namespace std;
mpz_t z;



int main() {
    mpz_t x,y;
    mpz_init(x);
    mpz_init(y);
    mpz_init(z);

    gmp_scanf("%Zd%Zd",x,y);
    if (mpz_cmp(x,y) == -1){
         mpz_swap(x,y);
    }
    while(mpz_sgn(y)){
        mpz_mod(z,x,y);
        mpz_set(x,y);
        mpz_set(y,z);
    }
    gmp_printf("%Zd",x);
    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(z);
    return 0;
}