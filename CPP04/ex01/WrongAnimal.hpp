#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
	std::string	_type;
	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();
		void makeSound() const;
		WrongAnimal &operator=( WrongAnimal const & rhs );
};

#endif /* ***************************************************** WRONGANIMAL_H */