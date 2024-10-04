#include<stdio.h>
int main(){

int a , b ,c ;

printf("Enter 1st side:-");
scanf("%d",&a);
printf("Enter 2nd side:-");
scanf("%d",&b);
printf("Enter 3rd side:-");
scanf("%d",&c);



if ((a+b>c) && (b+c>a)){
    printf("It's a valid triangle.");

}
else if (c+a>b) {

    printf("It's a valid triangle.");
}

else{
    printf("It's not a valid triangle");
}


return 0;
}

