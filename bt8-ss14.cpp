#include <stdio.h>
#include <string.h>
int main(){
	char str[]="hello world";
	for(int i=0;i<strlen(str);i++){
		if(i==0 || str[i-1]==' '){
			if(str[i]>='a' && str[i]<='z'){
				str[i]=str[i]-('a'-'A');
			}
		}
	}
	printf("%s",str);
	return 0;
} 
