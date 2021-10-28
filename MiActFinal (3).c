#include <stdio.h>

int main(){

int menu,Payment,fare,change;
int fare1=100, fare2=50, fare3=150;

printf("Your order?\n");
printf("[1]Pepsi(100)\n[2]Orange Juice(50)\n[3]Smoothie(150)\n");
printf("Your Selection:");
scanf("%d",&menu);

switch(menu){

case 1:
printf("Input Payment:");
scanf("%d",&Payment);
if(Payment >= fare1){
change = Payment - fare1;
printf("You have Purchase a Pepsi, Thank you!\n");
printf("change:%d\n",change);
}
else{
printf("You dont have Enough Funds!");
}
break; 

case 2:
printf("Input Payment:");
scanf("%d",&Payment);
if(Payment >= fare2){
change = Payment - fare2;
printf("You have Purchase a Orange Juice, Thank you!\n");
printf("change:%d\n",change);
}
else{
printf("You dont have Enough Funds!");
}
break; 

case 3:
printf("Input Payment:");
scanf("%d",&Payment);
if(Payment >= fare3){
change = Payment - fare3;
printf("You have Purchase a Smoothie, Thank you!\n");
printf("change:%d\n",change);
}
else{
printf("You dont have Enough Funds!");
}



break; 
}



return 0;

}