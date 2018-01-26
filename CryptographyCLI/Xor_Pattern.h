#pragma once
#include <string>
class Xor_Text_Pattern {
public:
	Xor_Text_Pattern(std::string const& str);
	std::string encode(std::string const& key) const;
	std::string decode(std::string const& key) const { return encode(key); }
	std::string getOriginal() { return text; }

private:
	const std::string text;

};

