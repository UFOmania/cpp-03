#include "ScavTrap.hpp"

int main()
{
    ScavTrap st("pres");
    ClapTrap p = ClapTrap(st);

    st.takeDamage(2000);
    st.beRepaired(889);
    st.attack("hello");
    p.attack("jj");
}