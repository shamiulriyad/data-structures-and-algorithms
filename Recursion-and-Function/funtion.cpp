#include <stdio.h>

void print(){
    printf("This is the user defined function.\n");
}
int sum(int n1, int n2){
    return n1+n2;
}
int main() {
    print();
    printf("This is the main function.\n");
    printf("From the sum function: %d\n",sum(50,40));
    printf("From the sum function with wrong input: %d\n",sum(50.1,40)); // Gives wrong result without function prototype
    return 0;
}



#include <stdio.h>

// Function that takes an array as a parameter
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};

    // Calling the function with different arrays
    printArray(arr1, 5);
    printArray(arr2, 3);

    return 0;
}


#include<stdio.h>
int global_var=10;
int func(){
    int local_var=5;
     printf("Local Variable: %d\n",local_var);
}
int main()
{
    //Global variable can be accessed & updated
    printf("Global Variable: %d\n",global_var);
    global_var++;
    printf("Updated Global Variable: %d\n",global_var);

    //Local Variable cant be accessed outside the function where it is defined
    //printf("Local Variable: %d\n",local_var);

    //Local Variable can only be accessed within the function it is defined.
    func();
}

//Call By value
#include <stdio.h>
void swap(int x, int y);
int main () {
   int a = 100;
   int b = 200;
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );

   swap(a, b);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
   return 0;
}
void swap(int x, int y) {

   int temp;
   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put temp into y */
   return;
}


//Call by reference
#include <stdio.h>
int main () {

   int a = 100;
   int b = 200;
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );
 
   swap(&a, &b);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
   return 0;
}
void swap(int *x, int *y) {

   int temp;
   temp = *x; /* save the value of x */
   *x = *y;    /* put y into x */
   *y = temp; /* put temp into y */
   return;
}