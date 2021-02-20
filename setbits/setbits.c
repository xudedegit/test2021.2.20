#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//设置将x从p位开始的n个位设置为y中最右边的n位的值，其余值不变

unsigned setbits(unsigned x,unsigned int p,unsigned int n, unsigned y)
{
	
	return (x & (~((~(~0<<n))<<(p-n+1)))) | ((y & (~(~0 << (n)))) << (p - n + 1));
	

}
int main()
{
	unsigned int ret;
	ret = setbits(0116, 5, 3, 0167);
	printf("%d", ret);

	return 0;
}