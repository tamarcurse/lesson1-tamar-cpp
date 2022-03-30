#include <iostream>
#include "lessson1.h"
#include <math.h>
//23
int ShiftLeft(int n, int k) {
	int pow1 = pow(2, k);
	int KBitRight = n % pow1;
	n >>= k;
	KBitRight <<= (sizeof(int))*8-k;
	return  (n | KBitRight);
}
//24
int XOR_(int num1, int num2) {
	return (num1 | num1) - (num1 & num2);
}
//20
int Swap(int num) {
	int even = num & 0xAAAAAAAA;

	int odd = num & 0x55555555;
	return even >> 1 | odd << 1;
}
//41
int Square(int num)
{
    int odd = 1;
    int squre = 0;
    num = abs(num);
    while (num--)
    {
        squre +=odd;
        odd += 2;
    }

    return squre;
}
//47
int Min(int num1, int num2) {
	int subRes = num1 - num2;
	subRes >>= sizeof(int) * 8 - 1;
	if (subRes)
		return num1;
	return num2;
}


