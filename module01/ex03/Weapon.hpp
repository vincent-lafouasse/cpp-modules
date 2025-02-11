#pragma once

#include <string>

class Weapon {
   public:
    explicit Weapon(const std::string& type);
    const std::string& getType() const;
    void setType(const std::string& type);

   private:
    std::string type;
};
