//area = 3.1416 * radius * radius

#include<stdio.h>
#include<math.h>
int main()

{
    float radius, area;
    printf("Enadr Radius: ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;
    printf("Area of circle = %.2f\n",area);

    return 0;
    }
