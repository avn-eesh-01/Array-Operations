#include<stdio.h>
int main(){
    int a[50],i,size,pos,num;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    //entering array elements
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    //inserting a new element
    printf("Enter the position of new element: ");
    scanf("%d",&pos);
    printf("Enter the value of new element: ");
    scanf("%d",&num);
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("Array elements are\n");
    //traversing array elements
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
