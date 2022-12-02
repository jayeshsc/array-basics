#include <stdio.h>
#include <limits.h>
int main(){
 int size=4, i;


int arr[size];
printf("Enter the elements of the array:\n");
for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
}
int max = INT_MIN;
int min = INT_MAX;
for(i = 0;i<4;i++)
{
    if(arr[i]>max){
        max = arr[i];
    }
    if(arr[i]<min){
        min = arr[i];
    }
}
printf("\n%d\n",max);
printf("\n%d",min);
return 0;
}