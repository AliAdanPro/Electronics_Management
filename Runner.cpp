#include "ElectronicDevice.h"
#include "Mobile.h"
#include "GPU.h"
#include "ElectronicDevice.cpp"
#include "Mobile.cpp"
#include "GPU.cpp"
#include <iostream>

using namespace std;

int main()
{
    char choice;
    int id;
    float price;
    string name, model;
    float displaySize;
    string processor;
    int cores;
    int vram;

    do
    {
        cout << "Choose: " << endl;
        cout << "1. Electronic Device System: " << endl;
        cout << "2. Mobile System: " << endl;
        cout << "3. GPU System: " << endl;
        cout << "0. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case '1':
        {
            ElectronicDevice e1;
            cout << "Press 1 to store electronic device data: " << endl;
            cout << "Press 2 to display the electronic device data: " << endl;
            cin >> choice;
            switch (choice)
            {
            case '1':
                cout << "Enter name: " << endl;
                cin >> name;
                cout << "Enter the model:" << endl;
                cin >> model;
                cout << "Enter the price: " << endl;
                cin >> price;
                e1.setName(name);
                e1.setModel(model);
                e1.setPrice(price);
                e1.saveToFile();
                cout << "Files saved successfully." << endl;
                break;
            case '2':
                cout << "Details of all the electronic devices: " << endl;
                ElectronicDevice::displayFromFile();
                break;
            default:
                cout << "Invalid" << endl;
                break;
            }
            break;
        }
        case '2':
        {
            Mobile m1;
            cout << "Press 1 to store mobile data: " << endl;
            cout << "Press 2 to display the mobile data: " << endl;
            cin >> choice;
            switch (choice)
            {
            case '1':
                cout << "Enter name: " << endl;
                cin >> name;
                cout << "Enter the model:" << endl;
                cin >> model;
                cout << "Enter the price: " << endl;
                cin >> price;
                cout << "Enter the display size: " << endl;
                cin >> displaySize;
                cout << "Enter the processor type: " << endl;
                cin >> processor;
                m1.setName(name);
                m1.setModel(model);
                m1.setPrice(price);
                m1.setDisplaySize(displaySize);
                m1.setprocessor(processor);
                m1.saveToFile();
                cout << "Mobile data saved successfully." << endl;
                break;
            case '2':
                cout << "Details of all the mobile devices: " << endl;
                Mobile::displayFromFile();
                break;
            default:
                cout << "Invalid" << endl;
                break;
            }
            break;
        }
        case '3':
        {
            GPU g1;
            cout << "Press 1 to store GPU data: " << endl;
            cout << "Press 2 to display the GPU data: " << endl;
            cin >> choice;
            switch (choice)
            {
            case '1':
                cout << "Enter name: " << endl;
                cin >> name;
                cout << "Enter the model:" << endl;
                cin >> model;
                cout << "Enter the price: " << endl;
                cin >> price;
                cout << "Enter the number of cores: " << endl;
                cin >> cores;
                cout << "Enter the VRAM: " << endl;
                cin >> vram;
                g1.setName(name);
                g1.setModel(model);
                g1.setPrice(price);
                g1.setcores(cores);
                g1.setvram(vram);
                g1.saveToFile();
                cout << "GPU data saved successfully." << endl;
                break;
            case '2':
                cout << "Details of all the GPU devices: " << endl;
                GPU::displayFromFile();
                break;
            default:
                cout << "Invalid" << endl;
                break;
            }
            break;
        }
        case '0':
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

    } while (choice != '0');

    return 0;
}
