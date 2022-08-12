#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NULL ((void *)0)

#ifndef __SIZE_T
#define __SIZE_T
typedef unsigned int size_t;
#endif


/* Pointers */

int *globalpi; //defualt gets initialized to NULL

void foo()
{
    static int *sPtr;

    printf("Static pointer data %p \t  %d\n",sPtr,*sPtr);// defualt gets initialized to NULL

}

void funcPointers()
{







}


int dynamicMemoryAllocation()
{

    /* malloc   void * malloc(size_t);memory allocation
     * calloc  void *calloc(size_t numElements, size_t elementSize); the allocated bytes are zeroed
     *
     *void *realloc(void *ptr, size_t size); ptr is the pointer to the original block, size requested size
    * free void free(void *ptr);
*/

    printf("\n\n\n********* DYNAMIC MEMORY ALLOCATION **********+\n\n");

//    int *p = (int *)malloc(sizeof (int));
//    if(p==NULL)
//    {
//        printf("Memory error..... allocation failed\n");
//        return -1;
//    }
//    *p = 5;
//    printf("%d\n\n",*p);

//    free(p);

    //alwaya test the validity of the pointer returned by malloc

//    char *name = (char *)malloc(strlen("Susan") + 1);

//    printf("name pointer address =  %p\n",name);

//    if(name==NULL)
//    {
//        printf("Memory error..... allocation failed\n");
//        return -1;


//    }
//    if(name)
//    {

//         strcpy(name,"Susan");
//         while(*name!='\0')
//         {

//             printf("%c\n",*name);

//             name++;

//         }

//         printf("\n%s\n",name);

//         free(name);

//    }

    /* Calloc*/

//     int *cPtr;
//     cPtr = (int *)calloc(100,sizeof (int));// final allocated is 100*sizeof(int)

//     /* <this is equivalent to below malloc*/
//     int *mPtr;
//     mPtr = (int *)malloc(100*sizeof(int));
//     memset(mPtr,0,00*sizeof(int));

    /* Realloc - to increase or decrease the memory in the future
     *
     *  void *realloc(void *ptr, size_t size); ptr is the pointer to the original block, size requested size
    */



//     char *string1;
//     char *string2;

//     string1 = (char *)malloc(16);
//     strcpy(string1,"0123456789ABC");

//     printf("Realloc string 1 : %p [%s]\n",string1,string1);


//     string2 = realloc(string1,12);
//     printf("Realloc string 2 address: %p\n",string2);

//     printf("Realloc string 2 : %s\n",string2);


//     string2 = realloc(string1,64);

//     printf("Realloc string 2 address: %p [%s]\n",string2,string2);
//     printf("Realloc string 1 address: %p [%s]\n\n",string1,string1);


    /* Memory Deallocation --- void free(void *);  */


//     free(string2);
//   //  free(string1);



     /* Dangling Pointers*/

  printf("\n\n ********* DANGING POINTERS **********+\n\n");


//  int *dPtr = (int *)malloc(sizeof (int));

//  *dPtr = 5;
//  printf("Dangling pointer address %p : %d\n",dPtr,*dPtr);

//  free(dPtr);

//  *dPtr =10;// dangling pointer-- accesing memory that is already freed

  int *p1 = (int *)malloc(sizeof (int));
  *p1 = 5;

  printf("\n\n p1 address %p : %d\n",p1,*p1);
  int *p2;
  p2 =p1;
  printf("\n\n p2 address %p : %d\n",p2,*p2);

  free(p1);
  p1 = NULL;
  *p2 =10;
  printf("\n\n p1 address %p : %d\n",p2,*p2);






}











