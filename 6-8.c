#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for ( i=501 ; i<=1000 ; i=i+2 ) {
		hap = hap + i ;
	}

	printf(" 500���� 1000������ Ȧ���� ��: %d \n", hap);
}
