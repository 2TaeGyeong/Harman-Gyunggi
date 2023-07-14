#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	//표준 헤더 파일(입출력에 관련된 모든 정보가 있음)
#include <malloc.h>

void MemoryDump(int start, int length);	//함수의 prototype
char buf[200];

int main(int argc, char *argv[])	// pointerSample 10000 500    // Command Line 명령어
									// 10000: Start memory 주소  500: Dump할 메모리 크기
{
	
	int start = 0x09000000;
	int length = 500;
	
	char c = 'A';
	int i = 1;
	float a = 2.0;
	double d = 3.14;
	void *p = malloc(100); // malloc은 메모리 공간을 확보(HEAP 영역에)

	*(double *)p = d;
	
	MemoryDump((int)buf, length);
}


void MemoryDump(int start, int length)
{
	char *cp = buf;
	int i = 0;	//index 변수 초기값 0
	
	// void 포인터를 char 포인터로 변환해서 보내는 것
	while (i < length)	//수행 조건: i<length
	{
		//char *c = (char *) vp;	//char *는 char 형으로 vp를 바꿔주는 것	
		//char c = *cp;
		//i++;
		char c = *((char *)cp+i++);	//위에 나와있는 코드 3줄을 한 줄로 나타낸 것
		printf("%02x  ", c);
	}
}
