#include<stdio.h>
#include<stdlib.h>

typedef struct element{
	int total_coin_num;
	int coin_used; 
	int sub_question_seq;
	//struct element* next;
} elem;

int main() {
	//elem a[11] = (elem *)malloc(11 * sizeof(elem));
	elem a[11];
//	&a[10] = (elem *)malloc(sizeof(elem));
	a[10].total_coin_num = 11;
	printf("p->total_coin_num =%d", a[10].total_coin_num);
	return 0;	
}
