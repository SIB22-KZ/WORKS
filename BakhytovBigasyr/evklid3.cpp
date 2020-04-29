#include <stdio.h>
#include <gmpxx.h>
using namespace std;
int evklid(mpz_class a, mpz_class b)  
{                            
  mpz_class z;                 
  for (int i=0;b!=0;)
  {
    z = b;
    b = a % b;
    a = z;
  }     
printf ("%d \n",a);
return 0;
}
    int main() {
	 mpz_class a,b;
	printf ("Vvedite chisla: \n");
	  scanf("%d\n",&a);
	  scanf("%d",&b);
        evklid(a,b);         
}
