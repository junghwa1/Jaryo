#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("Size of char: %ld byte\n",sizeof(charType));            //char�� ���� charType�� �Ҵ���� �޸� ũ��
printf("Size of int: %ld bytes\n",sizeof(integerType));         //int�� ���� integerType�� �Ҵ���� �޸� ũ��
printf("Size of float: %ld bytes\n",sizeof(floatType));         //float�� ���� floatType�� �Ҵ���� �޸� ũ��
printf("Size of double: %ld bytes\n",sizeof(doubleType));       //double�� ���� doubleType�� �Ҵ���� �޸� ũ��
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));                //char �ڷ����� ũ��
printf("Size of int: %ld bytes\n",sizeof(int));                 //int �ڷ����� ũ��
printf("Size of float: %ld bytes\n",sizeof(float));             //float �ڷ����� ũ��
printf("Size of double: %ld bytes\n",sizeof(double));           //double �ڷ����� ũ��
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));              //char�� ������ �ּҸ� ������ �� �ִ� ������ ������ ũ��
printf("Size of int*: %ld bytes\n",sizeof(int*));               //int�� ������ �ּҸ� ������ �� �ִ� ������ ������ ũ��
printf("Size of float*: %ld bytes\n",sizeof(float*));           //float�� ������ �ּҸ� ������ �� �ִ� ������ ������ ũ��
printf("Size of double*: %ld bytes\n",sizeof(double*));         //double�� ������ �ּҸ� ������ �� �ִ� ������ ������ ũ��
printf("[----- [����ȭ] [2019038062] -----]");
return 0;
}