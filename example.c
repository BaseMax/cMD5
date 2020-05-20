// Max Base
// https://github.com/BaseMax/cMD5
#include "md5.h"

int main(void) {
	while(1) {
		char pass[100];
		printf("\nEnter string: ");
		scanf("%s", &pass);
		printf("MD5(%s) = %s\n", pass, md5(pass, strlen(pass));
	}
	return 0;
}
