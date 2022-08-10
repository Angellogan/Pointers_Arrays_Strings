#include <stdio.h>

#define NULL ((void *)0)


/* Pointers */


int main()
{


//    int num=10;
//    int *iPtr;
//   //iPtr = (int *)num;

//    iPtr = &num;

//    printf("num value and address : %d \t%p\n",num,&num);
//    printf("iPtr value and address : %p \t%p\n",iPtr,&iPtr);


    int num2 = 5;
    int *pi = &num2;

    printf("pointer deferencing :%d\t\n",*pi);

    *pi = 200;

    printf("pointer value changing :%d\t\n",*pi);

    int *ptr1 = NULL;
    int *ptr2 ;

    printf("ptr1 address :%p\n",&ptr1);
    printf("ptr2 address :%p\n",&ptr2);
    printf("ptr2 value-address :%p\n",ptr2);


    if(ptr1==ptr2)
    {
        printf("Pointers are equal\n");//both pointers has null so this is true

    }
    else
    {

         printf("Pointers are  NOT equal\n");

    }

















    return 0;
}
