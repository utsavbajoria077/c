#include<stdio.h>
int main(){
    char a[100];
    printf("enter string:\n");
    fgets(a,sizeof(a),stdin);
    int i,l,vowels,c=0,v=0;
    for(l=0;a[l]!='\0';l++){}
    for(i=0;i<l-1;i++){
    if(a[i]>='a'&& a[i]<='z'||a[i]>='A'&& a[i]<='Z'){
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
               a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            v++;
        }
        else{
            c++;
        }}}
        printf("count of consonants: %d",c);
        printf("\ncount of vowels:%d",v);
        
        
    }
