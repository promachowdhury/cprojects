#include <stdio.h>
#define PI 3.1416
int main()
{
    float r,area;
    printf("Enter the radius : ");
    scanf("%f",&r);
    area =(PI*r*r );
    printf("the area of the circle is %.2f",area);

    return 0;
}
