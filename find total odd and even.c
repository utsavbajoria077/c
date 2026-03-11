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
int c,v;
 for(int i=0;i<n;i++)
{ if (a[i]%2==0){
    c=c+1;}
else{
    v=v+1;
}
}
    printf("\n %d are toatal even no.",c);
    printf("\n %d are total odd no",v);
}