void constPointersFunc()
{


    printf("\n\n\n********* CONSTANT POINTERS  **********+\n\n");

    int num =5;
    const int limit = 100;
    int *iPtr = &num;
    const int *ciPtr = &limit; //pointer points to const int

    printf(" Address of num and value : %p \t %d\n", &num,num);
    printf(" Address of Limit and value : %p \t %d\n", &limit,limit);
    printf(" Address of iPtr and value : %p \t %d\n", iPtr,*iPtr);
    printf(" Address of ciPtr and value : %p \t %d\n", ciPtr,*ciPtr);


    /* Changing the value pointed to by pointers*/

    *iPtr = 25;
  //  *ciPtr = 239;// const int is read only theredore issues error

  printf(" Value of iPtr and its pointed value : %p \t %d\n", iPtr,*iPtr);
  printf(" Value of ciPtr and its pointed value : %p \t %d\n", ciPtr,*ciPtr);


  int total =50;

  ciPtr = &total; // only the pointed to value is constant but the ppointer itself can be changed to point to different data of same type


  printf("ciPtr changed %p \t and its value %d \n", ciPtr,*ciPtr);


  /* Constant pointers to non constant*/

  int num2 =78;
  int *const cptr = &num2;


  printf("num2 Address %p \t and its value %d \n", &num2,num2);

  printf("cptr :  %p \t and its value : %d \n", cptr,*cptr);


  *cptr = 200;
   printf("num2 Address %p \t and its value %d \n", &num2,num2);
   printf("cptr :  %p \t and its value : %d \n", cptr,*cptr);

   int result =98;
  // cptr = &result; //ERROR const pointer cannot be made to point to another location


   const int max = 75;

   int *const cPtr2= &max; // const int is assigned to int //WARNING

    printf("cPtr2 :  %p \t and its value : %d \n", cPtr2,*cPtr2);

    *cPtr2 =100; // const int max is changed which should not be the case

    printf("cPtr2 :  %p \t and its value : %d \n", cPtr2,*cPtr2);



    /* Use constsnt pointers to const  constants*/


    const int * const cicPtr = &max; //should be immediately initialized

    printf("cicPtr :  %p \t and its value : %d \n", cicPtr,*cicPtr);

  //*cicPtr = 200; // Const int and cannot be changed ERROR

  //  cicPtr = &result;// Const Pointer  and cannot be changed ERROR





}




int main()
{


//    int num=10;
//    int *iPtr;
//   //iPtr = (int *)num;

//    iPtr = &num;

//    printf("num value and address : %d \t%p\n",num,&num);
//    printf("iPtr value and address : %p \t%p\n",iPtr,&iPtr);



    printf("\n\n************** Pointer basics ****************\n\n");

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
    /* NULL OR 0
        0 is overloaded. * is overloaded */

    int total;
    int *ptr3 =0;// 0 here denotes null

    ptr3 = &total;
    *ptr3 = 0; // 0 here is integer value




    /* Pointers to Void  */




    int result =100;
    int *rPtr;
    rPtr = &result;

    printf("Value of rPtr %p\n",rPtr); //both has same value

    void *vP = rPtr;

    rPtr = (int *)vP;
    printf("Value of rPtr %p\n",rPtr);//both has same value

    printf("Size of void pointer = %zu\n",sizeof (void *));
    printf("Size of void  = %zu\n",sizeof (void )); //Illegal in c++ but in c sizeof(void) is 1





    /*Pointer sizes and Types*/

    size_t  size_= -5; // max unsigned value - No negative value

    printf("Size value = %d\n",size_); // unsigned value interpreted as int
    printf("Size value = %zu\n",size_);// MSB is 1 and is interpreted as unsigned int


    size_t  sizePos= 5;

    printf("sizePos value = %zu\n",sizePos);//prints 5
    printf("sizePos value = %zu\n",sizePos);//prints 5

    printf("Size of pointers - char * =  %zu\n",sizeof(char*));


    /* Pointer Arithmetic*/

    printf("\n\n************** Pointer Arithmetic ****************\n");

    int vector[] ={10,20,40,50};
    int *pVec = vector;

    printf("%d\n",*pVec);//points to 10
    pVec +=1;
    printf("%d\n",*pVec);//points to 20

    /* Void pointer arithmetic*/

    int num =5;
    void *pv = &num;
    printf("void pointer value %p\n",pv);
    pv +=1;//syntax warning

    /*Pointer subtraction with integer */

    pVec = vector+3;

    printf("Vector  element :%d\n",*pVec);
    pVec -=1;
    printf("Vector  element :%d\n",*pVec);
    pVec -=1;
    printf("Vector  element :%d\n",*pVec);
    pVec -=1;
     printf("Vector  element :%d\n",*pVec);

     /*Pointer- Pointer subtraction  */

     int *p0, *p1,*p2;

     p0 = vector;
     p1 = vector+1;
     p2 = vector+2;

     printf("p2 -p0 : %d\n",p2-p0);
    printf("*p2 -*p0 : %d\n",*p2-*p0);

    /*Comparing pointers*/

   // constPointersFunc();

    dynamicMemoryAllocation();


    return 0;
}
