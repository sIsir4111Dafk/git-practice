#include<stdio.h>
#include<conio.h>
void main(){
clrscr();     //wap to find largest value from array
 int size_arr,arr[5];
 printf("Enter thr size of an array: ");
 scanf("%d",&size_arr);
 printf("Enter %d elements: ",size_arr);
 for(int i=0;i<size_arr;i++){
  scanf("%d",&arr[i]);
 }
 int Largest_value=arr[0];
 for (i=0;i<size_arr;i++){
  if( arr[i]>Largest_value){
 Largest_value=arr[i];
  }
 }
 printf("Largest value is %d",Largest_value);
getch();
}
