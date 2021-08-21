#include<stdio.h>
int isPrime(int n){
    for(int i = 2; i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    if(n==1){
        return 0;
    }
    return 1;
}
int main(){
    int start,end;
    printf("Print Prime Number from: ");
    scanf("%d",&start);

    printf("To: ");
    scanf("%d",&end);

    for(int i = start; i<=end; i++){
        if(isPrime(i)){
            printf("%d, ",i);
        }
    }
    printf("\n");
    return 0;
}