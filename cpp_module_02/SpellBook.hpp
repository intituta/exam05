#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook {

    private:
        SpellBook(SpellBook const& spellBook);
        SpellBook& operator=(SpellBook const& spellBook);
        std::map<std::string, ASpell* > mapSpell;
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const& spell);
        ASpell* createSpell(std::string const& spell);
};
