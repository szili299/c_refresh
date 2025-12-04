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

//41: Searching elements in an array (Done)
/*
#include <stdio.h>

int search(int arr[], int arrSize, int scope)
{
    for (int i = 0; i < arrSize; i++)
    {
        if(arr[i] == scope)
        {
            return i;
        }
    }
}

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int scope = 5;
    int arraySize = sizeof(array) / sizeof(array[0]);

    int result = search(array, arraySize, scope);

    printf("Index of searched number: %d", result);

    return 0;
}
*/

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

//46: Sorting array using pointers (Done)
/*
#include <stdio.h>

void sort(int *arrPtr, int arrSize)
{
    int i, j;

    for (i = 0; i < (arrSize - 1); i++)
    {
        for (j = (i + 1); j < arrSize; j++)
        {
            if(*(arrPtr + i) > *(arrPtr + j))
            {
                int temp = *(arrPtr + i);
                *(arrPtr + i) = *(arrPtr + j); 
                *(arrPtr + j) = temp;
            }
        }
    }
}


int main()
{
    int array[] = {67, 47, 29, 88, 12, 44, 21, 15, 6, 12};
    int arraySize = sizeof(array) / sizeof(array[0]);

    sort(array, arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d, ", array[i]);
    }
    

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

// Struct
/*
#include <stdio.h>

struct vector {
    double x;
    double y;
};

struct vector vector_difference (struct vector a, struct vector b) 
{
    struct vector c;
    
    c.x = a.x - b.x;
    c.y = a.y - b.y;

    return c;
}

int main()
{
    struct vector v1, v2, v3;
    v1.x = 2.0;
    v1.y = 3.0;

    v2.x = 1.0;
    v2.y = 1.5;

    v3 = vector_difference(v1, v2);

    printf("x = %f, y = %f", v3.x, v3.y);

    return 0;
}
*/

//Pointer
/*
#include <stdio.h>

void changeValue(int *xP, int *yP)
{
    int temp = *xP;
    *xP = *yP;
    *yP = temp;
}


int main()
{
    int a = 2;
    int *aPointer = &a;
    double b = 0.8;
    double *bPointer = &b;


    printf("\"a\" valtozo cime: %p, erteke: %d\n", aPointer, a);
    printf("\"b\" valtozo cime: %p, erteke: %f\n\n", bPointer, b);

    *aPointer = 3;
    *bPointer = 1.6;

    printf("\"a\" valtozo cime: %p, erteke: %d\n", aPointer, a);
    printf("\"b\" valtozo cime: %p, erteke: %f\n\n\n", bPointer, b);

    int *xP, *yP;
    int x = 1;
    int y = 2;

    xP = &x;
    yP = &y;

    printf("\"x\" valtozo cime: %p, erteke: %d\n", xP, x);
    printf("\"y\" valtozo cime: %p, erteke: %d\n\n", yP, y);

    changeValue(&x, &y);

    printf("\"x\" valtozo cime: %p, erteke: %d\n", xP, x);
    printf("\"y\" valtozo cime: %p, erteke: %d\n\n", yP, y);

    return 0;
}
*/


//Pointer tombbejaras

#include <stdio.h>

int main()
{
    int *p;
    int arr[] = {1, 4, 2, 7, 3};
    int arrSize = (sizeof(arr) / sizeof(arr[0]));

    p = &arr[0];

    *(p + 1) = 9;


    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}


//Malloc, calloc