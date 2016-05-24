#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	printf("Enter the coefficients:"); 
	scanf("%f %f %f",&a,&b,&c);
	
	double delta = (b*b)-(4*a*c);
	double x1,x2,sq;
	if (delta>0){
		sq = pow(delta,0.5);
		x1=(-b-sq)/(2*a);
		x2=(-b+sq)/(2*a);
	printf("The solutions are: %.2f and %.2f",x1,x2);
			
	
	}else if(delta==0){
		x1=-b/(2*a);
		printf("The solution is: %.2f",x1);
	
	}

	else{
		sq = pow(-delta,0.5);
		x1=(-b)/(2*a);
		sq=sq/(2*a);
	if (x1==0){		
		printf("The solutions are: -%.2fi and %.2fi\n",sq,sq);
	}else{
	printf("The solutions are: %.2f-%.2fi and %.2f+%.2fi\n",x1,sq,x1,sq);
	}

	}

	
	



return 0;
}
