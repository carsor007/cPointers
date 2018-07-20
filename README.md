1. Referencing pointer to another address to access the memory

 Structures can be created and accessed using pointers. A pointer variable of a structure can be created as below:

struct name {
    member1;
    member2;
    .
    .
};

int main()
{
    struct name *ptr;
}


Here, the pointer variable of type struct name is created.

Accessing structure's member through pointer
A structure's member can be accesssed through pointer in two ways:

Referencing pointer to another address to access memory
Using dynamic memory allocation

  check example reference.c


2. Accessing structure member through pointer using dynamic memory allocation
To access structure member using pointers, memory can be allocated dynamically using malloc() function defined under "stdlib.h" header file.

Syntax to use malloc()
ptr = (cast-type*) malloc(byte-size)


  check example dynamic.c
