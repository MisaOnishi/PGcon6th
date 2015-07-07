//package Pgcon6th.procon;
//思い立ってC言語で書いています

#include <stdio.h>

int main()
{
	int L;
	int N;
	int bou[256];
	printf("作成する棒の長さを入力してください");
	scanf("%d",&L);
	printf("使う棒の数を入力して下さい");
	scanf("%d",&N);
	printf("使う棒を入力して下さい");
	scanf("%d",bou);
	
	int i;													//最初のループ制御用の変数
	int k;													//2回目のループ制御用の変数
	int x;													//iやkの値を変えないために使う
	int boucount =1;										//使った棒の数を数える
	int kekkacount;											//条件に合った組み合わせの数を数える
	for(i=o;i<255;i++)
	{														//格納スペースのすべて
		if(bou[i] !='\0')
		{													//中に要素がなくなるまで
			for(i=k;k<N-1;)
			{
				x = k+1;
				bou[k] + bou[x];
				boucount++;
				x++;
				if(boucount == N)
				{
				
				}
			}
		}else{
			break;
		}
	}
	printf("組み合わせは%d通り",kekkacount);
}
