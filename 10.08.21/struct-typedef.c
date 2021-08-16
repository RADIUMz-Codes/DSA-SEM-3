/*
    2. Define a structure “complex” (typedef) to read two complex numbers and perform addition, 
    subtraction of these two complex numbers and display the result.
*/

#include <stdio.h>
typedef struct complex
{
   float real;
   float imag;
} complex;
complex add(complex num1, complex num2);
complex sub(complex num1, complex num2);
int main()
{
   complex num1, num2, s,d;
   printf("Enter real and imaginary parts of first complex no:\n");
   scanf("%f %f", &num1.real, &num1.imag);
   printf("Enter real and imaginary parts of second complex no:\n");
   scanf("%f %f", &num2.real, &num2.imag);
   s= add(num1, num2);
   d= sub(num1,num2);
   printf("Sum = %f + %fi\n", s.real, s.imag);
   printf("Difference = %f + %fi", d.real, d.imag);
   return 0;
}
complex add(complex num1, complex num2)
{
   complex temp;
   temp.real = num1.real + num2.real;
   temp.imag = num1.imag + num2.imag;
   return (temp);
}
complex sub(complex num1, complex num2)
{
   complex temp;
   temp.real = num1.real - num2.real;
   temp.imag = num1.imag - num2.imag;
   return (temp);
}