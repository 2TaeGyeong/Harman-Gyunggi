#include<stdio.h>

#define abs(val) ((val)<0) ? (val*(-1)) : (val)	
void swap(int &a, int &b);

int main()
{
	int i = -100;
	int j = 100;
	float a = -2.0;

	printf("arg1: %d  arg: %d\n", i, j);
	printf("메인에서 swap을 진행함\n");
	swap(i, j);
	printf("swap이 끝남\n");
	printf("arg1: %d  arg: %d\n", i, j);
	//printf("i : %d 일 때 i의 절대값은 %d이다\n", i,abs(-1));
	//printf("a : %f 일 때 a의 절대값은 %f이다\n", a,abs(-2.0));
}

void swap(int &a, int &b)	//call-by-reference: 주소, reference type
{
	int c = a;
	printf("외부 함수에서 swap을 진행함\n");
	printf("arg1: %d  arg: %d\n", a, b);
	a = b;
	b = c;
	printf("arg1: %d  arg: %d\n", a, b);
}


void swap_val(int a, int b)		//call-by-reference
{
	int c;
	c = a;
	a = b;
	b = c;

}
void swap_p(int *a, int *b)	//call-by-reference: 주소,포인터
{
	int c = *a;
	printf("외부 함수에서 swap을 진행함\n"); 
	printf("arg1: %d  arg: %d\n", *a, *b);
	*a = *b;
	*b = c;
	printf("arg1: %d  arg: %d\n", *a, *b);
}

/*
int abs(int val)	//argument val의 절대값 반환	//첫번째 int는 return해줄 때 정수형 반환을 의미
{
	//if (val < 0)	return -val;
	//return val;

	return (val < 0) ? -val : val;	//위의 2줄을 한 문장으로 작성한 것              
}

float abs(float val)	//argument val의 절대값 반환	//첫번째 int는 return해줄 때 정수형 반환을 의미
{
	//if (val < 0)	return -val;
	//return val;
	
	return (val < 0) ? -val : val;	//위의 2줄을 한 문장으로 작성한 것
}
*/