#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Nhap vao 1 chuoi bat ki: ");
	fgets(str,sizeof(str),stdin);
	int length= strlen(str);
	if(length>0 && str[length-1]=='\n'){
		str[length-1]='\0';
		length--;
	}
	printf("Chuoi vua nhap: %s\n",str);
	printf("Do dai cua chuoi: %d",length);
	return 0;
}
