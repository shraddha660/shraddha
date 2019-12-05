#include<stdio.h>
int main()
{
int a,b;
printf("Enter first no.\n");
scanf("%d",&a);

printf("Enter second no.\n");
scanf("%d",&b);

printf("Enter 1.Addition 2.Subtraction 3. Multiplication 4. Division %. Exit\n");

printf("Enter choice\n");
scanf("%d",&c);

switch(c)
{

case 1 : int add=0;
        add=a+b;
         printf("addition is:",add);
break;
 case 2 :int sub=0;
        sub=a+b;
         printf("sub is:",sub);
          break;
case 3 : 
     int mul=0;
        mul=a*b;
         printf("mul is:",mul);
          break;
case 4 : 
int div=0;
        div=a/b;
         printf("div is:",div);
          break;
case 5 : break;

}


return 0;


}
