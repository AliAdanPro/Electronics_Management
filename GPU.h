#ifndef GPU_H
#define GPU_H

#include <iostream>
using namespace std;

class GPU : public ElectronicDevice {
private:
    int cores;
    int vram;

public:
    GPU();
    GPU(int id, const string &name, const string &model, float price);
    ~GPU();
    void setcores(int cores);
    int getcores();
    void setvram(int vram);
    int getvram();
    string tostring() const;
    void saveToFile() const;
    void displayFromFile();
};

#endif 
