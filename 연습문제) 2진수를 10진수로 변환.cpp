#include <stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1};
	
	for(int index = 3; index >= 0; index--){
	// 2�� n�� ����
		int result = 1;
		for(int n = 0; n <index; n++){
			result *= 2;
		}
	// binary[index] == 1�̸� decimal ���ϱ� 
	}
	
	printf("%d\n", decimal);
	return 0;
 } 
