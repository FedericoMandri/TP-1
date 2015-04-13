/* Imprime tabla de conversión de °C a °F*/
/* Federico Mandri K2051*/
/*12-04-2015*/

#include <stdio.h>

main()
{
      float fahr, celsius;
      int inf = 0;
      int sup = 300;
      int paso = 20;
      char c;
      
      for (celsius = inf; celsius <= sup; celsius = celsius + paso)
          printf("%3.0f\t%6.2f\n",celsius,(9.0/5.0)*celsius + 32.0);
      
      printf("\nPresione Enter para terminar\n");
      scanf("%c",&c);
}

 
