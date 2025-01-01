#include <stdio.h>
#include <string.h>
int main(){
	char str[]="hello world";
	char result[50];
	char ch;
	int j=0;
	printf("Nhap vao ki tu muon xoa: ");
	scanf("%c",&ch);
	for(int i=0;i<strlen(str);i++){
		if(str[i]!=ch){
			result[j]=str[i];
			j++;
		}
	}
	result[j]='\0';
	printf("Chuoi sau khi xoa ki tu %c: %s",ch,result);
	return 0;
}
