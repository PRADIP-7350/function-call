#include<stdio.h>
void change(int *num){
	printf("before adding value inside function num=%d",*num);
	*num=*num+100;
	printf("after adding value inside function num=%d",*num);
}
int main(){
	int x=100;
	printf("before function call x=%d\n",x);
	change(&x); //passing value in function
	printf("after function call x=%d\n",x);
	return 0;
}
