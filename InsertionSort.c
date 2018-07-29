#include<stdio.h>

void InsertionSort(int arr[],int n)
{
    int i,key,j;
    for(i = 1;i<n;i++)
    {
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void display(int arr[],int n)
{
    int i =0;
    for(i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main(void)
{
    int arr[] = {34,12,45,65,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Insertion Sort : \n");
    display(&arr,n);

    InsertionSort(&arr,n);
    printf("\nAfter Insertion Sort : \n");
    display(&arr,n);
}
