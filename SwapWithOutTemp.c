#include<stdio.h>
int main(){

    int num1=20,num2=10;

    printf("Number One Before Swap=%d\n",num1);

    printf("Number Two Before Swap=%d\n",num2);

    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;

    printf("Number One After Swap=%d\n",num1);

    printf("Number Two After Swap=%d\n",num2);

return 0;
}
