#include <stdio.h> //TABLES OF A NUMBER
int main()
{

    // Initialize the Variables
    int n, i;

    printf("Enter an integer: ");

    // Take input from the user
    scanf("%d", &n);

    // Using for loop
    for (i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }

    return 0;
}