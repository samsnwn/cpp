#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // High-grade bureaucrat
    Bureaucrat alice("Alice", 1);
    // Medium-grade bureaucrat
    Bureaucrat bob("Bob", 100);
    // Low-grade bureaucrat
    Bureaucrat charlie("Charlie", 150);

    // Create forms
    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robo("Bender");
    PresidentialPardonForm pardon("Marvin");

    std::cout << alice << std::endl;
    std::cout << bob << std::endl;
    std::cout << charlie << std::endl;

    std::cout << shrub << std::endl;
    std::cout << robo << std::endl;
    std::cout << pardon << std::endl;

    std::cout << "\n--- Execute without signing (should fail) ---\n" << std::endl;
    alice.executeForm(shrub);
    bob.executeForm(robo);
    alice.executeForm(pardon);

    std::cout << "\n--- Sign forms ---\n" << std::endl;
    // Sign with appropriate grades
    bob.signForm(shrub);     // Bob has 100, requires 145 -> OK
    alice.signForm(robo);    // Alice has 1, requires 72 -> OK
    alice.signForm(pardon);  // Alice has 1, requires 25 -> OK

    std::cout << shrub << std::endl;
    std::cout << robo << std::endl;
    std::cout << pardon << std::endl;

    std::cout << "\n--- Execute with various executors ---\n" << std::endl;
    // Shrubbery: exec 137 -> Bob(100) OK, Charlie(150) fail
    bob.executeForm(shrub);
    charlie.executeForm(shrub);

    // Robotomy: exec 45 -> Alice(1) OK, Bob(100) fail
    alice.executeForm(robo);
    bob.executeForm(robo);

    // Pardon: exec 5 -> Alice(1) OK, Bob(100) fail
    alice.executeForm(pardon);
    bob.executeForm(pardon);

    return 0;
}