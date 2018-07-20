// example of an address structure accessing members with pointer using dynamic memory allocation
// syntax is ptr = (cast-type*) malloc(byte-size)

#include <stdio.h>
#include <stdlib.h>

struct address {
      int stNumber;
      char stName [30];
      int zipCode;

 };


int main ()
{
         struct address *ptr;
         int i, num;
        
         printf("Enter the number of addresses:" );
         scanf("%d", &num);
         
         ptr = (struct address*) malloc(num * sizeof(struct address));

         for (i = 0; i < num; i++)
         {
            printf ("Please enter the street number, name and zipcode\n:");
            scanf ("%d%s%d", &(ptr+i)->stNumber, (ptr+i)->stName, &(ptr+i)->zipCode);
         }
        
         printf("Displaying Information\n:");
         for (i = 0; i < num; i++)
             printf("%d\t%s\t%d\t\n", (ptr+i)->stNumber, (ptr+i)->stName, (ptr+i)->zipCode);
   
         return 0;

}
