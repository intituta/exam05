#pragma once

#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>
#include <map>

class Warlock {

    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const& warlock);
        Warlock& operator=(Warlock const& warlock);
        std::map<std::string, ASpell* > mapSpell;
    public:
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();
        std::string const& getName() const;
        std::string const& getTitle() const;
        void setTitle(std::string const& title);
        void introduce() const;
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spell);
        void launchSpell(std::string spell, ATarget const& target);
};
