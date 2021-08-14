#include<stdio.h>
int maxElement(int arr[10]){
    int max=0;
    for(int i = 0; i<10; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[10];
    for(int i = 0; i<10;i++){
        printf("Element at %d position: ",i);
        scanf("%d",&arr[i]);
    }

    printf("The Max Element was %d\n",maxElement(arr));
    return 0;
}