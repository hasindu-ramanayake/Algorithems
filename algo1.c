#include <stdio.h>

int main(){
		int n,j; //decleare variable
		char i;
			
		printf("Enter N: ");
		scanf("%d",&n);	//scan tthe number
		printf("\n");
		for(j=0;j<n;j++){
		for(i='A';i<='A'+j;i++){	// print alpa..
			if(i<='Z'){
				printf("%c",i);
				}else{
					printf("%c",(i-1-'Z'+'A'));	 // print more than z
					}
			}
			printf("\n");
		}
		for(j=n-1;j>=0;j--){		// revers print 
		for(i='A';i<'A'+j;i++){
				if(i<='Z'){
				printf("%c",i);
				}else{
					printf("%c",(i-1-'Z'+'A'));	
					}
			}
			printf("\n");
		}
	
return 0;
}
