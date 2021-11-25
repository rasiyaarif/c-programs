#include<stdio.h>
int funt(char *strone){
	int current_st=0, final_st=2,input;
	char ss;
	int tt[4][2];
	tt[0][0]=3;
	tt[0][1]=1;
	tt[1][0]=2;
	tt[1][1]=1;
	tt[2][0]=2;
	tt[2][1]=1;
	tt[3][0]=3;
	tt[3][1]=3;
	for(int i=0;strone[i]!='\0';i++){
		ss = strone[i];
		input = ss - '0';
		if(input!=0 && input!=1){
			return 0;
		}
		current_st = tt[current_st][input];
	}
	if(current_st == final_st){
		return 1;
	}else{
		return 0;
	} //1 (0+1)* 0
	return 0;
}
int main(){
	char strone[10];
	printf("Enter String");
	scanf("%s",strone);
	if(funt(strone)){
		printf("Accepted");
	}else{
		printf("Rejected");
	}
	return 0;}