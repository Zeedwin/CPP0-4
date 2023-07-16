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
		virtual ~WrongAnimal();
		void makeSound() const;
		virtual std::string getType() const;
		WrongAnimal &operator=( WrongAnimal const & rhs );
};

#endif /* ***************************************************** WRONGANIMAL_H */