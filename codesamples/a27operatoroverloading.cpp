#include <iostream>
#include <string>

class MedicalDevice {
private:
    int deviceID;
    std::string patientName;
    std::string deviceStatus;

public:
    MedicalDevice(int id, const std::string& name, const std::string& status)
        : deviceID(id), patientName(name), deviceStatus(status) {}

    // Overload the > operator
    bool operator>(const MedicalDevice& other) const {
        return deviceID > other.deviceID;
    }

    //overload operator < and == now...

    // Display device information
    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }
};

int main() {
    MedicalDevice device1(101, "John Doe", "Active");
    MedicalDevice device2(102, "Alice Smith", "Inactive");

    device1.displayInfo();
    device2.displayInfo();

    // Compare devices using the > operator
    if (device1 > device2) {
        std::cout << "Device 1 has a greater ID." << std::endl;
    } else {
        std::cout << "Device 2 has a greater ID." << std::endl;
    }

    return 0;
}
