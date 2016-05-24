#include <stdio.h>
#include <stdbool.h>
#define true 1
#define false 0 

int main(){					//give the number data type
int number;
printf("Enter a number: ");
scanf("%d",&number);				//scan the number
bool special,big,weird,scary = false;		//


if (number%15==0){		//check the number is special
special = true;
}
if(number>999){			////check the number is big
big=true;
}
if(number%5==0){
	if(number%6==0){		//check the number is weird
		if(number%18!=0){
		weird=true;
		}	
	}
}
if(big==true || weird==true){			//check the number is scary
scary=true;
}


if(special==true && big==true && weird==true && scary==true){			// printing the output
	printf("%d is special, big, weird and scary.",number);
}else if(special==true && big==true && weird==false && scary==true){
	printf("%d is special, big and scary but not weird.\n",number);
}else if(special==true && big==false && weird==true && scary==true){
	printf("%d is special,weird and scary but not big.\n",number);
}else if(special==true && big==false && weird==false && scary==false){
	printf("%d is special but not scary.\n",number);
}else if(special==false && big==true && weird==true && scary==true){
	printf("%d is not special but big, weird and scary.",number);
}else if(special==false && big==true && weird==false && scary==true){
	printf("%d is not special, big and scary but not weird.\n",number);
}else if(special==false && big==false && weird==true && scary==true){
	printf("%d is not special or big but weird and scary.",number);
}else if(special==false && big==false && weird==false && scary==false){
	printf("%d is not special or not scary.\n",number);
}

return 0;
}
