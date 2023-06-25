#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include	<iostream>
#include	<string>


class Zombie
{
private:
int cindex;
static int n(int i) {
	static int index = 1;
	if(i == 1)
		return index++;
	if(i == -1)
		return index--;
	return 0;
}
std::string	_name;
public:
	std::string	get_name();
	void	set_name(std::string name);
	void 	anouncer(void);
	Zombie()
	{
		cindex = n(1);
		std::cout << "Constructor "<< cindex << " Called" << "\n";
	}
	~Zombie()
	{
		cindex = n(-1);
		std::cout << "Destructor " << cindex -1 << " Called" << "\n";
	}
};

Zombie*	spawnZombie(int N, std::string name);


#endif 