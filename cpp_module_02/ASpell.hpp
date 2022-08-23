#pragma once

#include "ATarget.hpp"
#include <iostream>

class ATarget;

class ASpell {

    private:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(std::string const& name, std::string const& effects);
        ASpell(ASpell const& spell);
        ASpell& operator=(ASpell const& spell);
        virtual ~ASpell();

        std::string const& getName() const;
        std::string const& getEffects() const;

        void launch(ATarget const& target) const;
        virtual ASpell* clone() const = 0;
};
