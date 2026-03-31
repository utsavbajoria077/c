#include<stdio.h>
int main(){
    char a[100];
    printf("enter string:\n");
    fgets(a,sizeof(a),stdin);
    int i,l,temp,j,flag=0;
    for(l=0;a[l]!='\0';l++){}
    for(i=0,j=l-2;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        if(a[i]!=a[j]){
            flag=1;break;
        }
}
 printf("reversed string: %s", a);
if(flag==0){
    printf("\n palindrome");
}
else{
    printf("\nnot palindrome");
}

   
}
