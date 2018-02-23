#include <stdio.h>
#include <string.h>

//
void delete_string(char original_str[],char cha)
{
	char str[100]="";
	int i;
	//printf("%d\n",strlen(str));
	for(i=0;i<strlen(original_str);i++)
	{
		
		if(original_str[i]!=cha)
			str[strlen(str)]=original_str[i];
		
	}
	strcpy(original_str,str);

}

void main()
{
	char ori_str[]="120345067890";
	char cha='0';
	delete_string(ori_str,cha);
	puts(ori_str);

}