// area calculation
// author - nischit

#include <stdio.h>

// functions to perform actions
void square();
void circle();
void rectangle();
void triangle();


int main()
{

    // variable to store datatype in integer value
    int option;

    // display a message to the user
    printf("--- Area Calculation ---\n");

    // display a menu list to the user
    printf("1. Area of Square\n");
    printf("2. Area of Circle\n");
    printf("3. Area of Rectangle\n");
    printf("4. Area of Triangle\n");
    printf("5. Exit\n");

    // get a integer from the user as an option from the menu list in integer value
    printf("Enter your Option (1 - 4): ");

    // store the option value in the 'option' variable in integer value
    scanf("%d", &option);

    if (option == 1)
    {
        // if the user entered '1' then call function 'square()' and perform the tasks in the 'square()' function
        square();
    }
    else if (option == 2)
    {
        // else if the user entered '2' then call function 'circle()' and perform the tasks in the 'circle()' function
        circle();
    }
    else if (option == 3)
    {
        // else if the user entered '3' then call function 'rectangle()' and perform the tasks in the 'rectangle()' function
        rectangle();
    }
    else if (option == 4)
    {
        // else if the user entered '4' then call function 'triangle()' and perform the tasks in the 'triangle()' function
        triangle();
    }
    else if (option == 5)
    {
        // else if the user entered '4' then display the a exit message to the user
        printf("Thank you!");
    }
    
    else
    {
        // else the user entered apart from '1', '2', '3', '4' or '5' then display an error message
        printf("Invalid Option!");
    }
    return 0;
}

void square() {

    // variables to store datatypes in float values
    float side, area;

    // display a message to the user
    printf("Area of Square\n");

    // get the value of side from the user
    printf("Enter Side: ");

    // store the side value in the 'side' variable
    scanf("%f", &side);

    // define the 'area' variable as the formula for the area of square
    area = side * side;

    // display the value of 'area' variable to the user
    printf("Area: %f\n", area);
}

void circle() {

    // variables to store datatypes in float values
    float radius, area;

    // display a message to the user
    printf("Area of Circle\n");

    // get the value of radius from the user
    printf("Enter Radius: ");

    // store the radius value in the 'radius' variable
    scanf("%f", &radius);

    // define the 'area' variable as the formula for the area of circle
    area = 3.14159265359 * radius * radius;

    // display the value of 'area' variable to the user
    printf("Area: %f\n", area);
}

void rectangle() {

    // variables to store datatypes in float values
    float length, width, area;

    // display a message to the user
    printf("Area of Rectangle\n");

    // get the value of length from the user
    printf("Enter Length: ");

    // store the length value in the 'length' variable
    scanf("%f", &length);

    // get the value of width from the user
    printf("Enter Breadth: ");

    // store the width value in the 'width' variable
    scanf("%f", &width);

    // define the 'area' variable as the formula for the area of rectangle
    area = length * width;

    // display the value of 'area' variable to the user
    printf("Area: %f\n", area);
}

void triangle() {

    // variables to store datatypes in float values
    float base, height, area;

    // display a message to the user
    printf("Area of Triangle\n");

    // get the value of base from the user
    printf("Enter Base: ");

    // store the base value in the 'base' variable
    scanf("%f", &base);

    // get the value of height from the user
    printf("Enter Height: ");

    // store the height value in the 'height' varible
    scanf("%f", &height);

    // define the 'area' variable as the formula of the area of triangle
    area = 1.0/2.0 * base * height;

    // display the value of 'area' variable to the user
    printf("Area: %f\n", area);
}
