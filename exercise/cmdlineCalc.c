#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[]){
    int result=0;
    int input1;
    int input2;
    if(strcmp(argv[1],"add")==0){
        input1=atoi(argv[2]);
        input2=atoi(argv[3]);
        printf("The Answer is %d\n",input1+input2);
    }
    else if(strcmp(argv[1],"sub")==0){
        input1=atoi(argv[2]);
        input2=atoi(argv[3]);
        printf("The Answer is %d\n",input1-input2);
    }
    else if(strcmp(argv[1],"mul")==0){
        input1=atoi(argv[2]);
        input2=atoi(argv[3]);
        printf("The Answer is %d\n",input1*input2);
    }
    else if(strcmp(argv[1],"div")==0){
        input1=atoi(argv[2]);
        input2=atoi(argv[3]);
        printf("The Answer is %d\n",input1/input2);
    }
    else if(strcmp(argv[1],"mod")==0){
        input1=atoi(argv[2]);
        input2=atoi(argv[3]);
        printf("The Answer is %d\n",input1%input2);
    }
    else{
        printf("Invalid Arguments\n");
    }
    return 0;
}
