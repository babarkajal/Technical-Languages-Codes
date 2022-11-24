int printf(const char*,...);
int scanf(const char*,...);

void main(){


	printf('\n');//warning


	
}

/*-------------------------------------------------------------------------------------------------------------------------------

warning: conversion of pointer to the integer without cast
	 expected const char* but argument is of 'int' type.

printf() function must have at least one argument of const char* (string).

But here  we are passing '\n' i.e. character internally it is converted into ascii value which is not a string.

whenever we are passing integer value to printf(),it gives the warning that it can not convert int to pointer, bcoz 'int' is
primitive and 'pointer' is the derived datatype.

At the run time 'int printf(const char*,...)'  want the string but it found int value therefore segmentation fault occur.

---------------------------------------------------------------------------------------------------------------------------------*/
  
