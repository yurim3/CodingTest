#include <string.h>
#include <stdio.h>

int main(void) {
	//�迭�� 20���� ������ ��������, ������ ���̴� 3
	char str[20] = "YSY";

	//������ ���̸� ���ϴ� �Լ�
	int length = strlen(str);
	printf("%d \n", length);

	//���ڿ� ���� strcpy(������ ���, ������ ���ڿ�) !!!���� �򰥸��� ����!!!
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	//���ڿ� �����̱� strcat(������ ���, ������ ���ڿ�)
	strcat(copy_str, "Don't go");
	printf("%s \n", copy_str);

	//���ڿ� ���ϱ�
	if (strcmp(str, "YSY") == 0) { //0�� ���� YSY�� ���, 0�� �ƴ� ���� YSY�� �ƴ� ���
		printf("�缭���Դϴ�. \n");
	}
	else {
		printf("�缭���� �ƴմϴ�. \n\n");
	}




	//����1 ���ڿ��� ���� ���ϱ�
	char sstr[30] = "samgyetang";
	int llength = strlen(sstr);
	printf("������� ���̴� %d\n", llength);

	//����2 copy_sstr�� "iceshu" ����ֱ�(�����ϱ�)
	char copy_sstr[30];
	strcpy(copy_sstr, "iceshu");
	printf("������ ���ڿ��� %s \n", copy_sstr);

	//����3 copy_sstr�� "delicious" �����̱�
	strcat(copy_sstr, "delicious");
	printf("������ ���ڿ��� %s \n", copy_sstr);

	//����4 "BMW"�� "benz"�� �� ���ڿ��� ������ �ٸ����� �Ǻ�
	if(strcmp("BMW", "benz") == 0) {
		printf("�� ���ڿ��� �����ϴ�.");
	}
	else {
		printf("�� ���ڿ��� ���� �ʽ��ϴ�.");
	}
}