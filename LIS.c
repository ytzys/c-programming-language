#include<stdio.h>
#include<stdlib.h>

typedef struct element {
	int current_length;
	int last_num_seq;
} elem;

int main() {
	int array[6] = {5, 3, 4, 8, 6, 7};	
	elem result[6];
	result[0].current_length = 1;
	result[0].last_num_seq = -1;
	int i, j, max_length, max_index;
	max_length = 1;
	max_index = 0;
	for(i = 1; i < 6; i++) {
		result[i].current_length = 1;
		result[i].last_num_seq = -1; 
		for(j = 0; j < i; j++) {
			if(array[j] < array[i] && result[i].current_length < 1 + result[j].current_length) {
				result[i].current_length = result[j].current_length + 1;
				result[i].last_num_seq = j;
			}		
		}	
		if(max_length < result[i].current_length) {
			max_length = result[i].current_length;
			max_index = i;
		}
	}
	printf("longest increasing sequence length is:%d\n", max_length);
	printf("longest increasing sequence is(reversed):\t");
	i = max_index; 
	while(result[i].current_length != 1) {
		printf("%d\t", array[i]);
		i = result[i].last_num_seq;	
	}	
	printf("%d\t", array[i]);
	return 0;	
}
