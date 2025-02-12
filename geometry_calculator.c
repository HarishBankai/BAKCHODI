#include <stdio.h>
#include <math.h>

int main()
{
    int l, b, r;
    float sumr, perirect, arearect, circum, areacir;

    // Input values
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth: ");
    scanf("%d", &b);
    printf("Enter the radius: ");
    scanf("%d", &r);

    // Calculate sum of length and breadth
    sumr = l + b;
    printf("Sum of length and breadth: %.2f\n", sumr);

    // Perimeter of rectangle
    perirect = 2 * sumr;
    printf("Perimeter of rectangle: %.2f\n", perirect);

    // Area of rectangle
    arearect = l * b;
    printf("Area of rectangle: %.2f\n", arearect);

    // Circumference of circle
    circum = 2 * M_PI * r;
    printf("Circumference of circle: %.2f\n", circum);

    // Area of circle
    areacir = M_PI * r * r;
    printf("Area of circle: %.2f\n", areacir);

    return 0;
}
