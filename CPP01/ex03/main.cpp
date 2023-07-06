#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	Weapon	club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.set_Type("30 ft Dildo");
	bob.attack();

	Weapon	club3 = Weapon("curde spiked club");

	HumanB lain("Lain");
	lain.set_weapon(club3);
	club3.set_Type("cattle prod");
	lain.attack();
	club3.set_Type("Wired");
	lain.attack();
}