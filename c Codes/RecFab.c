#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 4

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

int main()
{
   int value, choice;
   
   
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
	 	 break;
	 case 4: exit(0);
	 
		 break;
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
