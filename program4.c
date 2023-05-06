/*
steps to create the application
step1 - understand the problem statement
step2 - write the algorithm
step3 - decide the programming language
step4 - write the program
step5 - test the written program
*/
//write a program which performs addition of two numbers
/*
   Algrithm
   START
      Accept first number as No1
      Accept second number as No2
      create one variable as ANS
      perform addition of No1 ans No2
      store the addition into variable ANS

      Display the value of ANS
  STOP
     
*/

///////////////////////////////////////////////////
//////////////////////////////////////////////////
//problem Statement : write a program which performs addition of two numbers
//
/////////////////////////////////////////////////
////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////
///////////////////////////////////////////////////
///
/// Fnction Name : Addition
/// Input :        Unsigned ineteger,Unsigned ineteger
/// output :        Unsigned integer
/// Description :  performs addition of 2 numbers
/// Author :       YASH RAJENDRA REKHATE
/// date :         19/04/2023
//////////////////////////////////////////////////
//////////////////////////////////////////////////
unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
   unsigned int iResult = 0;
   iResult = iValue1 + iValue2;
   return iResult;
}
/////////////////////////////////////////////////
////////////////////////////////////////////////
//entry point function
///////////////////////////////////////////////
///////////////////////////////////////////////
int main()
{
   unsigned int iNo1 = 0,iNo2 = 0, iAns = 0;

   printf("enter first number :\n");
   scanf("%d",&iNo1);

   printf("enter second number :\n");
   scanf("%d",&iNo2);

   iAns = Addition(iNo1, iNo2);
   printf("Addition is :%d \n", iAns);

   return 0;
}





  