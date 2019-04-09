#include<stdio.h>

int stack[10], top=-1, n=10, i, input;

void push();
void display();

int main(){
	for(i=0;i<10;i++){
		push();
	}
	display();

	return 0;
}

void push(){
	if (top >= n-1){
		printf("String is full\n");
	}
	else{
		printf("Enter number to add to stack: \n");
		scanf("%d", &input);
		top++;
		stack[top]=x;
	}
}

void display(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		for (i=0;i<10;i++){
			printf("%d\t", stack[i]);
		}
		printf("\n");
	}
}