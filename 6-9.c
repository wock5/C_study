#include <stdio.h>

void main()
{
	int hap=0;
	int i;
	int num;

	printf(" �� �Է� : ");
	scanf("%d", &num);

	for ( i=1 ; i <= num ; i++) {
		hap = hap + i;
	}
	
	printf(" 1���� %d������ ��: %d \n", num, hap);
}
