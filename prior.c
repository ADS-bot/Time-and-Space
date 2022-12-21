#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
int i,j,k,n;
clock_t start,end;
double time;
printf("Enter the number of elements:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
a[i]=rand();
}
start=clock();
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
}
end=clock();
time=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time complexity is %f",time);
printf("Space complexity is %f",log(n));
getch();
return 0;
}
