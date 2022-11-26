#include <stdio.h>
int main()
{
	int i, n, s;
	do
	{
	printf("\n nhap gia tri n:");
	scanf("%d", &n);
	}while (n<1||n>10);
	s=0;
	while (i<=n)
		{
			s+=(i*i);
			i++;
		}
		printf("\n gia tri tong: %d", s);
	return 0;
}
