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
 for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
 {
   if(prr[i]>prr[j])
 {
   t1=prr[i];
 prr[i]=prr[j];
  prr[j]=t1;
  t1=p[i];
  p[i]=p[j];
  p[j]=t1;
 strcpy(t,A[i]);
 strcpy(A[i],A[j]);
  strcpy(A[j],t);
  }
  }
  }
