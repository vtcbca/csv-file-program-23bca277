#include<stdio.h>
#include<conio.h>

int main(){
	int s,e,i;
	
	
	printf("enter starting num : \n");
	scanf("%d",&s);
	printf ("enter ending num : \n");
	scanf("%d",&e);
	
	for(i=s;i<=e;i++){
		if(i%2==0){
			printf("num %d is even \n",i);
		}else{
				printf("num %d is odd \n",i);
		}
	}


	return 0;
}
