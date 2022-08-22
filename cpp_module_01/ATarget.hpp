#pragma once
#include "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget {

    private:
        std::string type;
    public:
        ATarget();
        ATarget(std::string const& type);
        ATarget(ATarget const& target);
        ATarget& operator=(ATarget const& target);
        virtual ~ATarget();
        std::string const& getType() const;
        void getHitBySpell(ASpell const& spell) const;
        virtual ATarget* clone() const = 0;
};
