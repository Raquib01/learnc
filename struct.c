#include<stdio.h>
struct student{
    int id;
    char* name;
    float marks;
};
int main(){
  struct student s1,s2;
  s1.id = 01;
  s1.name = "Raquib";
  s1.marks = 70.3;

  s2.id = 02;
  s2.name = "Rayyan";  
  s2.marks = 92.3;

  printf("Student 1:\n");
  printf("  Id: %d\n",s1.id);
  printf("  name: %s\n",s1.name);
  printf("  marks: %.2f\n",s1.marks);

  printf("Student 2:\n");
  printf("  Id: %d\n",s2.id);
  printf("  name: %s\n",s2.name);
  printf("  marks: %.2f\n",s2.marks);
    return 0;
}