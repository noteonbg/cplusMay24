#include <iostream>
#include <string>

class MedicalDevice {
public:
    // Constructor
    MedicalDevice(const std::string& serialno, const std::string& manufacturerid, const std::string& name)
        : serialno_(serialno), manufacturerid_(manufacturerid), name_(name) {}

    // Pure virtual function for displaying device information
    virtual void displayInfo() const = 0;

protected:
    std::string serialno_;
    std::string manufacturerid_;
    std::string name_;
};

class BloodPressureMonitor : public MedicalDevice {
public:
    BloodPressureMonitor(const std::string& serialno, const std::string& manufacturerid, const std::string& name)
        : MedicalDevice(serialno, manufacturerid, name) {}

    // Implement the pure virtual function
    void displayInfo() const override {
        std::cout << "Blood Pressure Monitor Info:" << std::endl;
        std::cout << "Serial Number: " << serialno_ << std::endl;
        std::cout << "Manufacturer ID: " << manufacturerid_ << std::endl;
        std::cout << "Device Name: " << name_ << std::endl;
    }
};

int main() {
    // Example usage
    BloodPressureMonitor bpm("BP12345", "ABC Medical", "BP Pro");
    bpm.displayInfo();

    return 0;
}
