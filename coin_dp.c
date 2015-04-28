#include<stdio.h>
#include<stdlib.h>

typedef struct element{
	int total_coin_num;
	int coin_used; 
	int sub_question_seq;
	//struct element* next;
} elem;

int main() {
	int coin[3] = {1, 3, 5};
	elem a[12];
	a[0].total_coin_num = 0;
	a[0].coin_used = 0;
	a[0].sub_question_seq = 0;
	int i, j;
	for(i = 1; i <= 11; i++) {
		int result_total_coin_num = 100;
		for(j = 0; j < 3; j++) {
			if(coin[j] <= i && 1 + a[i - coin[j]].total_coin_num < result_total_coin_num) {
				a[i].coin_used = coin[j];
				a[i].sub_question_seq = i - coin[j];
				a[i].total_coin_num = 1 + a[i - coin[j]].total_coin_num; 
				result_total_coin_num = 1 + a[i - coin[j]].total_coin_num;
			}

		}
	}	
	printf("input a number...\n");
	while(scanf("%d", &i)) {
		printf("total coin num: %d\n", a[i].total_coin_num);
		printf("coin used: %d\t", a[i].coin_used);
		while(a[i].sub_question_seq >= 0) {
			i = a[i].sub_question_seq;
			printf("%d\t", a[i].coin_used);	
			if(i == 0) {
				break;
			}
		}	
		printf("input a number...\n");
	}
	return 0;
}
