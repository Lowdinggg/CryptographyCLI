#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>
#include "AlgorithmsProcessor.hpp"



using namespace std;



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
		std::string key(argv[2]);
		std::string text;
		for(int i = 3; i < argc; i++) {
			text += argv[i];
			if(i != argc - 1) text += " ";
		}
		processXor(key, text);
		return 0;
	}
	else if(mode == "base64 " || mode == " base64" || mode == " base64 " || mode == "base64") {
		if(argc < 3) {
			usage;
			return -1;
		}
		cout << "Base64 Encodage" << endl << endl;
		string mode(argv[2]);
		std::string text;
		for(int i = 3; i < argc; i++) {
			text += argv[i];
			if(i != argc - 1) text += " ";
		}
		processBase64(mode, text);

	}
	else if(mode == "des " || mode == " des" || mode == " des " || mode == "des") {
		if(argc < 3) {
			usage;
			return -1;
		}
		cout << "DES Encryption" << endl << endl;
		string mode(argv[2]);
		std::string str;
		for(int i = 3; i < argc; i++) {
			str += argv[i];
			if(i != argc - 1) str += " ";
		}
		processDES(mode, str);

	}


}
