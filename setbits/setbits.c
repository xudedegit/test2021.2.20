#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//���ý�x��pλ��ʼ��n��λ����Ϊy�����ұߵ�nλ��ֵ������ֵ����

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