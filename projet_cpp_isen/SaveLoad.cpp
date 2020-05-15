#include <string>
#include <iostream>
#include <fstream>

#include "SaveLoad.h"

std::string GetFromFile(std::string filepath) {
    std::string equation;
    std::ifstream fileStream;
    fileStream.open(filepath);
    if (fileStream.is_open()) {
        std::getline(fileStream, equation);
        return equation;
    }
    else {
        std::cout << "Le fichier est introuvable" << std::endl;
        return "";
    }
}

void SaveToFile(std::string toSave) {
    std::ofstream savefile ("./save");
    savefile << toSave;
    savefile.close();
    return;
}