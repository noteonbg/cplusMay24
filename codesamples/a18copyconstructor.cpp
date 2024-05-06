#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string serialNumber;
    string deviceName;
    int manufacturerID;

public:
    // Constructor with no arguments
    MedicalDevice() {
        serialNumber = "Unknown";
        deviceName = "Unnamed Device";
        manufacturerID = 0;
    }

    // Constructor with serial number and name
    MedicalDevice(const string& serial, const string& name) {
        serialNumber = serial;
        deviceName = name;
        manufacturerID = 0;
    }

    // Constructor with all properties
    MedicalDevice(const string& serial, const string& name, int manufID) {
        serialNumber = serial;
        deviceName = name;
        manufacturerID = manufID;
    }

    // Copy constructor
    MedicalDevice(const MedicalDevice& other) {
        serialNumber = other.serialNumber;
        deviceName = other.deviceName;
        manufacturerID = other.manufacturerID;
    }

    // Getter methods
    string getSerialNumber() const {
        return serialNumber;
    }

    string getDeviceName() const {
        return deviceName;
    }

    int getManufacturerID() const {
        return manufacturerID;
    }
};

int main() {
    // Creating an instance of MedicalDevice
    MedicalDevice originalDevice("SN123", "Blood Pressure Monitor", 789);

    // Creating a copy using the copy constructor
    MedicalDevice copiedDevice(originalDevice);

    // Displaying device information
    cout << "Original Device: Serial Number = " << originalDevice.getSerialNumber() << ", Name = " << originalDevice.getDeviceName() << ", Manufacturer ID = " << originalDevice.getManufacturerID() << endl;
    cout << "Copied Device: Serial Number = " << copiedDevice.getSerialNumber() << ", Name = " << copiedDevice.getDeviceName() << ", Manufacturer ID = " << copiedDevice.getManufacturerID() << endl;

    return 0;
}


#if 0


#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string* serialNumber; // Pointer to dynamically allocated memory
    string deviceName;
    int manufacturerID;

public:
    // Constructor with no arguments
    MedicalDevice() {
        serialNumber = new string("Unknown"); // Allocate memory for serial number
        deviceName = "Unnamed Device";
        manufacturerID = 0;
    }

    // Constructor with serial number and name
    MedicalDevice(const string& serial, const string& name) {
        serialNumber = new string(serial); // Allocate memory for serial number
        deviceName = name;
        manufacturerID = 0;
    }

    // Constructor with all properties
    MedicalDevice(const string& serial, const string& name, int manufID) {
        serialNumber = new string(serial); // Allocate memory for serial number
        deviceName = name;
        manufacturerID = manufID;
    }

    // Destructor to deallocate memory
    ~MedicalDevice() {
        delete serialNumber; // Deallocate memory for serial number
    }

    // Getter methods
    string getSerialNumber() const {
        return *serialNumber; // Dereference the pointer to get the value
    }

    string getDeviceName() const {
        return deviceName;
    }

    int getManufacturerID() const {
        return manufacturerID;
    }
};

int main() {
    // Creating instances of MedicalDevice
    MedicalDevice device1; // Calls the first constructor (no arguments)
    MedicalDevice device2("SN123", "Blood Pressure Monitor"); // Calls the second constructor
    MedicalDevice device3("SN456", "Thermometer", 789); // Calls the third constructor

    // Displaying device information
    cout << "Device 1: Serial Number = " << device1.getSerialNumber() << ", Name = " << device1.getDeviceName() << ", Manufacturer ID = " << device1.getManufacturerID() << endl;
    cout << "Device 2: Serial Number = " << device2.getSerialNumber() << ", Name = " << device2.getDeviceName() << ", Manufacturer ID = " << device2.getManufacturerID() << endl;
    cout << "Device 3: Serial Number = " << device3.getSerialNumber() << ", Name = " << device3.getDeviceName() << ", Manufacturer ID = " << device3.getManufacturerID() << endl;

    return 0;
}


#endif


#if 0

#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string* serialNumber; // Pointer to dynamically allocated memory
    string deviceName;
    int manufacturerID;

public:
    // Constructor with no arguments
    MedicalDevice() {
        serialNumber = new string("Unknown"); // Allocate memory for serial number
        deviceName = "Unnamed Device";
        manufacturerID = 0;
    }

    // Constructor with serial number and name
    MedicalDevice(const string& serial, const string& name) {
        serialNumber = new string(serial); // Allocate memory for serial number
        deviceName = name;
        manufacturerID = 0;
    }

    // Constructor with all properties
    MedicalDevice(const string& serial, const string& name, int manufID) {
        serialNumber = new string(serial); // Allocate memory for serial number
        deviceName = name;
        manufacturerID = manufID;
    }

    // Copy constructor
    MedicalDevice(const MedicalDevice& other) {
        // Deep copy the serial number (allocate new memory)
        serialNumber = new string(*other.serialNumber);
        deviceName = other.deviceName;
        manufacturerID = other.manufacturerID;
    }

    // Destructor to deallocate memory
    ~MedicalDevice() {
        delete serialNumber; // Deallocate memory for serial number
    }

    // Getter methods
    string getSerialNumber() const {
        return *serialNumber; // Dereference the pointer to get the value
    }

    string getDeviceName() const {
        return deviceName;
    }

    int getManufacturerID() const {
        return manufacturerID;
    }
};

int main() {
    // Creating an instance of MedicalDevice
    MedicalDevice originalDevice("SN123", "Blood Pressure Monitor", 789);

    // Creating a copy using the copy constructor
    MedicalDevice copiedDevice(originalDevice);

    // Displaying device information
    cout << "Original Device: Serial Number = " << originalDevice.getSerialNumber() << ", Name = " << originalDevice.getDeviceName() << ", Manufacturer ID = " << originalDevice.getManufacturerID() << endl;
    cout << "Copied Device: Serial Number = " << copiedDevice.getSerialNumber() << ", Name = " << copiedDevice.getDeviceName() << ", Manufacturer ID = " << copiedDevice.getManufacturerID() << endl;

    return 0;
}



#endif