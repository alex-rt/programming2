//C program to read and print the student details 
//using structure and Dynamic Memory Allocation
 
#include <stdio.h>
#include <stdlib.h>
 
//structure declaration
struct student
{
    char name[30];
    char eng[30];
    int list;
    float grade;
    int enroll;
};
 
int main()
{
  printf("Welcome to UPYS student information platform\n");
    struct student *pstd;
     
    //Allocate memory dynamically
    pstd=(struct student*)malloc(1*sizeof(struct student));
     
    if(pstd==NULL)
    {
        printf("Memory cannot be allocated\n");
        return 0;
    }
     
    //read and print details
    printf("Enter Students name: ");
    gets(pstd->name);
    printf("Enter engineering degree: ");
    gets(pstd->eng);
    printf("Enter list number: ");
    scanf("%d",&pstd->list);
    printf("Enter enrollment number: ");
    scanf("%d",&pstd->enroll);
    printf("Enter grade: ");
    scanf("%f",&pstd->grade);

     
    printf("\nStudents details are:\n");
    printf("Name: %s, Engineering degree: %s, List Number: %d, Enrollment Number: %d, Grade: %.2f\n",pstd->name,pstd->eng,pstd->list,pstd->enroll,pstd->grade);
      
    return 0;
}
//source:includehelp.com
