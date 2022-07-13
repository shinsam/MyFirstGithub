#include <stdio.h>
main(){
	// 5 , 3  : 12가 나오면 정답 
	int i , n , sum = 0;
    int large = i;
    
	printf("큰  수 입력 : ");	
    scanf("%d", &i);
	
	printf("작은수 입력 : ");	
    scanf("%d", &n);
    
    while(i >= n){
    	sum = sum + i;  //sum += i
    	i--;
	}
	printf("%d부터 %d까지의 합은 %d입니다\n",large, n, sum); 
}
