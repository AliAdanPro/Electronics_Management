#include "Mobile.h"
#include <iostream>
using namespace std;
Mobile::Mobile() : displaySize(0.0), processor("Unknown") {}

Mobile::Mobile(int id, const string &name, const string &model, float price)
    : ElectronicDevice(id, name, model, price), displaySize(0.0), processor("Unknown") {}

Mobile::~Mobile() {}

void Mobile::setDisplaySize(float displaySize) {
    this->displaySize = displaySize;
}

float Mobile::getDisplaySize() {
    return displaySize;
}

void Mobile::setprocessor(string processor) {
    this->processor = processor;
}

string Mobile::getProcessor() {
    return processor;
}

string Mobile::tostring() const {
    string details = ElectronicDevice::toString();
    details += "Screen size: " + to_string(displaySize) + " Inches\n";
    details += "Processor: " + processor + "\n";
    return details;
}


void Mobile::saveToFile() const {
    ofstream outFile("mobile.txt", ios::app);
    if (!outFile) {
        cout << "cannot open file " << endl;
        return;
    }
    outFile << tostring() << endl;
    outFile.close();
}

void Mobile::displayFromFile() {
    ifstream inFile("mobile.txt");
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
