#include<stdio.h>
void main() {
	int data[6] = { 0,3,6,9,12,15 }, i;

	int* p = data;	//把数组的首地址初始化给指针变量p，那么p指向数组data
	
	//下标法
	for (i = 0; i < 6; i++) {
		printf(i == 3 ? "%d\n" : "%d ", data[i]);
		printf("\n%p", p + i);
	}
	//地址法
	for (i = 0; i < 6; i++) {
		printf(i == 3 ? "%d\n" : "%d ", *(data + i));
	}
	//下标法
	for (i = 0; i < 6; i++) {
		printf(i == 3 ? "%d\n" : "%d ", p[i]);
	}
	printf("地址法");
	for (i = 0; i < 6; i++) {
		printf(i == 3 ? "%d\n" : "%d ", *(p + i));
	}
	

}
 
	
		
			
				
					