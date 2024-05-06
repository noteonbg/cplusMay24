#include <iostream>
#include <string>

class MedicalDevice {
private:
    int deviceID;
    std::string patientName;
    std::string deviceStatus;

public:
    // Static variable for category ID
    static int CategoryId;   //this variable can be private also..

    // Constructor
    MedicalDevice(int id, const std::string& name, const std::string& status)
        : deviceID(id), patientName(name), deviceStatus(status) {}

    // Setter for device status
    void setStatus(const std::string& newStatus) {
        deviceStatus = newStatus;
    }

    // Getter for category ID
    static int getCategoryId() {
        return CategoryId;
    }

    // Display device information
    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }
};

// Initialize the static variable
int MedicalDevice::CategoryId = 100; // Example value

int main() {
    MedicalDevice myDevice(123, "Patient X", "Active");
    myDevice.displayInfo();

    // Get and display the category ID
    std::cout << "Category ID: " << MedicalDevice::getCategoryId() << std::endl;

    return 0;
}
