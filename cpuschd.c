#include<stdio.h>
#include<stdlib.h>
void main()
{
int ch=0;
while(ch<5)
 {
 printf("Enter the Choice:\n1)FCFS 2)SJF 3)PRIORITY 4)ROUND ROBIN 5) EXIT\n");
scanf("%d",&ch);
  switch(ch)
  {
   case 1:
   {
 printf("Enter the number of process:");
 int lim;
 scanf("%d",&lim);
 int p[lim],wt[lim],tat[lim],bt[lim],i;
 printf("Enter the process and its Burst Time:\n");
 for(i=0;i<lim;i++)
 {
  scanf("%d%d",&p[i],&bt[i]);
 }
 wt[0]=0;
 tat[0]=bt[0];
 float tot_wt=wt[0],tot_tat=tat[0];
 for(i=1;i<lim;i++)
 {
  wt[i]=wt[i-1]+bt[i-1];
  tat[i]=tat[i-1]+bt[i];
  tot_wt+=wt[i];
  tot_tat+=tat[i];
 }
 printf("Process\tBT\tWT\tTAT\n");
 for(i=0;i<lim;i++)
 {
  printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
 }
 printf("GANTT CHART\n");
 for(i=0;i<lim;i++)
 {
  printf("\tP%d",p[i]);
 }
 printf("\n");
 for(i=0;i<lim;i++)
 {
  printf("     %d\t",wt[i]); 
 }
 printf("      %d\t",tat[lim-1]);
 printf("\n"); 
 printf("Total WT & TAT:%.2f %.2f\n",tot_wt,tot_tat);
 printf("Average WT & TAT:%.2f %.2f\n",tot_wt/lim,tot_tat/lim);
   break;
   }
 
   case 2:
   {
 printf("Enter the number of process:");
 int lim;
 scanf("%d",&lim);
 int p[lim],wt[lim],tat[lim],bt[lim],i,j,temp;
 printf("Enter the process and its Burst Time:\n");
 for(i=0;i<lim;i++)
 {
  scanf("%d%d",&p[i],&bt[i]);
 }
 //sorting
 for(i=0;i<lim;i++)
 {
  for(j=i+1;j<lim;j++)
   {
    if(bt[i]>bt[j])
    {
     temp=bt[i];
     bt[i]=bt[j];
     bt[j]=temp;
     
     temp=p[i];
     p[i]=p[j];
     p[j]=temp;
    } 
   }
  }   
 wt[0]=0;
 tat[0]=bt[0];
 float tot_wt=wt[0],tot_tat=tat[0];
 for(i=1;i<lim;i++)
 {
  wt[i]=wt[i-1]+bt[i-1];
  tat[i]=tat[i-1]+bt[i];
  tot_wt+=wt[i];
  tot_tat+=tat[i];
 }
 printf("GANTT CHART\n");
 for(i=0;i<lim;i++)
 {
  printf("\tP%d",p[i]);
 }
 printf("\n");
 for(i=0;i<lim;i++)
 {
  printf("     %d\t",wt[i]); 
 }
 printf("      %d\t",tat[lim-1]);
 printf("\n"); 
 printf("Process\tBT\tWT\tTAT\n");
 for(i=0;i<lim;i++)
 {
  printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
 }

 printf("Total WT & TAT:%.2f %.2f\n",tot_wt,tot_tat);
 printf("Average WT & TAT:%.2f %.2f\n",tot_wt/lim,tot_tat/lim);
    break;
   }
   case 3:
   {
 printf("Enter the number of process:");
 int lim;
 scanf("%d",&lim);
 int p[lim],wt[lim],pri[lim],tat[lim],bt[lim],i,j,temp;
 printf("Enter the process and its Burst Time and Priority:\n");
 for(i=0;i<lim;i++)
 {
  scanf("%d%d%d",&p[i],&bt[i],&pri[i]);
 }
 //sorting
 for(i=0;i<lim;i++)
 {
  for(j=i+1;j<lim;j++)
   {
    if(pri[i]>pri[j])
    {
     temp=bt[i];
     bt[i]=bt[j];
     bt[j]=temp;
     
     temp=p[i];
     p[i]=p[j];
     p[j]=temp;
     
     temp=pri[i];
     pri[i]=pri[j];
     pri[j]=temp;
    } 
   }
  }   
 wt[0]=0;
 tat[0]=bt[0];
 float tot_wt=wt[0],tot_tat=tat[0];
 for(i=1;i<lim;i++)
 {
  wt[i]=wt[i-1]+bt[i-1];
  tat[i]=tat[i-1]+bt[i];
  tot_wt+=wt[i];
  tot_tat+=tat[i];
 }
 printf("GANTT CHART\n");
 for(i=0;i<lim;i++)
 {
  printf("\tP%d",p[i]);
 }
 printf("\n");
 for(i=0;i<lim;i++)
 {
  printf("     %d\t",wt[i]); 
 }
 printf("      %d\t",tat[lim-1]);
 printf("\n"); 
 printf("Process\tBT\tWT\tTAT\tPRIORITY\n");
 for(i=0;i<lim;i++)
 {
  printf("%d\t%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i],pri[i]);
 }

 printf("Total WT & TAT:%.2f %.2f\n",tot_wt,tot_tat);
 printf("Average WT & TAT:%.2f %.2f\n",tot_wt/lim,tot_tat/lim);
    break;
   }
   case 4:
   {
    printf("Enter the number of process:");
 int lim,tq;
 scanf("%d",&lim);
 printf("Enter the Time Quantum:");
 scanf("%d",&tq);
 int p[lim],wt[lim],tat[lim],rem_bt[lim],bt[lim],i,j,temp,new[30],k=1;
 int time=0,completed=0;
 printf("Enter the process and its Burst Time:\n");
 for(i=0;i<lim;i++)
 {
  scanf("%d%d",&p[i],&bt[i]);
  rem_bt[i]=bt[i];
 }
 printf("GANDTT CHART\n");
 while(completed<lim)
 {
 for(i=0;i<lim;i++)
 {
  if(rem_bt[i]>0)
  {
   if(rem_bt[i]>tq)
   {
    time+=tq;
    rem_bt[i]=rem_bt[i]-tq;
    printf("\tP%d",p[i]);
    new[k]=time;
    k++;
   }
   else
   {
    time=rem_bt[i]+time;
    wt[i]=time-bt[i];
    rem_bt[i]=0;
    completed++;
    tat[i]=time;
    printf("\tP%d",p[i]);
    new[k]=time;
    k++;
   }
  }
 }
} 
printf("\n");  
new[0]=0;

for(i=0;i<k;i++)
{
 printf("     %d\t",new[i]);
} 

float tot_wt=0,tot_tat=0;
printf("\nProcess\tBT\tWT\tTAT\n");
 for(i=0;i<lim;i++)
 {
  printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
  tot_wt+=wt[i];
  tot_tat+=tat[i];
 }
printf("Total WT & TAT:%.2f %.2f\n",tot_wt,tot_tat);
 printf("Average WT & TAT:%.2f %.2f\n",tot_wt/lim,tot_tat/lim);
    break;
   }
   case 5:
   {
    printf("EXIT");
    break;
   }
  }
 }
 }
 
 
    
      
