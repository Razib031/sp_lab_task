#include<stdio.h>
int main(){

int num1,num2;
printf("Enter your 1st number:-");
scanf("%d",&num1);
printf("Enter your 2nd number number:-");
scanf("%d",&num2);

char ope;

printf("Enter your operator:");
scanf(" %c",&ope);


switch(ope){
case "+":
result=num1+num2;
break;

case '-':
result = num1-num2;
break;

case '*':
result= num1*num2;
break;

case '/':
result= num1/num2;
break;

}


return 0;
}
//Where is the error in this code?
