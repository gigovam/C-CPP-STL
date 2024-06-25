#include <stdio.h>
#include <math.h>

int main()
{
    float r, pi = 3.14, perimeter, area;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);
    perimeter = 2*r*pi;
    area = pow(r, 2)*pi;
    printf("The perimeter of the circle is: %.2f\n", perimeter);
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}
