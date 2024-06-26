#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/** calculate roots of a quadratic equation **/

void main()
{
    float a,b,c;    /** a*x^2 + b*x + c **/
    float discrim,real;

    printf("Enter value of a: ");   /** prompt user **/
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    printf("Enter value of c: ");
    scanf("%f",&c);
    printf("\n\n");                 /** space,2 lines **/
    discrim = powf(b,2)-(4*a*c);    /** assign variable for discriminant **/
    real=0.5*b/a;                   /** real part **/
    printf("discriminant = %f\n\n",discrim);    /** print discriminant**/
    if(discrim>0)                               /** check if discriminant > 0 **/
    {
        float r1 = -real+0.5*sqrt(discrim)/a;
        float r2 = -real-0.5*sqrt(discrim)/a;
        printf("Real roots:\n\n");
        printf("root 1 = %f and root 2 = %f\n\n",r1,r2);  /** print real roots**/
    }
    else if(discrim==0)             /** check if discriminant = 0 **/
    {
        printf("Equal roots:\n\n");
        printf("root = %f",real);
    }
    else if(discrim<0)      /** check if discriminant < 0 **/
    {
         float imag = 0.5*sqrt(-discrim)/a;                /** imaginary part **/
         printf("Complex roots:\n\n");                                              /** root 1: -b/2*a + [(b^2-4*a*c)^(0.5)]/2*a **/
         printf("z1 = %2.3f+%2.3fj \n\nz2 = %2.3f%2.3fj",-real,imag,-real,-imag);   /** root 2: -b/2*a - [(b^2-4*a*c)^(0.5)]/2*a **/
    }
}
