#include <stdio.h>
#include "complex.h"
/* This program is the definition of various functions that can be performed on compled numbers */

// multiply two complex numbers
complex mult2(complex a,  complex b) {
	complex temp;
	temp.x = a.x*b.x - a.y*b.y;
	temp.y = a.x*b.y+a.y*b.x;
	return(temp);
}

// square two complex numbers
complex square(complex a) {
	complex temp;
	temp.x = a.x*a.x - a.y*a.y;
	temp.y = 2*a.x*a.y;
	return(temp);
}

// add two complex numbers
complex add2(complex a, complex b) {
	complex temp;
	temp.x = a.x + b.x;
	temp.y = a.y+b.y;
	return(temp);
}

// Run a juliamap function on two complex numbers
complex juliamap(complex a, complex b) {
	complex temp;
	temp = add2(square(a),b);
	return(temp);
}

//print a complex number
void complex_print(complex z) {
	printf ("%Lf+i%Lf ",z.x,z.y);
}

/* test function to make sure the code works
void test() {
complex a, b;
a.x = 2.0;
a.y = 3.0;
b.x = 4;
b.y = 5;
printf("Enter a and b where a + ib is the first complex number.\n");
printf("a = ");
scanf("%Lf", &a.x);
printf("b = ");
scanf("%Lf", &a.y);
printf("Enter c and d where c + id is the second complex number.\n");
printf("c = ");
scanf("%Lf", &b.x);
printf("d = ");
scanf("%Lf", &b.y);
printf (" The complex numbers entered are :%Lf %+Lf and %Lf %+Lfi\n", a.x,a.y,b.x,b.y);
printf ("The multiplication of complex numbers are :%.1f %+.1fi\n", mult2(a,b).x, mult2(a,b).y);
printf ("The square of complex number is :%Lf %+Lfi\n", square(a).x, square(a).y);
printf ("The addition of complex numbers are :%Lf %+Lfi\n", add2(a,b).x, add2(a,b).y);
printf ("The juliamap of complex numbers are :%Lf %+Lfi\n", juliamap(a,b).x, juliamap(a,b).y);
complex_print(a);
complex_print(b);
}
*/
