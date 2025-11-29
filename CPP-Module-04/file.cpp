

// Created by tde-sous on 01-02-2024.
#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"
#include <list>

#define SLOTS 4

class ICharacter;
class AMateria;

class Character : public ICharacter {
private:
  /* The Name of the Character */
  std::string name_;
  /* The Inventory of the Character with a number of SLOTS */
  AMateria *inventory_[SLOTS];
  /* The List of unequipped Materias */
  std::list<AMateria *> unequipedMaterias_;

public:
  /**
   * @brief Default constructor.
   */
  Character(std::string const &name);
  /**
   * @brief Copy constructor.
   * @param other The other Character to copy.
   */
  Character(const Character &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Character to assign.
   * @return A reference to the assigned Character.
   */
  Character &operator=(const Character &other);
  /**
   * @brief Destructor.
   */
  ~Character();
  /**
   * @brief Getter for the name of the Character.
   * @return The name of the Character.
   */
  const std::string &getName() const;
  /**
   * @brief Equips a AMateria in the inventory.
   * @param m The AMateria to equip.
   */
  void equip(AMateria *m);
  /**
   * @brief Unequips a AMateria in the inventory.
   * @param idx The index of the inventory to unequip.
   */
  void unequip(int idx);
  /**
   * @brief Use the AMateria at the slot[idx] and pass the target param to the
   * AMateria::use.
   * @param idx The index of the inventory to use.
   * @param target Target to be passed to AMateria::use.
   */
  void use(int idx, ICharacter &target);
};

#endif // EX03_CHARACTER_HPP








// Created by tde-sous on 01-02-2024.
#include "Character.hpp"

Character::Character(std::string const &name) : name_(name) {
  std::cout << "[Character] Default constructor called." << std::endl;
  for (int i = 0; i < SLOTS; i++)
    this->inventory_[i] = NULL;
}

Character::Character(const Character &other) {
  *this = other;
  std::cout << "[Character] Copy constructor called." << std::endl;
}

Character &Character::operator=(const Character &other) {
  std::cout << "[Character] Copy assigment operator called." << std::endl;
  if (this == &other)
    return *this;
  this->name_ = other.name_;
  while (!this->unequipedMaterias_.empty()) {
    delete this->unequipedMaterias_.front();
    this->unequipedMaterias_.pop_front();
  }
  this->unequipedMaterias_.assign(other.unequipedMaterias_.begin(),
                                  other.unequipedMaterias_.end());
  for (int i = 0; i < SLOTS; i++) {
    if (this->inventory_[i])
      delete this->inventory_[i];
    this->inventory_[i] = other.inventory_[i];
  }
  return *this;
}

Character::~Character() {
  for (int i = 0; i < SLOTS; i++)
  {
    if (this->inventory_[i])
      delete this->inventory_[i];
  }
  while (!this->unequipedMaterias_.empty())
  {
    delete this->unequipedMaterias_.front();
    this->unequipedMaterias_.pop_front();
  }
  std::cout << "[Character] Destructor called." << std::endl;
}

const std::string &Character::getName() const { return (this->name_); }

void Character::equip(AMateria *m) {
  for (int i = 0; i <= SLOTS; i++) {
    if (i == SLOTS) {
      std::cout << "I tried to equip a " << m->getType() << " but I'm full!"
                << std::endl;
      return;
    }
    if (!this->inventory_[i]) {
      this->inventory_[i] = m;
      return;
    }
  }
}

void Character::unequip(int idx) {
  if (idx >= SLOTS) {
    std::cout << "Invalid slot number provided!" << std::endl;
  } else if (!this->inventory_[idx]) {
    std::cout << "Trying to unequip a unexisting slot!" << std::endl;
  } else {
    this->unequipedMaterias_.push_front(this->inventory_[idx]);
    this->inventory_[idx] = NULL;
  }
}

void Character::use(int idx, ICharacter &target) {
  if (idx >= SLOTS) {
    std::cout << "Invalid slot number provided!" << std::endl;
  } else if (!this->inventory_[idx])
    std::cout << "This slot is empty at the moment!" << std::endl;
  else
    this->inventory_[idx]->use(target);
}