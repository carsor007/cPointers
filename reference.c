#include <stdio.h>

typedef struct person
{
   int age;
   float weight;
};

int main()
{
     struct person *personPtr, person1;
     personPtr = &person1;    // Referencing pointer to memory address of person1

     printf("Enter Age: ");
     scanf("%d", &personPtr->age);

     printf("Enter weight: ");
     scanf("%f", &personPtr->weight);

     printf("Displaying: ");
     printf("%d\n%f\n", personPtr->age, personPtr->weight);

     return 0;

}
