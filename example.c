// Max Base
// https://github.com/BaseMax/cMD5
#include "md5.h"

int main(void) {
	while(1) {
		char pass[100];
		printf("\nEnter string: ");
		scanf("%s", &pass);
		char *buffer=md5String(pass, strlen(pass));
		printf("%s\n", buffer);
	}
	return 0;
}
