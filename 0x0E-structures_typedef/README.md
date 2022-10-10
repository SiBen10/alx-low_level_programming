# C - Structures, typedef

# A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).

# Tasks

0. Django

dog.h: Header file that defines a new type struct dog with the following elements:
char *name
float age
char *owner
1. A dog is the only thing on earth that loves you more than you love yourself

1-init_dog.c: C function that initializes a variable of type struct dog.
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

2-print_dog.c: C function that prints a struct dog.
If an element of d is NULL, the function prints (nil) instead of the element.
If d is NULL, the function prints nothing.
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

dog.h: Header file that defines a new type dog_t as a new name for the type struct dog.
4. A door is what a dog is perpetually on the wrong side of

4-new_dog.c: C function that creates a dog.
Returns NULL if the function fails.
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

5-free_dog.c: C function that frees dogs
