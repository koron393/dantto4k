#pragma once
#include <string>
#include <fstream>
#ifdef __linux__
#include "typedef.h"
#endif

class Config {
public:
    std::string bondriverPath{};
    std::string mmtsDumpPath{};
    std::string smartCardReaderName{};
    bool disableADTSConversion{false};
};

std::string getConfigFilePath(void* hModule);
Config loadConfig(const std::string& filename);

extern Config config;
