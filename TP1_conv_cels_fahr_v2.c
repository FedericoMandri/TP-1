/* Imprime tabla de conversión de °C a °F*/
/* Federico Mandri K2051*/
/*12-04-2015*/

#include <stdio.h>

#define INF 0
#define SUP 300
#define PASO 20

int main(void)
{
      float celsius;
                  
      for (celsius = INF; celsius <= SUP; celsius = celsius + PASO)
          printf("%3.0f\t%6.2f\n",celsius,(9.0/5.0)*celsius + 32.0);
      
}

 
