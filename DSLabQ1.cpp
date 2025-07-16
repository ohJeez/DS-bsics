#include <stdio.h>
int b=1062;

void disp(){
	static int i=10;
	printf("The Value of static variable i is: %d",i++);
}
void reg(){
	register int i=80;
	printf("\nThe Value of Register variable i is: %d",i++);
}

int main(){
	printf("In Global Scope \nThe value of b: %d\n",b);
	int b=602;
	printf("In Local Scope \nThe value of b: %d\n",b);
	disp();
	disp();
	disp();
	reg();
	reg();
	reg();
	return 0;
}
