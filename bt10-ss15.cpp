#include <stdio.h>
#include <string.h>
int main(){
	char str[]="hello world";
	int arr[256]={0};
	for(int i=0;i<strlen(str);i++){
		arr[(unsigned char)str[i]]++;
	}
	printf("So lan xuat hien cua cac ki tu la:\n");
	for(int i=0;i<256;i++){
		if(arr[i]>0){
			printf("'%c' xuat hien %d lan\n",i,arr[i]);
		}
	} 
	return 0;
} 
