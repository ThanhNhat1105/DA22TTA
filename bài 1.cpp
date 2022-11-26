#include <stdio.h>
int main()
{
	float a, b;
	printf("\n nhap he so a: ");
	scanf("%f", &a);
	printf("\n nhap he so b: ");
	scanf("%f", &b);
	if (a==0)
	{
		if (b==0)
		{
			printf("\n Phuong trinh vo so nghiem");
		}
		else
		{
			printf("\n Phuong trinh vo nghiem");
		}
	}
	else
	{
		printf("\n Phuong trinh co nghiem x=%g",-b/a);
	}
	return 0;
}

