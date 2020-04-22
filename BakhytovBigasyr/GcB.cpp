#include <stdio.h>
#include <gmpxx.h>
using namespace std;
int evklid(long a, long b)   //функция с 2-мя параметрами 
{                            
  long z;                 
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
	 long a,b;
	printf ("Vvedite chisla: \n");
	  scanf("%d\n",&a);
	  scanf("%d",&b);
        evklid(a,b);         //вызов функции evklid
}
