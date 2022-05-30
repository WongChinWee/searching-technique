//documentation section 
/* Exercise 5 - Binary Search* by Wong Chin Wee/

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program
    int n,i,a,low,high,mid;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements in a sorted manner:\n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("Enter the value to find: ");
    scanf("%d",&a);
    low=0;
    high=n-1;
    mid=(low+high)/2;

    while(low<=high)
    {
        if(array[mid]<a)
        low=mid+1;
        else if(array[mid==a])
        {
            printf("Element with value %d is present at index %d",a,mid+1);
            break;
        }
        else
        high=mid-1;
        mid=(low+high)/2;
    }
    if(low>high)
    printf("%d is not present in the array.",a);
    return 0;
}

//user-defined section
