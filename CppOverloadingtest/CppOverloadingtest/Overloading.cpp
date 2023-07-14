#include<stdio.h>

#define abs(val) ((val)<0) ? (val*(-1)) : (val)	
void swap(int &a, int &b);

int main()
{
	int i = -100;
	int j = 100;
	float a = -2.0;

	printf("arg1: %d  arg: %d\n", i, j);
	printf("���ο��� swap�� ������\n");
	swap(i, j);
	printf("swap�� ����\n");
	printf("arg1: %d  arg: %d\n", i, j);
	//printf("i : %d �� �� i�� ���밪�� %d�̴�\n", i,abs(-1));
	//printf("a : %f �� �� a�� ���밪�� %f�̴�\n", a,abs(-2.0));
}

void swap(int &a, int &b)	//call-by-reference: �ּ�, reference type
{
	int c = a;
	printf("�ܺ� �Լ����� swap�� ������\n");
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
void swap_p(int *a, int *b)	//call-by-reference: �ּ�,������
{
	int c = *a;
	printf("�ܺ� �Լ����� swap�� ������\n"); 
	printf("arg1: %d  arg: %d\n", *a, *b);
	*a = *b;
	*b = c;
	printf("arg1: %d  arg: %d\n", *a, *b);
}

/*
int abs(int val)	//argument val�� ���밪 ��ȯ	//ù��° int�� return���� �� ������ ��ȯ�� �ǹ�
{
	//if (val < 0)	return -val;
	//return val;

	return (val < 0) ? -val : val;	//���� 2���� �� �������� �ۼ��� ��              
}

float abs(float val)	//argument val�� ���밪 ��ȯ	//ù��° int�� return���� �� ������ ��ȯ�� �ǹ�
{
	//if (val < 0)	return -val;
	//return val;
	
	return (val < 0) ? -val : val;	//���� 2���� �� �������� �ۼ��� ��
}
*/