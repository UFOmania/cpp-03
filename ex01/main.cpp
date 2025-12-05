#include "ScavTrap.hpp"

int main()
{
    ClapTrap cp("robot");

    std::cout << "----------------------------" << std::endl;
    cp.takeDamage(4);
    for(int i = 0; i < 8; i++)
        cp.attack("target1");
    
    cp.attack("robot 2");
    cp.takeDamage(99);
    std::cout << "----------------------------" << std::endl;
    ClapTrap cp2(cp);
    std::cout << "----------------------------" << std::endl;

    cp2.attack("robot 2");
    cp2.beRepaired(100);
    ClapTrap cp3;
    std::cout << "----------------------------" << std::endl;
    cp3.beRepaired(-1);
    cp3.takeDamage(80);
    cp3.attack("robot 3");
    std::cout << "----------------------------" << std::endl;
}