#include<stdio.h>
#include<conio.h>
#include<graphics.h>
struct student{
  int roll_no;
  char name[50];
  char address[50];
  char gender[50];
  int age;
};
void main(){

    struct student std[10];
    FILE *fp;
    clrscr();
    int i;
    int max_index;
    int min_index;
    fp=fopen("zzz.txt","r");
    if(fp==NULL){
      printf("Unable to find file");
    }
    else{
      printf("Details are:\n");
      for (i=0;i<10;i++){
       fscanf(fp,"%d %s %s %s %d",&std[i].roll_no,&std[i].name,&std[i].address,&std[i].gender,&std[i].age);
      /* printf("%d\t %s\t %s\t\t %s\t %d\t\n",std[i].roll_no,std[i].name,std[i].address,std[i].gender,std[i].age); */
      }
    }
    int max_age=std[0].age;
    int min_age=std[0].age;
    for(i=0;i<10;i++){
     if(max_age<std[i].age){
       max_age=std[i].age;
       max_index=i;
     }
     if(min_age>std[i].age){
       min_age=std[i].age;
       min_index=i;
     }
    }
    printf("Maximum age=%d\n",max_age);
    printf("Minimum age=%d\n",min_age);
    //printing the data of max
    printf("Max age student details:\n");
    for(i=0;i<10;i++){
     if (max_age==std[i].age){
      printf("Roll no=%d Name=%s Address=%s Gender=%s Age=%d\n",std[i].roll_no,std[i].name,std[i].address,std[i].gender,std[i].age);
     }
    }
    //printing min age student details
    printf("Min age students;\n");
    for(i=0;i<10;i++){
     if (min_age==std[i].age){
      printf("Roll no=%d Name=%s Address=%s Gender=%s Age=%d",std[i].roll_no,std[i].name,std[i].address,std[i].gender,std[i].age);
     }
    }
 //Graphics mode
    char text[100];
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
    rectangle(50,50,300,150);
 //display the text inside rectangle
    sprintf(text,"Highest Age student Detail");   //sprintf(destination,"source");
    outtextxy(60,60,text);
    //for printing roll_no
    sprintf(text,"%d",std[max_index].roll_no); //outtextxy(x,y,destination_variable)
    outtextxy(60,80,text);
    fclose(fp);
    //for name
    sprintf(text,"Name=%s",std[max_index].name);
    outtextxy(60,90,text);
 getch();
}



