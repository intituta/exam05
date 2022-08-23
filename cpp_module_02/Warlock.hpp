#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <map>

class Warlock {

    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const& warlock);
        Warlock& operator=(Warlock const& warlock);
        std::map<std::string, ASpell* > mapSpell;
        SpellBook book;
    public:
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();

        std::string const& getName() const;
        std::string const& getTitle() const;

        void setTitle(std::string const& title);

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string name);
        void launchSpell(std::string spellName, ATarget const& target);

        void introduce() const;
};
