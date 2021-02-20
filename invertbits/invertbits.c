#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
	return x & (~((~(~0 << n)) << (p - n + 1))) | (((~((x & ((~(~0 << n)) << (p - n + 1))) >> (p - n + 1))) & (~(~0 << n))) << (p - n + 1));

}
int main()
{
	unsigned int ret;

	ret=invert(0174, 5, 3);
	printf("%d\n", ret);
	return 0;
}