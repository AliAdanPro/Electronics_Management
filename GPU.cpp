#include "GPU.h"
#include <iostream>
using namespace std;
GPU::GPU() : cores(0), vram(0) {}

GPU::GPU(int id, const string &name, const string &model, float price)
    : ElectronicDevice(id, name, model, price), cores(0), vram(0) {}

GPU::~GPU() {}

void GPU::setcores(int cores) {
    this->cores = cores;
}

int GPU::getcores() {
    return cores;
}

void GPU::setvram(int vram) {
    this->vram = vram;
}

int GPU::getvram() {
    return vram;
}

string GPU::tostring() const {
    string details = ElectronicDevice::toString();
    details += "Amount of Cores: " + to_string(cores) + "\n";
   details += "Vram: " + to_string(vram) + "\n";
   return details;

}


void GPU::saveToFile() const {
    ofstream outFile("GPU.txt", ios::app);
    if (!outFile) {
        cout << "cannot open file " << endl;
        return;
    }
    outFile << tostring() << endl;
    outFile.close();
}

void GPU::displayFromFile() {
    ifstream inFile("GPU.txt");
    if (!inFile) {
        cout << "Error. cannot open file " << endl;
        return;
    }
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}
