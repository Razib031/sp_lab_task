
#include <stdio.h>

int main() {


int num,remainder;

printf("Enter your Number: ");

scanf ("%d" ,&num);


int reversenumber = 0;


while (num != 0) {
remainder = num % 10;

reversenumber = reversenumber * 10 + remainder;

num /= 10;
}

printf("Reverse number:%d\n", reversenumber);

    return 0;
}
