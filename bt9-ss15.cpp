#include <stdio.h>
#include <string.h>
int main(){
	char str[]="hello world";
	char result[50];
	char ch;
	int j=0;
	int found=0;
	printf("Chuoi ban dau: %s\n",str);
	printf("Nhap vao ki tu muon xoa: ");
	scanf(" %c",&ch);
	for(int i=0;i<strlen(str);i++){
		if(str[i]!=ch){
			result[j]=str[i];
			j++;
		}else{
			found=1;
		}
	}
	result[j]='\0';
	if(found){
		printf("Chuoi sau khi xoa ki tu %c la %s",ch,result);
	}else{
		printf("Ki tu %c khong ton tai trong chuoi!",ch);
	}
	return 0;
}
