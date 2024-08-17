#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,r,n,j;
printf("Enter the no of process: ");
scanf("%d",&n);
printf("Enter the no of resources: ");
scanf("%d",&r);
int avail[r],max[n][r],alloc[n][r],need[n][r],vis[n],a[n];
printf("Enter the resources:");
 for(i=0;i<r;i++)
  {
   scanf("%d",&avail[i]);
  }
 for(i=1;i<=n;i++)
 {
  vis[i]=0;
  printf("Enter the allocation of p%d:",i);
  for(j=0;j<r;j++)
  {
   scanf("%d",&alloc[i][j]);
  }
  printf("Enter the max of p%d:",i); 
  for(j=0;j<r;j++)
  {
   scanf("%d",&max[i][j]);
  }
  for(j=0;j<r;j++)
  {
   need[i][j]=max[i][j]-alloc[i][j];
  }
 }
 printf("MAX\tAllocation\tneed\n");
 for(i=1;i<=n;i++)
 {
  for(j=0;j<r;j++)
  {
   printf("%d ",max[i][j]);
  }
  printf("\t   ");
  for(j=0;j<r;j++)
  {
   printf("%d ",alloc[i][j]);
  }
  printf("\t");
  for(j=0;j<r;j++)
  {
  printf("%d ",need[i][j]);
  }
  printf("\n");
 }
 int flag,exec,k=0,c=0;
 while(c<n)
 {
 flag=0;
 for(i=0;i<n;i++)
 {
  exec=0;
  for(j=0;j<r;j++)
  {
   if(need[i][j]<=avail[j])
   {
    exec++;
   }
   }
   if(exec==r && vis[i]==0)
   {
   for(j=0;j<r;j++)
   {
   avail[j]+=alloc[i][j];

   vis[i]=1;
   flag++;
   a[k++]=i;
   c++;
   }
   } }
   if(flag==0)
   {
    printf("No safe seq\n");
    exit(0);
   }

 }  
 printf("< ");
   for(i=0;i<n;i++)
   {
    printf("p%d\t",i);
   }
   printf(">"); 
}     
   
   
  

