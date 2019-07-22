#include<stdio.h>
int main(){
	int a,b, result;
	char x;
	printf("select any operation (+,-,*,/) \n");
	scanf("%c", &x);
	printf("enter any two numbers \n");
	scanf("%d %d", &a,&b);
	switch(x){
		case '+':
		result = a+b;
		break;
		case '-':
		result = a-b;
		break;
		case '*':
		result = a*b;
		case '/':
		result = a/b;
		break;
		default :
			printf("invalid \n");
	}
	printf("your ans is %d", result);
}
