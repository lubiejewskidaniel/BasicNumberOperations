/*To accomplish this task I decided to ask user in this program to input 2 numbers and then to display menu for better user experience. 
I used if/else if statements to build up menu. In case if user will type in anything else than menu requirements will be informed of “Incorrect option”.
Also I used while loop to keep menu always displayed.
I also added option 4 to the menu to change variables during program operating for program flexibility, and option 6 to finish program anytime user decide to.
*/

#include <stdio.h>

int main(void) {
  //declaration of two variables
  int a;
  int b;
  int opt;
  
  printf("Enter an integer a: "); //asking user to input 1st integer
  scanf("%d", &a); //reading 1st number

  printf("Enter an integer b: ");//asking user fo 2nd integer
  scanf("%d", &b);//reading 2nd number

  while (1==1)
  {
  printf("\n\nChoose calculation to be executed:\n1-Adding\n2-Subtracting\n3-Multiplaying\n4-Dividing\n5-Change pair of your numbers\n6-Finish program\n");
  //displaying form of menu and asking user to choose wanted option
  scanf("%d", &opt); //reading user choice

    if (opt == 1){//option 1
       printf("\nThe answer to add is %d\n", a+b); //result of addition 1st and 2nd number
    }else if (opt==2){//option 2
       printf("\nThe answer to subtract is %d\n", a-b); //result of subtraction 1st and 2nd number
    }else if (opt==3){//option 3
       printf("\nThe answer to multiply is %d\n", a*b); //result of multiplication 1st and 2nd number
    }else if (opt==4){//option 4 
       printf("\nThe answer to divide is %.2f\n", (float)a/b); //result of division 1st and 2nd number
    }else if (opt==5){
      printf("\nChange pair of your numbers: \n");
      printf("Enter a: ");
      scanf("%d", &a);
      printf("Enter b: ");
      scanf("%d", &b);
    } else if (opt == 6){
      break;
    }else{ //statement in case if incorrect menu number selected
      printf("Incorrect option\n\n");
    }
    }
}
