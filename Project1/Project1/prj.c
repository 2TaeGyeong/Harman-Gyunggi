#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	//ǥ�� ��� ����(����¿� ���õ� ��� ������ ����)
#include <malloc.h>

void MemoryDump(int start, int length);	//�Լ��� prototype
char buf[200];

int main(int argc, char *argv[])	// pointerSample 10000 500    // Command Line ��ɾ�
									// 10000: Start memory �ּ�  500: Dump�� �޸� ũ��
{
	
	int start = 0x09000000;
	int length = 500;
	
	char c = 'A';
	int i = 1;
	float a = 2.0;
	double d = 3.14;
	void *p = malloc(100); // malloc�� �޸� ������ Ȯ��(HEAP ������)

	*(double *)p = d;
	
	MemoryDump((int)buf, length);
}


void MemoryDump(int start, int length)
{
	char *cp = buf;
	int i = 0;	//index ���� �ʱⰪ 0
	
	// void �����͸� char �����ͷ� ��ȯ�ؼ� ������ ��
	while (i < length)	//���� ����: i<length
	{
		//char *c = (char *) vp;	//char *�� char ������ vp�� �ٲ��ִ� ��	
		//char c = *cp;
		//i++;
		char c = *((char *)cp+i++);	//���� �����ִ� �ڵ� 3���� �� �ٷ� ��Ÿ�� ��
		printf("%02x  ", c);
	}
}
