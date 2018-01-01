#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>
#include "Base64_Pattern.h"
#include "Xor_Pattern.h"
#include "DES_Pattern.h"
#include "TDES_Pattern.h"



using namespace std;

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

int main(int argc, char** argv) {

	if(argc <= 3) {
		usage();
		return -1;
	}


	string mode(argv[1]);
	if(mode == "xor " || mode == " xor" || mode == " xor " || mode == "xor") {
		if(argc < 3) {
			usage;
			return -1;
		}
		cout << "XOR Encryption" << endl << endl;
		std::string key(argv[2]);
		std::string text;
		for(int i = 3; i < argc; i++) {
			text += argv[i];
			if(i != argc - 1) text += " ";
		}
		Xor_Text_Pattern xor (text);
		cout << "Original text: " << xor.getOriginal() << endl;
		cout << "Key: " << key << endl;
		cout << "Encrypted: " << xor.encode(key) << endl;
		cout << endl;
		return 0;
	}
	else if(mode == "base64 " || mode == " base64" || mode == " base64 " || mode == "base64") {
		if(argc < 3) {
			usage;
			return -1;
		}
		cout << "Base64 Encodage" << endl << endl;
		string mode(argv[2]);
		if(mode == "encode " || mode == "encode" || mode == " encode " || mode == " encode") {
			std::string text;
			for(int i = 3; i < argc; i++) {
				text += argv[i];
				if(i != argc - 1) text += " ";
			}
			Base64_Pattern base64(text, false);
			cout << "Original text: " << base64.getOriginal() << endl;
			cout << "Encoded: " << base64.encode() << endl;
			cout << endl;
			return 0;

		}
		else if(mode == "decode " || mode == "decode" || mode == " decode " || mode == " decode") {
			std::string text;
			for(int i = 3; i < argc; i++) {
				text += argv[i];
				if(i != argc - 1) text += " ";
			}
			Base64_Pattern base64(text, true);
			cout << "Original text: " << base64.getOriginal() << endl;
			cout << "Decoded: " << base64.decode() << endl;
			cout << endl;
			return 0;
		}
		else {
			usage();
			return -1;
		}


	}
	else if(mode == "des " || mode == " des" || mode == " des " || mode == "des") {
		if(argc < 3) {
			usage;
			return -1;
		}
		cout << "DES Encryption" << endl << endl;
		string mode(argv[2]);
		DES_Pattern des;
		if(mode == "encrypt " || mode == "encrypt" || mode == " encrypt " || mode == " encrypt") {
			std::string str;
			for(int i = 3; i < argc; i++) {
				str += argv[i];
				if(i != argc - 1) str += " ";
			}
			const char * c = str.c_str();
			cout << "Original text: " << str << endl;
			cout << "Encrypted: " << des.encrypt(c) << endl;
			cout << endl;
			return 0;

		}
		else if(mode == "decrypt " || mode == "decrypt" || mode == " decrypt " || mode == " decrypt") {
			std::string text;
			for(int i = 3; i < argc; i++) {
				text += argv[i];
				if(i != argc - 1) text += " ";
			}
			const char * c = text.c_str();
			cout << "Original text: " << text << endl;
			cout << "Decrypted: " << des.decrypt(c) << endl;
			cout << endl;
			return 0;
		}
		else {
			usage();
			return -1;
		}
	}


}
