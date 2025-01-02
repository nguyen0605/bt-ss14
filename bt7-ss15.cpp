#include <stdio.h>
#include <string.h>
int main(){
	char str[]="Hello my gmail is test123@gmail.com";
	int letter_cnt=0, digit_cnt=0, special_cnt=0;
	for(int i=0;i<strlen(str);i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			letter_cnt++;
		}else if(str[i]>='0' && str[i]<='9'){
			digit_cnt++;
		}else{
			special_cnt++;
		}
	}
	printf("So ki tu la chu cai trong chuoi la %d\n",letter_cnt);
	printf("So ki tu la chu so trong chuoi la %d\n",digit_cnt);
	printf("So ki tu dac biet trong chuoi la %d\n",special_cnt);
	return 0;
}
