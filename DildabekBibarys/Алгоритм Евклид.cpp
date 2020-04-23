#include <stdio.h>
#include <gmpxx.h>
using namespace std;
int evklid(long a, long b)  
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
	printf ("Chisla: \n");
	  scanf("%d\n",&a);
	  scanf("%d",&b);
        evklid(a,b);         
}
