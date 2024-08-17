#include<stdio.h>
#include<stdlib.h>
void main()
{
    int ch;
    do
      {
          printf("choose  1)FCFS  2)SCAN  3)CSCAN  4)EXIT\n");
          scanf("%d",&ch);
          switch(ch)
          {
              case 1:
              {
               int lim,i,head;
 printf("Enter the Head Position: ");
 scanf("%d",&head);
 printf("Enter the no. of Strings: ");
 scanf("%d",&lim);
 int req[lim];
 req[0]=head;
 printf("Enter the Strings: ");
  for(i=1;i<=lim;i++)
  {
   scanf("%d",&req[i]);
  }
 int dist,seek=0;
 for(i=0;i<lim;i++)
  { 
   dist=abs(req[i]-req[i+1]);
   printf("Distance b/w %d and %d is %d\n",req[i],req[i+1],dist);
   seek+=dist;
  }
 printf("Total SeekTime: %d\n",seek);
                break;    
              }
              case 2:
              {
                int lim,i,head,dir,size,j,temp;
 printf("Enter the Head Position: ");
 scanf("%d",&head);
 printf("Enter the no. of Strings: ");
 scanf("%d",&lim);
 int req[lim];
 printf("Enter the size: ");
 scanf("%d",&size);
 printf("Enter the Strings: ");
  for(i=0;i<lim;i++)
  {
   scanf("%d",&req[i]);
  }
 printf("Enter the direction(1:high & 0:low): ");
 scanf("%d",&dir);
 //sorting
 for(i=0;i<lim;i++)
 {
  for(j=i+1;j<lim;j++)
  {
   if(req[i]>req[j])
   {
    temp=req[i];
    req[i]=req[j];
    req[j]=temp;
   }
  }
 }
 int dist=0,index=0,seek=0;;
 while(index<lim && req[index]<=head)
 {
  index++;
 }
 if(dir==1)
 {
 for(i=index;i<lim;i++)
 {
  dist=abs(req[i]-head);
  printf("Distance b/w %d and %d is %d\n",head,req[i],dist);
  head=req[i];
  seek+=dist;
 }
 dist=abs(size-1-req[lim-1]);
 seek+=dist;
 printf("Distance b/w %d and %d is %d\n",req[lim-1],size-1,dist);
 head=size-1;
 
 //check this condition
 
 for(i=index-1;i>=0;i--)
     {
 if(req[0]<head)
 {
    dist=abs(head-req[i]); 
    printf("Distance b/w %d and %d is %d\n",head,req[i],dist);
    seek+=dist;
    head=req[i];
    }
 }
 }
 else
 {
  for(i=index-1;i>=0;i--)
  {
   dist=abs(req[i]-head);
  printf("Distance b/w %d and %d is %d\n",head,req[i],dist);
  head=req[i];
  seek+=dist;
  }
  dist=abs(req[0]-0);
  seek+=dist;
  printf("Distance b/w %d and %d is %d\n",req[0],0,req[0]);
  dist=abs(req[index]);
  printf("Distance b/w %d and %d is %d\n",0,req[index],dist);
  seek+=dist;
  head=req[index];
  for(i=index+1;i<lim;i++)
  {
      
   dist=abs(req[i]-head);
  printf("Distance b/w %d and %d is %d\n",head,req[i],dist);
  head=req[i];
  seek+=dist;
      
  }
 }
 printf("total seek: %d\n",seek);
                break;      
              }
              case 3:
              {
                int lim,i,head,dir,size,j,temp;
 printf("Enter the Head Position: ");
 scanf("%d",&head);
 printf("Enter the no. of Strings: ");
 scanf("%d",&lim);
 int req[lim];
 printf("Enter the size: ");
 scanf("%d",&size);
 printf("Enter the Strings: ");
  for(i=0;i<lim;i++)
  {
   scanf("%d",&req[i]);
  }
 printf("Enter the direction(1:high & 0:low): ");
 scanf("%d",&dir);
 //sorting
 for(i=0;i<lim;i++)
 {
  for(j=i+1;j<lim;j++)
  {
   if(req[i]>req[j])
   {
    temp=req[i];
    req[i]=req[j];
    req[j]=temp;
   }
  }
 }
 int dist=0,index=0,seek=0;;
 while(index<lim && req[index]<=head)
 {
  index++;
 }
 if(dir==1)
 {
 for(i=index;i<lim;i++)
 {
  dist=abs(req[i]-head);
  printf("Distance b/w %d and %d is %d\n",head,req[i],dist);
  head=req[i];
  seek+=dist;
 }
 dist=abs(size-1-req[lim-1]);
 seek+=dist;
 printf("Distance b/w %d and %d is %d\n",req[lim-1],size-1,dist);
 seek+=size-1;
 printf("Distance b/w %d and %d is %d\n",size-1,0,size-1);
 head=0;
 for(i=0;i<index;i++)
 {
  dist=abs(req[i]-head);
  printf("Distance b/w %d and %d is %d\n",head,req[i],dist);
  head=req[i];
 
  seek+=dist;
 }
 }
 else
 {
  for(i=index-1;i>=0;i--)
  {
   dist=abs(req[i]-head);
  printf("Distance b/w %d and %d is %d\n",head,req[i],dist);
  head=req[i];
  seek+=dist;
  }
  dist=abs(req[0]-0);
  seek+=dist;
  printf("Distance b/w %d and %d is %d\n",req[0],0,req[0]);
  seek+=size-1;
  head=size-1;
  for(i=lim-1;i>=index;i--)
  {
   dist=abs(req[i]-head);
  printf("Distance b/w %d and %d is %d\n",head,req[i],dist);
  head=req[i];
  seek+=dist;
  }
 }
 printf("total seek: %d\n",seek);
                break;     
              }
              case 4:
              {
                printf("EXIT\n");  
                break;  
              }
              
          }
      }while(ch<4);
}
