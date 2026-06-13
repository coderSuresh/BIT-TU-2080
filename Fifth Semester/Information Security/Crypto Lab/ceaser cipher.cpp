#include<stdio.h>
 
int main()
{
	char message[100],messages[100], ch;
	int i, key=4;
	printf("Enter a message to encrypt: ");
	gets(message);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			if(ch > 'z'){
			ch = ch - 'z' + 'a' - 1;
			}
			message[i] = ch;
		}
	else if(ch >= 'A' && ch <= 'Z'){
		ch = ch + key;
	if(ch > 'Z'){
		ch = ch - 'Z' + 'A' - 1;
	}
	message[i] = ch;
	}
	}
printf("Encrypted message: %s", message);

printf("\n Enter a message to decrypt: ");
	gets(messages);

	for(i = 0; messages[i] != '\0'; ++i){
		ch = messages[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
		if(ch < 'a'){
			ch = ch + 'z' - 'a' + 1;
		}
		messages[i] = ch;
		}		
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
		if(ch < 'A'){
			ch = ch + 'Z' - 'A' + 1;
		}
		messages[i] = ch;
		}
	}
	printf("Decrypted message: %s", messages);
	return 0;
}
