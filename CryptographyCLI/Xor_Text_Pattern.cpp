
#include <string>
#include "Xor_Pattern.h"


Xor_Text_Pattern::Xor_Text_Pattern(std::string const& str) : text(str) {
}

std::string Xor_Text_Pattern::encode(std::string const& key) const {

	std::string encrypted;
	for(int temp = 0; temp < text.size(); temp++) {
		encrypted += text[temp] ^ (sizeof(key) + temp) % 255;
	}
	return encrypted;
}

