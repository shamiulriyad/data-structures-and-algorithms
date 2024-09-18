#include <stdio.h>
void printFun(int test)
{
    if (test < 1)
        return;
    else {
        printf("%d\n",test);
        // Calling the same function with different argument
        printFun(test - 1); 
        printf("%d\n",test);
        return;
    }
}
int main()
{
    int test = 3;
    printFun(test);
}



#include <stdio.h>
// Recursive function for factorial
int f(int n)
{
    // Base case
    if (n == 0 || n == 1)
        return 1;
    // Recursive case
    else
        return n * f(n - 1); //Recursive call
}

int main()
{
    int n = 5;
    printf("factorial of %d is: %d", n,f(n));
    return 0;
}



#include <stdio.h>
// Function for fibonacci
int fib(int n)   //Recursion Function
{
    if (n == 0)    //Base Case
        return 0;
    if (n == 1)  //Base Case
        return 1;
    else     // Recursive Case
        return (fib(n - 1) + fib(n - 2)); //Recursive Call
}
int main()
{
    int n = 5;
    printf("Fibonacci series of %d numbers is: ",n);
    // for loop to print the fibonacci series.
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}