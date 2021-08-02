#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}

int operation(int(*op)(int,int),int x,int y){
    return op(x,y);
}
int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);    
    printf("Enter y: ");    
    scanf("%d",&y);
    printf("Sum: %d\n",operation(sum,x,y));    
    printf("Sub: %d\n",operation(sub,x,y));    
    return 0;
}