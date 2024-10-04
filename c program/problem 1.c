#include<stdio.h>

int main(){

int a,b;
printf("Enter your fast number:");
scanf("%d",&a);
printf("Enter your second number:");
scanf("%d",&b);
int sum = a+b;

if (sum%2==0){
    printf("This sum is a even number");
}

else{
    printf("Thes sum is a odd number");
}




return 0;
}
