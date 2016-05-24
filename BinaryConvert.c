#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int num,char** argv){
	int i,j,k=0,sum=0,binary[32];			// define variables
	int hex[7];
	double max = pow(2,32);
	if(argv[1][0]!='-' || argv[3]==NULL){			// if gives wrong inputs
		printf("./binconvert-<input format>-<output format> <input>\n");
		return 1;

	}else{


	if(argv[1][1]=='B'){				// conver char array to binary
		for(i=0;i<32;i++){
			if(argv[3][i]=='1'){
			binary[i]=1;	
			}else{
			binary[i]=0;
			}
		}

		

	if(argv[2][1]=='B'){
		for(i=0;i<32;i++){
		printf("%d",binary[i]);		// change binary to binary
		}
	}else if(argv[2][1]=='I'){		// change binary to integer

		for(i=31;i>0;i--){
		double multi = pow(2,(31-i));
		sum =sum + (binary[i]*multi); 
		}
		if (binary[0]==0){
			printf("%d",sum);
		}else if (binary[0]==1){
			sum = ((int)max-sum)*(-1);
			printf("%d",sum);
		}
		
	}else if(argv[2][1]=='H'){		//change binary to hex
		for(i=31;i>0;i--){			
		double multi = pow(2,(31-i));		//first change binary to int then int to hex
		sum =sum + (binary[i]*multi); 
		}
		if (binary[0]==0){
			printf("0x%08X",sum);
		}else if (binary[0]==1){
			sum = ((int)max-sum)*(-1);
			printf("0x%08X",sum);
		}

	}
	




	}else if(argv[1][1]=='H'){			//change char to hexa;
		j=31;
		for(i=0;i<8;i++){	
			if(argv[3][i]=='1'){
			hex[i]=1;
			}else if(argv[3][i]=='2'){
			hex[i]=2;
			}else if(argv[3][i]=='3'){
			hex[i]=3;
			}else if(argv[3][i]=='4'){
			hex[i]=4;
			}else if(argv[3][i]=='5'){
			hex[i]=5;
			}else if(argv[3][i]=='6'){
			hex[i]=6;
			}else if(argv[3][i]=='7'){
			hex[i]=7;
			}else if(argv[3][i]=='8'){
			hex[i]=8;
			}else if(argv[3][i]=='9'){
			hex[i]=9;
			}else if(argv[3][i]=='A'){
			hex[i]=10;
			}else if(argv[3][i]=='B'){
			hex[i]=11;
			}else if(argv[3][i]=='C'){
			hex[i]=12;
			}else if(argv[3][i]=='D'){
			hex[i]=13;
			}else if(argv[3][i]=='E'){
			hex[i]=14;
			}else if(argv[3][i]=='F'){
			hex[i]=15;
			}else{
			hex[i]=0;			
			}
		}
		if(argv[2][1]=='H'){			// change hex to hex
			/*for(i=0;i<8;i++){*/
			printf("0x%s",argv[3]);
		}else if (argv[2][1]=='I'){		// change hex to integer

			for (i=7;i>=0;i--){		//first change hex to binary and then change to int
				k=0;
			while(k<4 || hex[i]>0){
    				binary[j]=hex[i]%2;
    				hex[i]=hex[i]/2;
		  		j--;
				k++;
			}

			}

			
			for(i=31;i>0;i--){
				double multi = pow(2,(31-i));
				sum =sum + (binary[i]*multi); 
			}
			if (binary[0]==0){
				printf("%d",sum);
			}else if (binary[0]==1){
				sum = ((int)max-sum)*(-1);
				printf("%d",sum);
			}
		}else if(argv[2][1]=='B'){		// change hex to binary

			for (i=7;i>=0;i--){
				k=0;
			while(k<4 || hex[i]>0){
    				binary[j]=hex[i]%2;
    				hex[i]=hex[i]/2;
		  		j--;
				k++;
			}

			}

			for(i=0;i<32;i++){
				printf("%d",binary[i]);	
			}
			

		}

	}
	




	else if(argv[1][1]=='I'){		// convert char to integer
		float temint =atof(argv[3]);
		int integer = (int)temint;	
		if(argv[2][1]=='B'){		// change int to binary
			for(j=0;j<32;j++){
    			binary[j]=0;

			}
			i=31;
			if(integer>=0){	
				while(integer>0){
    				binary[i]=integer%2;
    				integer=integer/2;
    				i--;
				printf("%d\n",integer);

				}
			}else if(integer<0){
				integer = (int)max+integer;
				while(integer>0){
    				binary[i]=integer%2;
    				integer=integer/2;
    				i--;
				}			
			binary[0]=1;
			}

			
			for(j=0;j<32;j++){
    			printf("%d",binary[j]);
			}

		
		}else if(argv[2][1]=='H'){		// change int to hex
			printf("0x%08X",integer);
		}else if(argv[2][1]=='I'){		// change int to int
			printf("%d\n",integer);
		}else if(argv[2][1]=='F'){		// change int to float
			printf("%.2f\n",(float)integer);
		}





	



	}

	else if(argv[1][1]=='F'){		// convert char to float 
		float flo =atof(argv[3]);
		

		if(argv[2][1]=='F'){		// change float to float
			printf("%.2f",flo);
		}else if(argv[2][1]=='I'){	// change float to int
			printf("%d",(int)flo);
		}
			




		
	}
}
return 0;
}



