#include<stdio.h>

int main(){
int var1=3000,var2=60,var3=360,result;
    printf("RPM=%d\n",var1);
    printf("seconds=%d\n",var2);
    printf("degree=%d\n",var3);
    
    
   //solution
    result=var1/var2*var3;
    printf("%d RPM DIV %d seconds TIMES %d degree is %ddegree per second",var1,var2,var3,result);
    return 0;
}