#include<stdio.h>
int main(){
    int a[50],i,size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    //entering array elements
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are\n");
    //traversing array elements
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
