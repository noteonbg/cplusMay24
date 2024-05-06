#include <iostream>
#include <iomanip>

// Medical domain namespace
namespace MedicalDomain {

    // Template function to calculate BMI
    template <typename T>
    T calculateBMI(T weight, T height) {
        // BMI formula: weight (kg) / (height (m))^2
        return weight / (height * height);
    }

}  // End of namespace MedicalDomain

int main() {
    // Example usage
    double weightKg = 70.0;  // Weight in kilograms
    double heightMeters = 1.75;  // Height in meters

    // Calculate BMI using the template function
    double bmi = MedicalDomain::calculateBMI(weightKg, heightMeters);

    // Display the result
    std::cout << "Patient's BMI: " << std::fixed << std::setprecision(2) << bmi << std::endl;

    return 0;
}
