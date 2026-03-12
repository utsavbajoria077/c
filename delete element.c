
#include <stdio.h>

int main()
{
    int n,pos,i;
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
    printf("eneter postion to delete");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
        n--;
    }
    printf("new array:");
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);}
    return 0;
}
