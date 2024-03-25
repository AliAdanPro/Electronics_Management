#ifndef MOBILE_H
#define MOBILE_H
#include <string>
#include <fstream>
using namespace std;

class Mobile : public ElectronicDevice {
private:
    float displaySize;
    string processor;

public:
    Mobile();
    Mobile(int id, const string &name, const string &model, float price);
    ~Mobile();
    void setDisplaySize(float displaySize);
    float getDisplaySize();
    void setprocessor(string processor);
    string getProcessor();
    string tostring() const;
    void saveToFile() const;
    void displayFromFile();
};

#endif 
