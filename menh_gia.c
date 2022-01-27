#include <stdio.h>

int count_by_value(int sum_money, int menh_gia){
	int ret = 1;
	while(1){
		if(sum_money - (menh_gia * ret) < 0) return ret-1;
		ret++;
	}
}

const int menh_gia[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

int main(){

	int money = 12341234;

	for(int i=0; i<9; i++){
		int count = count_by_value(money, menh_gia[i]);
		if(count == 0) continue;
		printf("Mệnh giá %dk: %d tờ\n", menh_gia[i], count);
		money -= menh_gia[i]*count;
	}
	return 1;
}