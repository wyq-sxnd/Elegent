//�ҳ��������ѧ���Լ��䲻����ĳɼ�
//����һ��������ungood������ѧ���ɼ��ͼ����߱Ƚ�
#include<stdio.h>
#include<stdlib.h>//��̬�����ڴ��
int main() {
	//������Ӧ����ȥ���ѧ����Ϣ
	//������������Ϣ

	int num_studints;//�˴�Ϊ����
	printf_s("������ѧ��������");
	scanf_s("%d", &num_studints);

	//��̬����ָ������洢����
	char** names = (char**)malloc(num_studints * sizeof(char*));
	if (names == NULL) {
		fprintf(stderr, "����");//�����������
		return 1;
	}

	//��̬��������������ɼ�
	int* scores = (int*)malloc(num_studints * sizeof(int));
	if (names == NULL) {
		fprintf(stderr, "����");//�����������
		return 1;
	}

	//������Ϣ


	for (int i = 1; i < num_studints; i++) {
		printf("�������%d��ѧ��������", i + 1);
		char name[100];//����һ������������
		scanf_s("%99s", name);
		names[i] = (char*)malloc(strlen(name) + 1); // Ϊ���ַ����ڴ�
		if (names == NULL) {
			fprintf(stderr, "����");//�����������
			return 1;
		}
		//�ͷ��ѷ�����ڴ棨i-1��
		for (int j = 0; j < i; j++) {
			free(names[j]);
			free(names);
			free(scores);
			return 1;
		}
		strcpy(names[i], name);//�������ֵ���Ӧ�ڴ���
		printf("�������%d��ѧ���ĳɼ�", i + 1);
		scanf_s("%d", &scores[i]);//��ȡ�ɼ�



		//��ӡ���ּ��ɼ�
		for (int i = 0; i < num_studints; i++) {

			printf(" % s % d", names[i], scores[i]);
		}
		//�ͷ��ڴ�
		for (int i = 0; i < num_studints; i++) {
			free(names[i]); // �ͷ�ÿ�����ֵ��ڴ�
		}
		free(names); // �ͷ�����ָ��������ڴ�
		free(scores); // �ͷųɼ�������ڴ�

		return 0;
	}
}

















	