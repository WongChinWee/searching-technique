//documentation section 
/* Exercise 6 - Binary Search*/

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
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("Enter the number to be searched: ");
    scanf("%d",&a);

    for(i=0;i<n;i++)
    {
        if(array[i]==a)
        {
            printf("%d is present at location %d.\n",a,i+1);
            count++;
        }
    }
    if(count==0)
    printf("%d is not present in the array.\n",a);
    else
    printf("%d is present %d times in the array.",a,count);
    return 0;
    

}

//user-defined section
