#include<stdio.h>
int main(){
    char a[100];
    printf("enter string:\n");
    fgets(a,sizeof(a),stdin);
    int i,l,temp,j;
    for(l=0;a[l]!='\0';l++){}
    for(i=0,j=l-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("reversed string: %s", a);
}
