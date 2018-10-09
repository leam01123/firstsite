#include <stdio.h>           /**/
#include <stdlib.h>          /**/
#include <string.h>          /**/ 
#include <stdbool.h>         /**/
int main (){
int a,c,d;
char b [20];
printf("Enter your password: ");
scanf("%d", &a);
switch (a){
      case 112: printf("\npassword correct \ndo you want to get into the computer?" );
                scanf("%s", &b);
                if (b=="yes"){
                            printf("ok\nnow you have totally acsess to the computer\n");
                            };
      break;
      default:do{
                 printf("password incorrect\n");
                 printf("if you want to get in you have to run again the programm and insert the right password\nEnter the password: ");
                 scanf ("%d", &a);
              }while (a=!112);
      break;
}
return(0);
}
