#include <stdio.h>
// function to calculate the area and perimeter of cricle
void circle(float Carea, float Cperimeter, int rad, float PI)
{
    // calculate the area of cricle
    Carea = PI * rad * rad;
    // printing the area of cricle
    printf("\nArea of circle : %f ", Carea);
    // calculate the perimeter of cricle
    Cperimeter = 2 * PI * rad;
    // printing the perimeter of cricle
    printf("\nPerimeter : %f ", Cperimeter);
}
// function to calculate the area and perimeter of square
void square(float side, float Sarea, float Sperimeter)
{
    // calculate the area of square
    Sarea = side * side;
    // printing the area of square
    printf("\nArea of square: %f ", Sarea);
    // calculate the  perimeter of square
    Sperimeter = 4 * side;
    // printing the perimeter of square
    printf("\nPerimeter of square : %f ", Sperimeter);
}
// function to calculate the area and perimeter of rectangle
void rectangle(float Rarea, float Rperimeter, float a, float b, float c, float d)
{
    // calculate the area of rectangle
    Rarea = a * b;
    // printing the area of rectangle
    printf("\nArea of rectangle : %f ", Rarea);
    // calculate the perimeter of rectangle
    Rperimeter = 2 * (a + b);
    // printing the perimeter of rectangle
    printf("\nPerimeter of rectangle : %f ", Rperimeter);
}
// function to calculate the area and perimeter of right angle triangle
void right_angle_triangle(float base, float height, float Tarea, float Tperimeter, float hypotenuse)
{
    // calculate the area  of right angle triangle
    Tarea = height * base * 0.5;
    // printing the area  of right angle triangle
    printf("\nArea of right angle triangle: %f ", Tarea);
    // calculate the perimeter of right angle triangle
    Tperimeter = height + base + hypotenuse;
    // printing the perimeter  of right angle triangle
    printf("\nPerimeter of right angle triangle: %f ", Tperimeter);
}
int main()
{

    int rad = 5;
    float PI = 3.14, Carea, Cperimeter;
    float side = 15, Sperimeter, Sarea;
    float a, b, c, d;
    a = c = 2;                                     // in rectangle sides opposite to each other are equal in length
    b = d = 4;                                     // length of opposite sides
    float base = 10, height = 50, hypotenuse = 60; // base and height of trianglehypotenuse
    float Rperimeter, Rarea, Tarea, Tperimeter;
    // circle function calling
    circle(Carea, Cperimeter, rad, PI);
    // square function calling
    square(side, Sarea, Sperimeter);
    // rectangle function calling
    rectangle(Rarea, Rperimeter, a, b, c, d);
    // righr angle traingle function calling
    right_angle_triangle(base, height, Tarea, Tperimeter, hypotenuse);
}