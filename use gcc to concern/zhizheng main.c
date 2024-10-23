//找出不及格的学生以及其不及格的成绩
//定义一个函数“ungood”来将学生成绩和及格线比较
#include<stdio.h>
#include<stdlib.h>//动态分配内存库
int main() {
	//定义相应数组去存放学生信息
	//建立数组存放信息

	int num_studints;//此处为变量
	printf_s("请输入学生数量：");
	scanf_s("%d", &num_studints);

	//动态分配指针数组存储名字
	char** names = (char**)malloc(num_studints * sizeof(char*));
	if (names == NULL) {
		fprintf(stderr, "错误");//用于输出错误
		return 1;
	}

	//动态分配数组来储存成绩
	int* scores = (int*)malloc(num_studints * sizeof(int));
	if (names == NULL) {
		fprintf(stderr, "错误");//用于输出错误
		return 1;
	}

	//输入信息


	for (int i = 1; i < num_studints; i++) {
		printf("请输入第%d个学生的名字", i + 1);
		char name[100];//定义一个数组存放名字
		scanf_s("%99s", name);
		names[i] = (char*)malloc(strlen(name) + 1); // 为名字分配内存
		if (names == NULL) {
			fprintf(stderr, "错误");//用于输出错误
			return 1;
		}
		//释放已分配的内存（i-1）
		for (int j = 0; j < i; j++) {
			free(names[j]);
			free(names);
			free(scores);
			return 1;
		}
		strcpy(names[i], name);//复制名字到相应内存中
		printf("请输入第%d个学生的成绩", i + 1);
		scanf_s("%d", &scores[i]);//读取成绩



		//打印名字及成绩
		for (int i = 0; i < num_studints; i++) {

			printf(" % s % d", names[i], scores[i]);
		}
		//释放内存
		for (int i = 0; i < num_studints; i++) {
			free(names[i]); // 释放每个名字的内存
		}
		free(names); // 释放名字指针数组的内存
		free(scores); // 释放成绩数组的内存

		return 0;
	}
}

















	