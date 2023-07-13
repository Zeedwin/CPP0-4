#include "ScavTrap.hpp"

int main () {

    ScavTrap c1;
    ScavTrap c2("Scavv");

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
    c1.guardGate();
    c1.guardGate();
    c1.guardGate(); 
    return 0;
}