#include<stdio.h>
int main(){
    int sum = 0;
    int n;
    //way 1:
    //Time complexity: O(n)
    printf("The sum of first n digit, n=");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        sum+=i;
    }
    printf("The sum of first %d digit is %d\n",n,sum);
    

    //way2:
    //Time complexity: O(1)
    printf("The sum of first %d digit is %d\n",n,(n*n+n)/2);
    return 0;
}