#pragma once
#include "DES_Pattern.h"
class TDES_Pattern {
public:
	char* encrypt(char*) ;
	char* decrypt(char*) ;
private:
	DES_Pattern des = DES_Pattern();
};

