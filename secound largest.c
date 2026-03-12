
#include <stdio.h>

int main()
{
    int n,i,j,temp;
    printf("enter size of array");
    scanf("%d",&n);
    int a[i];
    for(int i=0;i<n;i++){
        printf("enter elements");
        scanf("%d",&a[i]);
    }printf("array:");
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        }
        
    
    printf("descending order: \n");
    for(int j=0;j<n;j++){
        printf(" %d",a[j]);
    }printf(" secound largest number %d",a[1]);
    return 0;
}
