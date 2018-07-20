// Accessing structure member through pointer using dynamic memory allocation
// syntax is ptr = (cast-type*) malloc(byte-size)

#include <stdio.h>
#include <stdlib.h>

struct vehicle {
     int year;
     char make [30];
     char model[30];
};

int main ()

  {
    struct vehicle *ptr;
    int i, num;

    printf("Enter number of vehicles: ");
    scanf("%d", &num);

    ptr = (struct vehicle*) malloc( num * sizeof( struct vehicle));
    // allocates the memory for n structures with pointer vehiclePtr pointing to base address */

    for (i = 0; i < num; i++)
    {
      printf (" Please enter the year, make and model of the vehicle respectively\n: ");
      scanf  ("%d%s%s", &(ptr+i)->year, (ptr+i)->make, (ptr+i)->model);
    }
     
    printf ("Displaying Information:\n");
    for (i = 0; i < num; i++)
        printf("%d\t%s\t%s\t\n", (ptr+i)->year, (ptr+i)->make, (ptr+i)->model);
  
        return 0;

 }
 

 
    
     
