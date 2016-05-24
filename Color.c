#include <stdio.h>
#include <stdlib.h>

int main(){
	int red,green,blu;
	int cred,cgreen,cblu,ccred,ccgreen,ccblu;	//define vari
	printf("Enter the color: ");			
	scanf("%d %d %d",&red,&green,&blu);		//scan real r g b
		
	if( (red>255) || (green>255) || (blu>255) )
	{		
	printf("Enter valid input");		// if the input is invalid
	}
	else{
						
	cred= 255-red;				//reduce from 255
	cgreen = 255-green;
	cblu= 255-blu;
	ccred=abs(cred-red);			//get the absolute values
	ccgreen=abs(cgreen-green);
	ccblu=abs(cblu-blu);


	if (ccred<32){			//check <32
	red=red+128;	
	}else{
	red=cred;
	}
	if (ccgreen<32){		//check <32
	green=green+128;	
	}else{
	green=cgreen;
	}if (ccblu<32){			//check <32
	blu=blu+128;	
	}else{
	blu=cblu;
	}

	if(red>255){			//check the values of red is valid
	red=red-256;
	}
	if(green>255){			////check the values of green is valid
	green=green-256;
	}
	if(blu>255){			//check the values of blue is valid
	blu=blu-256;
	}
	printf("The complement: %d %d %d\n",red,green,blu);	//print complement
	}




return 0;
}
