#include <stdio.h>

main(){
	//30부터 10까지의 짝수 
	int i=30;
	while(  i >=10   ){
		printf("%d " , i);
		//i = i -2;
		i-=2;
	}
	printf("\n루프종료후 i=%d", i);
	
	
	//부터 10까지(i)의 합(sum)
	printf("\n1부터 10까지(i)의 합(sum) 구하기") ;
	i = 1; 
	int sum=0;
	
	while(i<=100000){
		sum = sum + i;
		i++ ;
	}
	
	printf("\n1부터 10까지의 합 : %d" , sum );
	
	
}













