#pragma once
#include <string>
class Base64_Pattern {
public:
	Base64_Pattern(std::string const& str, bool m_isEncoded);
	std::string decode() const;
	std::string encode() const;
	std::string getOriginal() const;
private:
	
	const bool m_isEncoded;
	const std::string text;
	const std::string base64_chars;
	static inline bool is_base64(unsigned char c) {
		return (isalnum(c) || (c == '+') || (c == '/'));
	}

};

