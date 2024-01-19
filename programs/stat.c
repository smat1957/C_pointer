#include <stdio.h>
#include <math.h>
#define NINZ (5)

void dinput(int tensu[]){
	for(int i=0; i<NINZ; i++){
		do{
			printf("点数を入力して（%2d人目）：", i+1);
			scanf("%d", &tensu[i]);
		}while(tensu[i]<0||100<tensu[i]);
	}
}

int sum(int tensu[]){
	int s = 0;
	for(int i=0; i<NINZ; i++){
		s += tensu[i];
	}
	return s;
}

void deviation(float hensa[], int tensu[], float mean){
	for(int i=0; i<NINZ; i++){
		hensa[i] = (float)tensu[i] - mean;
	}
}

float variance(float hensa[]){
	float s2=0;
	for(int i=0; i<NINZ; i++){
		s2 += hensa[i]*hensa[i];
	}
	return s2/NINZ;
}

void standardize(float zscore[], float hensa[], float sdev){
	for(int i=0; i<NINZ; i++){
		zscore[i] = hensa[i]/sdev;
	}
}

void doutput(int tensu[], float mean, float variance, float zscore[]){
	for(int i=0; i<NINZ; i++){
		float v = mean + variance * zscore[i];
		printf("%2d人目の点数：%3d\t偏差値：%6.2f\n", i+1, tensu[i], v);
	}
}

int main(){
	int tensu[NINZ];
	float mean, var, sdev, hensa[NINZ], zscore[NINZ];
	dinput(tensu);
	mean = (float)sum(tensu) / NINZ;
	deviation(hensa, tensu, mean);
	var = variance(hensa);
	sdev = sqrt(var);
	printf("\n平均点：%6.2f\t標準偏差：%6.2f\t(分散：%6.2f)\n\n", mean, sdev, var);
	standardize(zscore, hensa, sdev);
	doutput(tensu, 50, 10, zscore);
	return 0;
}
