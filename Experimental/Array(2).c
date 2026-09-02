#include<stdio.h>
int main()
{
int i, arr2[10];
int arr1[10]={0,1,2,3,4,5,6,7,8,9};
for(i=0;i<10;i++)
{
arr2[i]=arr1[i];
printf("Copy Element[%d]: %d \n",i,arr2[i]);
}
}