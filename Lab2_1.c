#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("Size of char: %ld byte\n",sizeof(charType));            //char형 변수 charType가 할당받은 메모리 크기
printf("Size of int: %ld bytes\n",sizeof(integerType));         //int형 변수 integerType가 할당받은 메모리 크기
printf("Size of float: %ld bytes\n",sizeof(floatType));         //float형 변수 floatType가 할당받은 메모리 크기
printf("Size of double: %ld bytes\n",sizeof(doubleType));       //double형 변수 doubleType가 할당받은 메모리 크기
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));                //char 자료형의 크기
printf("Size of int: %ld bytes\n",sizeof(int));                 //int 자료형의 크기
printf("Size of float: %ld bytes\n",sizeof(float));             //float 자료형의 크기
printf("Size of double: %ld bytes\n",sizeof(double));           //double 자료형의 크기
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));              //char형 변수의 주소를 저장할 수 있는 포인터 변수의 크기
printf("Size of int*: %ld bytes\n",sizeof(int*));               //int형 변수의 주소를 저장할 수 있는 포인터 변수의 크기
printf("Size of float*: %ld bytes\n",sizeof(float*));           //float형 변수의 주소를 저장할 수 있는 포인터 변수의 크기
printf("Size of double*: %ld bytes\n",sizeof(double*));         //double형 변수의 주소를 저장할 수 있는 포인터 변수의 크기
printf("[----- [염중화] [2019038062] -----]");
return 0;
}