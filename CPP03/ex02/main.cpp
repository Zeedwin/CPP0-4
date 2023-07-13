#include "FragTrap.hpp"

int main () {

    FragTrap c1;
    FragTrap c2("Frag");

    c1.print();
    c1 = c2;
    c2.print();
    c2.attack("Mush");
    c2.takeDamage(5);
    c2.beRepaired(7);
    c2.takeDamage(100);
    c2.attack("Mush");
    c2.takeDamage(5);
    c2.beRepaired(7);
    c1.print();
    c2.print();
	c1.highFivesGuys();
    return 0;
}