#include<stdio.h>
#include<conio.h>

   struct Employee{
    int id;
    char name[50];
    int age;
   };
   void main(){
    clrscr();
    struct Employee emp;
     FILE *fp;
     fp=fopen("employee.txt","wb");
     printf("Enter id,name,and age of a employe\n");
     scanf("%d %s %d",&emp.id,&emp.name,&emp.age);
     fwrite(&emp,sizeof(emp),1,fp);
     printf("Written in binary file succesfully");
     fclose(fp);



  getch();
   }





