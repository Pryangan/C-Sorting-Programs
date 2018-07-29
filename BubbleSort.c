#include<stdio.h>

void swapping(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[],int n)
{
    int i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapping(&arr[j],&arr[j+1]);
            }
        }
    }
}

void displaySort(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main(void)
{
    int arr[] = {67,12,34,11,64};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Bubble Sort : ");
    displaySort(&arr,n);

    bubbleSort(&arr,n);
    printf("\nAfter Bubble Sort : ");
    displaySort(&arr,n);
}
