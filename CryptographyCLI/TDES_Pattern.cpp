
#include "TDES_Pattern.h"

char* TDES_Pattern::encrypt(char* str) {
	char* first = des.encrypt(str);
	char* second = des.encrypt(first);
	return des.encrypt(second);
}
char* TDES_Pattern::decrypt(char* str) {
	char* first = des.decrypt(str);
	char* second = des.decrypt(first);
	return des.decrypt(second);
}



