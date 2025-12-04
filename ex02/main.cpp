#include "FragTrap.hpp"

int main()
{
    FragTrap ft;
    ClapTrap p = ClapTrap(ft);

    ft.takeDamage(2000);
    ft.beRepaired(889);
    ft.attack("hello");
    p.attack("jj");
}