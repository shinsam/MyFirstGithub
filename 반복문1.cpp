#include <stdio.h>

main(){
	//30���� 10������ ¦�� 
	int i=30;
	while(  i >=10   ){
		printf("%d " , i);
		//i = i -2;
		i-=2;
	}
	printf("\n���������� i=%d", i);
	
	
	//���� 10����(i)�� ��(sum)
	printf("\n1���� 10����(i)�� ��(sum) ���ϱ�") ;
	i = 1; 
	int sum=0;
	
	while(i<=100000){
		sum = sum + i;
		i++ ;
	}
	
	printf("\n1���� 10������ �� : %d" , sum );
	
	
}













