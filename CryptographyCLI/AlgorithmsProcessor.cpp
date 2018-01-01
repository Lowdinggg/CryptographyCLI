#include "AlgorithmsProcessor.hpp"
using namespace std;

void processDES(std::string const& mode, std::string const& str) {
	DES_Pattern des;
	if(mode == "encrypt " || mode == "encrypt" || mode == " encrypt " || mode == " encrypt") {

		const char * c = str.c_str();
		cout << "Original text: " << str << endl;
		cout << "Encrypted: " << des.encrypt(c) << endl;
		cout << endl;
		return ;

	}
	else if(mode == "decrypt " || mode == "decrypt" || mode == " decrypt " || mode == " decrypt") {
		const char * c = str.c_str();
		cout << "Original text: " << str << endl;
		cout << "Decrypted: " << des.decrypt(c) << endl;
		cout << endl;
		return;
	}
	else {
		usage();
		return ;
	}
}
void processXor(string const& key, string const& text) {
	cout << "XOR Encryption" << endl << endl;

	Xor_Text_Pattern xor (text);
	cout << "Original text: " << xor.getOriginal() << endl;
	cout << "Key: " << key << endl;
	cout << "Result: " << xor.encode(key) << endl;
	cout << endl;
}
void processBase64(std::string const& mode, std::string const& text) {
	if(mode == "encode " || mode == "encode" || mode == " encode " || mode == " encode") {

		Base64_Pattern base64(text, false);
		cout << "Original text: " << base64.getOriginal() << endl;
		cout << "Encoded: " << base64.encode() << endl;
		cout << endl;

	}
	else if(mode == "decode " || mode == "decode" || mode == " decode " || mode == " decode") {
		Base64_Pattern base64(text, true);
		cout << "Original text: " << base64.getOriginal() << endl;
		cout << "Decoded: " << base64.decode() << endl;
		cout << endl;
		return;
	}
	else {
		usage();
	}
}

void usage() {
	cout << " (*) You need to specify an algorithm" << endl;
	cout << "Example: crypto base64 decode Hello world !" << endl;;
	cout << "Possibilities: " << endl;
	cout << "	- crypto base64 (encode/decode) <encoded/plain text>" << endl;
	cout << "	- crypto xor <key> <encoded/plain text>" << endl;
	cout << "	- crypto des (encrypt/decrypt) <encrypted/plain text>" << endl;
	cout << "	- crypto tdes (encrypt/decrypt) <encrypted/plain text>" << endl;
	cout << " (http://lowdingg.ga/)" << endl;
	cout << endl;
}