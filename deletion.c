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
    //deleting an element
    printf("Enter the position of element you want to delete: ");
    scanf("%d",&pos);
    if(pos<=0||pos>size){
            printf("Invalid position");
        }
        else{
            for(i=pos-1;i<size-1;i++){
                num=a[i];
                a[i]=a[i+1];
            }
            size--;
            printf("The deleted element is: %d\n",num);

        }
        printf("Array elements are\n");
        //traversing array elements
        for(i=0;i<size;i++)
        {
            printf("%d\n",a[i]);
        }
}
