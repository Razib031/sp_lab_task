#include<stdio.h>
int main(){

int number1,number2, number3;
printf("Enter your 1st number:");
scanf("%d",&number1);
printf("Enter your 2nd number:");
scanf("%d",&number2);
printf("Enter your 3rd number:");
scanf("%d",&number3);

if  ((number1>number2 )&&(number1>number3)){
    printf(" The largest number is:%d",number1);
}

else if ((number2>number1)&&(number2>number3)){
    printf(" The largest number is :%d " ,number2);
}

else {
    printf(" The largest number is :%d",number3);
}


return 0;
}



