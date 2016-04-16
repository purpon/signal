#include <stdio.h>

enum {RED,GREEN,BLUE};
void printf_color(int);
void(*Sfunc(int ,void(*)(int )))(int);

void print_color(int color)
{
	switch (color)
	{
		case RED:
			printf("color is Red\n");
			break;
		case GREEN:
			printf("color is GREEN\n");
			break;
		case BLUE:
			printf("color is Blue\n");
		break;
	}

}

void (*Sfunc(int a,void(*fptr)(int )))(int b)
{
	printf("Enter the signal function \n");
	fptr(a);
	
	return fptr;
}


int main()
{
	typedef	void(*(*SIGNAL)(int ,void (*)(int)))(int);
	SIGNAL signal;
	signal=&Sfunc;
	Sfunc(RED,print_color)(GREEN);
	signal(BLUE,print_color)(RED);
	return 0;
}
