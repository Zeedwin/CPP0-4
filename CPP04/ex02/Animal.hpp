#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
	std::string _type;
	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();
		Animal &operator=( Animal const & rhs );
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif /* ********************************************************** ANIMAL_H */