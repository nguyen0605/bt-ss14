#include <stdio.h>
#include <string.h>
int main(){
	char str[]="Hello World";
	int cnt=1;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' '){
			cnt++;
		}
	}
	printf("So tu trong chuoi la %d",cnt);
	return 0;
}
