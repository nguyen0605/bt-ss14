#include <stdio.h>
#include <string.h>
int main(){
	char str[]="123 alo 123";
	int cnt=0;
	for(int i=1;i<strlen(str);i++){
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			cnt++;
		}
	}
	printf("So ki tu la chu cai trong chuoi la %d",cnt);
	return 0;
}
