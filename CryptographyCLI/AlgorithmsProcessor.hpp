#pragma once
#include <iostream>
#include "Base64_Pattern.h"
#include "Xor_Pattern.h"
#include "DES_Pattern.h"
#include "TDES_Pattern.h"

void processDES(std::string const& mode, std::string const& str);
void processXor(std::string const& key, std::string const& text);
void processBase64(std::string const& mode, std::string const& text);
void usage();