#include <stdio.h>

typedef struct vehicle

  {
     int year;
     char make[15];

  };

int main()

 {

    struct vehicle *vehiclePtr, vehicle1;
    vehiclePtr = &vehicle1;

    printf("Enter Vehicle Year: ");
    scanf("%d", &vehiclePtr->year);

    printf("Enter Vehicle Make: ");
    scanf("%s", vehiclePtr->make);

    printf("Displaying: ");
    printf("%d\n%s\n", vehiclePtr->year, vehiclePtr->make);

    return 0;

  }
