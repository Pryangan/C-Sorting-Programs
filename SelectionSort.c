#include<stdio.h>

void Swapping(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//*****************************************************************
void SelectionSort(int arr[],int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
        min_idx = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
        }
        Swapping(&arr[i],&arr[min_idx]);
    }
}
//********************************************************************
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
    int arr[] = {64,12,34,67,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Selection Sort : ");
    displaySort(&arr,n);

    SelectionSort(&arr,n);
    printf("\nAfter Selection Sort : ");
    displaySort(&arr,n);
}
