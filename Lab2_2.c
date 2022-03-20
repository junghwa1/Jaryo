#include <stdio.h>
int main()
{
int i;              //���� i ����
int *ptr;           //������ ���� ptr ����
int **dptr;         //���� ������ ���� dptr ����
i = 1234;
printf("[checking values before ptr = &i] \n");             //i�� �޸� �ּҸ� ������ ���� ptr�� �����ϱ� ��
printf("value of i == %d\n", i);                            //i�� ��:1234
printf("address of i == %p\n", &i);                         //i�� �޸� �ּ�:0061FF1C
printf("value of ptr == %p\n", ptr);                        //������ ���� ptr�� ��:002D9000(������ ��)
printf("address of ptr == %p\n", &ptr);                     //������ ���� ptr�� �޸� �ּ�:0061FF18
ptr = &i; /* ptr is now holding the address of i */         //i�� �޸� �ּҸ� ������ ���� ptr�� ����
printf("\n[checking values after ptr = &i] \n");            //i�� �޸� �ּҸ� ������ ���� ptr�� ������ ��
printf("value of i == %d\n", i);                            //i�� ��:1234
printf("address of i == %p\n", &i);                         //i�� �޸� �ּ�:0061FF1C
printf("value of ptr == %p\n", ptr);                        //������ ���� ptr�� ��:0061FF1C
printf("address of ptr == %p\n", &ptr);                     //������ ���� ptr�� �޸� �ּ�:0061FF18
printf("value of *ptr == %d\n", *ptr);                      //������ �����ڸ� ���� ptr�� ����� i�� �޸� �ּҿ� �����Ͽ� ���� ������:1234
dptr = &ptr; /* dptr is now holding the address of ptr */   //������ ���� ptr�� �޸� �ּҸ� ���� ������ ���� dptr�� ����
printf("\n[checking values after dptr = &ptr] \n");         //������ ���� ptr�� �޸� �ּҸ� ���� ������ ���� dptr�� ������ ��
printf("value of i == %d\n", i);                            //i�� ��:1234
printf("address of i == %p\n", &i);                         //i�� �޸� �ּ�:0061FF1C
printf("value of ptr == %p\n", ptr);                        //������ ���� ptr�� ��:0061FF1C
printf("address of ptr == %p\n", &ptr);                     //������ ���� ptr�� �޸� �ּ�:0061FF18
printf("value of *ptr == %d\n", *ptr);                      //������ �����ڸ� ���� ptr�� ����� i�� �޸� �ּҿ� �����Ͽ� ���� ������:1234
printf("value of dptr == %p\n", dptr);                      //���� ������ dptr�� ��:0061FF18
printf("address of ptr == %p\n", &dptr);                    //���� ������ dptr�� �޸� �ּ�:0061FF14
printf("value of *dptr == %p\n", *dptr);                    //���� ������ dptr�� ���� �� ptr�� �޸� �ּҿ� �����Ͽ� ���� ���:0061FF1C
printf("value of **dptr == %d\n", **dptr);                  /*  ���� ������ dptr�� ���� �� ptr�� �޸� �ּҿ� �����ϰ� ������ ptr�� ���� ��
                                                            ptr�� �޸� �ּҿ� �ѹ� �� �����Ͽ� ���� ���:1234    */
*ptr = 7777; /* changing the value of *ptr */               //������ ptr�� ���� �� ptr�� �޸� �ּҿ� �����Ͽ� 7777�̶�� ���� ����=>(i=7777)
printf("\n[after *ptr = 7777] \n");                         //i�� �޸� �ּҿ� �����Ͽ� 7777�� ���� �� ��
printf("value of i == %d\n", i);                            //i�� ��:7777
printf("value of *ptr == %d\n", *ptr);                      //ptr�� ���� �� i�� �޸� �ּҿ� �����Ͽ� ���� �� ���� ���:7777
printf("value of **dptr == %d\n", **dptr);                  /*  dptr�� ���� �� ptr�� �޸� �ּҿ� �����ϰ� ptr�� ���� �� i�� �޸� �ּҿ� �����Ͽ�
                                                            ����� ���� ���:7777  */
**dptr = 8888; /* changing the value of **dptr */           /*  dptr�� ���� �� ptr�� �޸� �ּҿ� �����ϰ� ptr�� ���� �� i�� �޸� �ּҿ� �����Ͽ�
                                                            8888�� ����   */
printf("\n[after **dptr = 8888] \n");                       //������ �����ڸ� ���� ptr�� �޸� �ּҸ� ���ļ� i�� �޸� �ּҿ� ���� �Ͽ� 8888�� ���� �� ��
printf("value of i == %d\n", i);                            //i�� ��:8888
printf("value of *ptr == %d\n", *ptr);                      //ptr�� ���� �� i�� �޸� �ּҿ� �����Ͽ� ���� �� ���� ���:8888
printf("value of **dptr == %d\n", **dptr);                  /*  dptr�� ���� �� ptr�� �޸� �ּҿ� �����ϰ� ptr�� ���� �� i�� �޸� �ּҿ� �����Ͽ�
                                                            ����� ���� ���:8888  */
printf("[----- [����ȭ] [2019038062] -----]");              //�������� �����͸� �����ϰ� ������ �����ڸ� �̿��� �� �ִ�.
return 0;
}