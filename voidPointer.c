#include<stdio.h>
int main(){
    int a = 5;
    float b = 8.67;
    void* ptr;
    //here we created a void pointer
    ptr = &a; //stores a interger data
    printf("Value of a is %d\n",*((int*)ptr));  //typecasted ptr to interger
    ptr = &b; //stores a float data
    printf("Value of b is %.2f\n",*(float*)ptr); //typecasted ptr to float
    
    return 0;
}