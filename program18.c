// Lab Program 18: Write a C program to find the area and perimeter of a circle, rectangle, square and triangle using functions.
#include <stdio.h>
#include <math.h>
void circle(int rad)
{
    double area = M_PI * rad * rad;
    double perimeter = 2 * M_PI * rad;
    printf("Area = %f Perimeter = %f\n", area, perimeter);
}

void rectangle(int l, int b)
{
    printf("Area = %d Perimeter = %d\n", (l*b), (2*(l+b)));
}

void square(int s)
{
    printf("Area = %d Perimeter = %d\n", (s*s), (4*s));
}

void triangle(int s1, int s2, int s3)
{
    double perimeter = s1+s2+s3;
    double s = (s1+s2+s3)/2.0;
    double area1 = s*(s-s1)*(s-s2)*(s-s3);
    double area = sqrt(area1);
    printf("Area = %f Perimeter = %f\n", area, perimeter);
}

int main(int argc, char const *argv[])
{
    int rad, l, b, s, s1, s2, s3;
    printf("Enter Radius: ");
    scanf("%d", &rad);
    circle(rad);
    printf("Enter Length and Breadth: ");
    scanf("%d %d", &l, &b);
    rectangle(l, b);
    printf("Enter Side: ");
    scanf("%d", &s);
    square(s);
    printf("Enter 3 Sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    triangle(s1, s2, s3);
    return 0;
}