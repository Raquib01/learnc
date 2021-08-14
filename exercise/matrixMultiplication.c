#include<stdio.h>
int main(){
    //taking dimensions for matA n matB
    int m1,n1,m2,n2;
    printf("Enter no. of rows for MatA: ");
    scanf("%d",&m1);
    printf("Enter no. of cols for MatA: ");
    scanf("%d",&n1);
    printf("Enter no. of rows for MatB: ");
    scanf("%d",&m2);
    printf("Enter no. of cols for MatB: ");
    scanf("%d",&n2);

    if(n1!=m2){
        printf("Matrix cant be multiplied...\n");
        return 0;
    }

    //taking inputs
    int matA[m1][n1],matB[m2][n2],matC[m1][n2];
    printf("Enter MatA:\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("Enter Value for Element [%d %d]: ",i+1,j+1);
            scanf("%d",&matA[i][j]);
        }
    }
    printf("Enter MatB:\n");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            printf("Enter Value for Element [%d %d]: ",i+1,j+1);
            scanf("%d",&matB[i][j]);
        }
    }

    //calculating result matric matC;
    int sum=0;
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n1;k++){
                sum+=matA[i][k]*matB[k][j];
            }
            matC[i][j] = sum;
            sum = 0;
        }
    }

    //printing output
    printf("MatA x MatB =\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            printf("%d  ",matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}