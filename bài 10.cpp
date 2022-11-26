#include <stdio.h>
int main()
{
  int i,n;
  float s=0, y=0.0;
  do
	{
  printf("nhap gia tri n: ");
  scanf("%d",&n);
 }while (n<1||n>10);
  for(i=0;i<n;i++)
  {
    s+=((2*y+1)/(2*i+2));
    y++;
  }
  
  printf("Tong: %f",s);
  return 0;
} 
