#include<stdio.h>
//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int ret = 0;
//				ret = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = ret;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 112,4,78,956,54,85478,6464,8,878,46415,487 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//bubble-泡，气泡
//sort-分类，排序，种类
//qsort-快速排序

//int main()
//{
//	int a = 10;
//	char* p = (char*) & a;
//	*p = 3;
//	p++;
//	void* d = &a;
//	//d++;//错误
//	//*d = 5;//错误
//	return 0;
//}
//void* 类型的指针  可以接收任意类型的地址，不需要强制转换
//void* 类型的指针  不能进行解引用操作          -void*没有确定的类型,解引用的字节不确定
//void* 类型的指针  不能进行加减正数的操作      -void*不能确定步长
#include<stdlib.h>
//int compar(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int arr[] = { 8,7,95,12,3,4,5,6,41,78 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz , sizeof(arr[0]), compar);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//字符串排序
#include<string.h>
//int cmp_char(const void* a, const void* b)
//{
//	//if (*(char*)a > *(char*)b)
//	//	return 1;
//	//else if (*(char*)a < *(char*)b)//字符串排序要用strcmp，不能用><=但是这个也能排序，有疑问！
//	//	return -1;
//	//else
//		return strcmp((char*)a,(char*)b);
//}
//int main()
//{
//	char arr[] = "saidbhfiu";
//	int sz = strlen(arr);
//	printf("%d\n", strlen(arr));
//	qsort(arr, sz, sizeof(char), cmp_char);
//	int s = 0;
//	for (s = 0; s < sz; s++)
//	{
//		printf("%c\n", arr[s]);
//	}
//	return 0;
//}


//浮点数排序
//int cmp_float(const void* a, const void* b)
//{
//	if (*(float*)a > *(float*)b)
//	{
//		return 1;
//	}
//	else if (*(float*)a < *(float*)b)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	float arr[] = { 5.0,7.0,2.0,6.0,9.0,8.0,3.0,2.0,0.8,0.5 };
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(float), cmp_float);
//	int s = 0;
//	for (s = 0; s < sz; s++)
//	{
//		printf("%f\n", arr[s]);
//	}
//	return 0;
//}



//结构体的排序
//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;
//int cmp_stu_age(const void* a, const void* b)
//{
//	return ((stu*)a)->age - ((stu*)b)->age;	
//}
//int cmp_stu_name(const void* a, const void* b)
//{
//	比较名字就是比较字符串
//	字符串比较不能用><=，应该用strcmp函数
//	return strcmp((*(stu*)a).name, ((stu*)b)->name);
//}
//int main()
//{
//	stu s[3]= {{"张三",32},{"李四",24},{"王五",50}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d \n", s[i].name,s[i].age);
//	}
//	return 0;
//}

//int main()
//{
//	char ch [] = {'a','c',0};
//	printf("%s\n", ch);
//	return 0;
//}

//int main()
//{
//	char a[] = { "是" };
//	printf("%s\n", a);
//	return 0;
//}




//void Swap(char* q,char* e,int width)
//{
//	for (int w = 0; w < width; w++)
//	{
//		char tmp = *q;
//		*q = *e;
//		*e = tmp;
//		q++;
//		e++;
//	}
//}
//void bubble_sort(void* arr,int sz,int width,int(*cmp)(void* a,void* b))
//{
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
//			{
//				Swap((char*)arr + j * width, (char*)arr + (j + 1)*width, width);
//			}
//		}
//	}
//}
//int cmp_int(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,5,4,1,3,9,2,48 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int cmp_stu(const void* a, const void* b)
//{
//	return strcmp((char*)a, (char*)b);
//}
//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;
//void test2()
//{
//	stu arr[] = { {"张三",30},{"李四",40},{"王五",50}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu);
//	for (int w = 0; w < sz; w++)
//	{
//		printf("%s %d\n", arr[w].name, arr[w].age);
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}