#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int a;
	int b;
	char input[]="I $am 5a$ go68od#@$ st-ude[nt].";
	char *check;
	
	a=strlen(input);
	check=input;
	
	for(b=0;b<a;b++){
		if(*(check+b)<122&&*(check+b)>=96){
			printf("%c", *(check+b));
		}
		else if(*(check+b)<91&&*(check+b)>64){
			printf("%c", *(check+b));
		}
		else if(*(check+b)==32){
			printf("%c", *(check+b));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
} 
