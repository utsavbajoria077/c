#include<stdio.h>
int main()
{
    int n;
    printf("enter size of element");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
int key,found;
printf("\nenter element to search");
scanf("%d",&key);
for(int i=0;i<n;i++){
    if (a[i]==key){
        printf("element found at position  %d ",i+1);
        found=1;
    }
}
if (found==0){
    printf("element not found");
}
}
