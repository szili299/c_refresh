//1: Finding the largest number (Done)
/*
#include <stdio.h>

int main()
{
    int a = 5, b = 4, c = 3;

    if (a > b && a > c)
        printf("The largest number is a!");
    else if (b > a && b > c)
        printf("The largest number is b!");
    else
        printf("The largest number is c!");

    return 0;
}
*/

//7: Leap year (modulo practice) (Done)
/*
#include <stdio.h>

void leapYear_check(int year)
{
    // If a year is multiple of 400, then leap year
    if(year % 400 == 0)
        printf("Year %d is a leap year, because it's a multiple of 400.\n", year);
    // If a year is multiple of 100, then leap year
    else if(year % 100 == 0)
        printf("Year %d is a leap year, because it's a multiple of 100.\n", year);
    // If a year is multiple of 4, then leap year
    else if(year % 4 == 0)
        printf("Year %d is a leap year, because it's a multiple of 4.\n", year);
    else
        printf("Year %d is not a leap year!\n", year);
}

int main()
{
    int year = 0;

    for (year = 1898; year < 1906; year++)
    {
        leapYear_check(year);
    }
    
    printf("\n");

    for (year = 1996; year < 2005; year++)
    {
        leapYear_check(year);
    }

    return 0;
}
*/

//40: Reverse a string using recursion (Done)
/*
#include <stdio.h>
#include <string.h>

// Reverse iteration of a string
void reverse_iteration(char* str)
{
    int i = 0;                  // The first element of the string               
    int j = strlen(str) - 1;    // Needed because of the indexing of the string (First element is 0)

    for (; i < j ; i++)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        j--;
    }
}

// Recursive function to reverse the iterated char
void reverse(char* str)
{
    if (*str)
    {
        reverse(str + 1);
        printf("%c", *str);
    }
}


int main()
{
    char a[] = "Nehogy mar olyan nyerjen aki nem tud fozni!";
    printf("The original string: %s\n", a);

    reverse_iteration(a);
    printf("Reverse the string(iteration): %s\n", a);

    printf("Using recursion for reverse: ");
    reverse(a);

    printf("\nActual string in main function: %s", a);

    return 0;
}
*/

//41: Searching elements in an array

#include <stdio.h>

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7}

    printf("Hello World!");

    return 0;
}


//42: Binary search
/*
#include <stdio.h>

int main()
{
    printf("Hello World!");

    return 0;
}
*/

//43: Bubble, Selection, Insertion Sort
/*
#include <stdio.h>

int main()
{
    printf("Hello World!");

    return 0;
}
*/

//44: Merge Sort
/*
#include <stdio.h>

int main()
{
    printf("Hello World!");

    return 0;
}
*/

//45: Quick Sort
/*
#include <stdio.h>

int main()
{
    printf("Hello World!");

    return 0;
}
*/

//46: Sorting array using pointers
/*
#include <stdio.h>

int main()
{
    printf("Hello World!");

    return 0;
}
*/

//48: Add Two Complex Numbers Using Structures And Functions
/*
#include <stdio.h>

int main()
{
    printf("Hello World!");

    return 0;
}
*/

//50: Reverse a linked list iteratively
/*
#include <stdio.h>

int main()
{
    printf("Hello World!");

    return 0;
}
*/