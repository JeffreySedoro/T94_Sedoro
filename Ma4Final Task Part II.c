#include<stdio.h>
 int main()
{ 
int num, n = 7;

printf("Input any Positive Integer:");
scanf("%c",&num);

 while(n > 1)
{
 if(n % 2 == 0)
{
 n = n / 2; 
printf("Current given number is %d\n", n); 
}
 else
{  n = n * 3 + 1;
 printf("Current Given Number is %d\n", n);

 } 

} 

return 0;

 }