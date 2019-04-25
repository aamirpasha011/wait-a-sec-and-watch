#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;

 do
 {

 int n;
 printf("Enter your Number:");
 scanf("%d",&n);
 if(n%2!=0)
 {
 printf("Entered number is odd");
 printf("\nDo you want to enter one more number(y/n):");
 scanf(" %c", &ch);
 }
 else
 {
 printf("Entered number is even");
 printf("\nDo you want to enter one more number(y/n):");
 scanf(" %c", &ch);
 }
 }while(toupper(ch)=='Y');
}
