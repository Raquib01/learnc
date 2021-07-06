#include<stdio.h>
#include<string.h>
union student{
    int id;
    char name[10];
};
int main(){
  union student s1,s2;

  //here we used 'id' data for student 1 and 'name' data for student 2
  s1.id = 23;
  strcpy(s2.name,"rayyan");
  printf("%d\n",s1.id);
  printf("%s\n",s2.name);


  //but now if we use both data for student 1
  //it wont work.... if we assign new data, previous data will get corrupt
  s1.id = 23;
  strcpy(s1.name,"raquib");
  printf("%d\n",s1.id);
  printf("%s\n",s2.name);
  
    return 0;
}