#include<stdio.h>
#include<conio.h>
void main()
{
  char A[10][5],t[5];
  int i,j,p[10],wtim[10],totwtim=0,prr[10],t1,n;
  float avrwt;
 printf("enter no of processes:");
 scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("enter process%d name:",i+1);
 scanf("%s",&A[i]);
  printf("enter process time:");
 scanf("%d",&p[i]);
  printf("enter priority:");
  scanf("%d",&prr[i]);
  }
