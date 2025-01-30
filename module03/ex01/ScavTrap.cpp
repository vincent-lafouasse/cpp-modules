#include "ScavTrap.hpp"

#include <iostream>

namespace {
const char* default_name = "Sam";
const uint32_t base_hp = 100;
const uint32_t base_energy = 50;
const uint32_t base_attack = 20;

const char* named_ctor_msg = "ScavTrap named ctor\n";
const char* he_dead = "ScavTrap cant do shit cause its dead\n";
const char* he_tired = "ScavTrap cant do shit cause its tired\n";

const char* default_ctor_msg = "ScavTrap default ctor\n";
const char* copy_ctor_msg = "ScavTrap copy ctor\n";
const char* copy_op_msg = "ScavTrap copy assignment op\n";
const char* dtor_msg = "ScavTrap dtor\n";
}  // namespace

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    std::cout << named_ctor_msg;

    this->health_points = base_hp;
    this->energy_points = base_energy;
    this->attack_points = base_attack;
}

ScavTrap::~ScavTrap() {
    std::cout << dtor_msg;
}
