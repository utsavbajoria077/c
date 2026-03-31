#include<stdio.h>
int main(){
    char a[100];
    printf("enter string");
    fgets(a,sizeof(a),stdin);
    int i;
    for(i=0;a[i]!='\0';i++){
        
    }
    printf("%d is length of the string",i-1);
}
