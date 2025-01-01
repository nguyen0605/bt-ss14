#include <stdio.h>
#include <string.h>
int main(){
	char str[]="Hello World";
	for(int i=0;i<strlen(str)/2;i++){
		int temp=str[i];
		str[i]=str[strlen(str)-i-1];
		str[strlen(str)-i-1]=temp;
	}
	printf("%s",str);
	return 0;
}
