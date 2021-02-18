#include <stdio.h>
#include<stdlib.h>
const char* compressible(){
	char* str = malloc(sizeof(char)*500001);
	for (int i=0; i<500000; ++i){
		str[i] = '1';
	}
	return str;
}

int main(){
	const char* str = compressible();
	printf(str);
	return(0);
}
