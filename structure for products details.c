#include <stdio.h>
#include <string.h>
//Store product details (name, ID, quantity, price).
//Calculate total cost and display products where cost > 10000.
struct product{
    char name[20];
    int id;
    int quantity;
    float price;
};
int main(){
int n;
printf("enter total no.of products");
scanf("%d",&n);
struct product p[n];
for(int i=0;i<n;i++){
    printf("\nenter dertalis of product %d\n",i+1);
    printf("name of the product:");
    scanf("%s",p[i].name);
    printf("id:");
    scanf("%d",&p[i].id);
    printf("quantity:");
    scanf("%d",&p[i].quantity);
    printf("price:");
    scanf("%f",&p[i].price);
}
for(int i=0;i<n;i++){
    float total=p[i].price*p[i].quantity;
    if (total>10000){
        printf("name of the product:%s\ntotal cost of the product:%.2f\n",p[i].name,total);
}
}
}
