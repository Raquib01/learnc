#include<stdio.h>
enum color{
    violet,
    indigo,
    blue,
    green,
    yellow,
    orange,
    red
};
int main(){
    enum color c1 = yellow;
    printf("The color yellow is at %d\n",c1+1);
    return 0;
}