#include<stdio.h>
#define MAX 100
int getMAXElement(int[]);
int size;
int main(){
int arr[MAX], max, i;
printf("\n\n Enter the size of the array:");
scanf("%d", &size);
printf("\n\n Enter the elements \n\n");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
max=getMAXElement(arr);
printf("\n\n Largest element of the array is %d\n\n",max);
return 0;
}
int getMAXElement(int a[]){
static int i=0,max=-9999;
if(i<size){
if(max<a[i])
max=a[i];
i++;
getMAXElement(a);
}
return max;
}
