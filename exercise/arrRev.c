#include<stdio.h>
void printArr(int arr[], int arrLen){
        for(int i=0;i<arrLen;i++){
            printf("%d,",arr[i]);
        }
            printf("\b \n");
}

void arrRev(int arr[],int arrLen){
    int temp;
    for(int i=0; i<(arrLen/2);i++){
        temp = arr[i];
        arr[i]=arr[arrLen-i-1];
        arr[arrLen-i-1]=temp;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int arrLen = sizeof(arr)/sizeof(int);
    printf("Original Array\n");
    printArr(arr,arrLen);
    arrRev(arr,arrLen);
    printf("Reversed Array\n");
    printArr(arr,arrLen);
    return 0;
}