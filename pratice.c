#include<stdio.h>
void main() {
	int data[6] = { 0,3,6,9,12,15 }, i;

	int* p = data;	//��������׵�ַ��ʼ����ָ�����p����ôpָ������data
	
	//�±귨
	for (i = 0; i < 6; i++) {
		printf(i == 3 ? "%d\n" : "%d ", data[i]);
		printf("\n%p", p + i);
	}
	//��ַ��
	for (i = 0; i < 6; i++) {
		printf(i == 3 ? "%d\n" : "%d ", *(data + i));
	}
	//�±귨
	for (i = 0; i < 6; i++) {
		printf(i == 3 ? "%d\n" : "%d ", p[i]);
	}
	printf("��ַ��");
	for (i = 0; i < 6; i++) {
		printf(i == 3 ? "%d\n" : "%d ", *(p + i));
	}
	

}
 
	
		
			
				
					