#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i,min,max,sum;
    float avg;
    printf("Enter 10 integer value:\n");
    for(i=0;i<10;i++){
            printf("Element %d:",i);
            scanf("%d",&arr[i]);
    }

    min=arr[0];
    max=arr[0];
    sum=arr[0];
    for (i=0;i<10;i++){
            if(arr[i]<min){
                min=arr[i];
        }
        if(arr[i]>max){
                max=arr[i];
        }
     sum +=arr[i];
    }
    avg=(float)sum/10;
    printf("\nMinimum value: %d\n",min);
    printf("Maximum value: %d\n",max);
    printf("Average value:%.2f\n",avg);
    printf("values in reverse order:\n");
    for (i=9;i>=0;i--){
    printf("%d",arr[i]);
    }
    printf("\n");

}
