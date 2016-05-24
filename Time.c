#include <stdio.h>

int main(){
	int time;	
	printf("Enter the start time: ");	
	scanf("%d",&time);	//take time from the user
	int mm;
	int hh;
	double tem;	//use temparary varaiable
	mm = time%100;	//get the minits
	tem =time/100;	//get the hours
	hh = (int)tem;
	
	int vhh,vmm;
	printf("Enter the duration: ");	
	int dur;
	scanf("%d",&dur);	//take time duration
	vmm = dur%100;		//get the duration minits
	tem =dur/100;		
	vhh = (int)tem;		// get the duration hours

	tem = mm + vmm;
	mm =(int)tem%60;		
	hh=hh+vhh+(int)(tem/60);	//calculate the hours
	
	if (hh>=24){
		hh=hh-24;		
	}
	
	int FinalTime = hh*100 +mm;	//set the final time
	printf("End time is %04d.\n",FinalTime);

 return 0;
}
