//documentation section 
/* Exercise 2*/

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program
    int n,a,i,count=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the numbers in the array:\n");
    for(i=0; i<n ;i++)
    scanf("%d",&array[i]);
    printf("Enter the number to be searched: ");
    scanf("%d",&a);

    for(i=0; i<n ;i++){
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    j = k;

    while(j<n){
        LA[j-1] = LA[j];
        j = j + 1;
    }

    n = n - 1;

    printf("The array elements after deletion : \n");

    for(i=0; i<n; i++){
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    
        if(array[i]==a)
        {
            printf("Element with value %d is present in arr[]\n",a,i);
            count++;
        }
    
    if(count==0)
    printf("Element with value %d is not present in arr[]\n",a);
    else
    printf("Element with value %d is present at index %d",a,i);
    return 0;
    

}

//user-defined section
