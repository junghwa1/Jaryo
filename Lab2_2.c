#include <stdio.h>
int main()
{
int i;              //변수 i 선언
int *ptr;           //포인터 변수 ptr 선언
int **dptr;         //이중 포인터 변수 dptr 선언
i = 1234;
printf("[checking values before ptr = &i] \n");             //i의 메모리 주소를 포인터 변수 ptr에 저장하기 전
printf("value of i == %d\n", i);                            //i의 값:1234
printf("address of i == %p\n", &i);                         //i의 메모리 주소:0061FF1C
printf("value of ptr == %p\n", ptr);                        //포인터 변수 ptr의 값:002D9000(쓰래기 값)
printf("address of ptr == %p\n", &ptr);                     //포인터 변수 ptr의 메모리 주소:0061FF18
ptr = &i; /* ptr is now holding the address of i */         //i의 메모리 주소를 포인터 변수 ptr에 저장
printf("\n[checking values after ptr = &i] \n");            //i의 메모리 주소를 포인터 변수 ptr에 저장한 후
printf("value of i == %d\n", i);                            //i의 값:1234
printf("address of i == %p\n", &i);                         //i의 메모리 주소:0061FF1C
printf("value of ptr == %p\n", ptr);                        //포인터 변수 ptr의 값:0061FF1C
printf("address of ptr == %p\n", &ptr);                     //포인터 변수 ptr의 메모리 주소:0061FF18
printf("value of *ptr == %d\n", *ptr);                      //역참조 연산자를 통해 ptr에 저장된 i의 메모리 주소에 접근하여 값을 가져옴:1234
dptr = &ptr; /* dptr is now holding the address of ptr */   //포인터 변수 ptr의 메모리 주소를 이중 포인터 변수 dptr에 저장
printf("\n[checking values after dptr = &ptr] \n");         //포인터 변수 ptr의 메모리 주소를 이중 포인터 변수 dptr에 저장한 후
printf("value of i == %d\n", i);                            //i의 값:1234
printf("address of i == %p\n", &i);                         //i의 메모리 주소:0061FF1C
printf("value of ptr == %p\n", ptr);                        //포인터 변수 ptr의 값:0061FF1C
printf("address of ptr == %p\n", &ptr);                     //포인터 변수 ptr의 메모리 주소:0061FF18
printf("value of *ptr == %d\n", *ptr);                      //역참조 연산자를 통해 ptr에 저장된 i의 메모리 주소에 접근하여 값을 가져옴:1234
printf("value of dptr == %p\n", dptr);                      //이중 포인터 dptr의 값:0061FF18
printf("address of ptr == %p\n", &dptr);                    //이중 포인터 dptr의 메모리 주소:0061FF14
printf("value of *dptr == %p\n", *dptr);                    //이중 포인터 dptr에 저장 된 ptr의 메모리 주소에 접근하여 값을 출력:0061FF1C
printf("value of **dptr == %d\n", **dptr);                  /*  이중 포인터 dptr에 저장 된 ptr에 메모리 주소에 접근하고 포인터 ptr에 저장 된
                                                            ptr의 메모리 주소에 한번 더 접근하여 값을 출력:1234    */
*ptr = 7777; /* changing the value of *ptr */               //포인터 ptr에 저장 된 ptr의 메모리 주소에 접근하여 7777이라는 값을 저장=>(i=7777)
printf("\n[after *ptr = 7777] \n");                         //i의 메모리 주소에 접근하여 7777을 저장 한 후
printf("value of i == %d\n", i);                            //i의 값:7777
printf("value of *ptr == %d\n", *ptr);                      //ptr에 저장 된 i의 메모리 주소에 접근하여 저장 된 값을 출력:7777
printf("value of **dptr == %d\n", **dptr);                  /*  dptr에 저장 된 ptr의 메모리 주소에 접근하고 ptr에 저장 된 i의 메모리 주소에 접근하여
                                                            저장된 값을 출력:7777  */
**dptr = 8888; /* changing the value of **dptr */           /*  dptr에 저장 된 ptr의 메모리 주소에 접근하고 ptr에 저장 된 i의 메모리 주소에 접근하여
                                                            8888을 저장   */
printf("\n[after **dptr = 8888] \n");                       //역참조 연산자를 통해 ptr의 메모리 주소를 거쳐서 i의 메모리 주소에 접근 하여 8888을 저장 한 후
printf("value of i == %d\n", i);                            //i의 값:8888
printf("value of *ptr == %d\n", *ptr);                      //ptr에 저장 된 i의 메모리 주소에 접근하여 저장 된 값을 출력:8888
printf("value of **dptr == %d\n", **dptr);                  /*  dptr에 저장 된 ptr의 메모리 주소에 접근하고 ptr에 저장 된 i의 메모리 주소에 접근하여
                                                            저장된 값을 출력:8888  */
printf("[----- [염중화] [2019038062] -----]");              //포인터의 포인터를 선언하고 역참조 연산자를 이용할 수 있다.
return 0;
}