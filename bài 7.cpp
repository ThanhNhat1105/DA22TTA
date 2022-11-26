#include <stdio.h>
int main()
{
  int i,n;
  float s=1;
  do
	{
  printf("nhap gia tri n: ");
  scanf("%d",&n);
 }while (n<1||n>10);
	
  for(i=1;i<=n;i++)
  {
    s+=(1.0/(2*i+1));
  }
  printf("Tong: %f",s);
  return 0;
} 
