#include<stdio.h>
int func1(){
    //when func1 is called first time, it will execute thia line(line4)
    //but when it executes again, it will skip the declaration part (line4)
    static int a;
    a++;
    return a;
}
int main(){
    int value;
    value = func1();
    printf("The value after running func1 once is %d\n",value);
    value = func1();
    printf("The value after running func1 twice is %d\n",value);
    return 0;
}