#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
    
    std::map<std::string, ASpell* >::iterator begin = mapSpell.begin();
    std::map<std::string, ASpell* >::iterator end = mapSpell.end();
    while(begin != end) {
        
        delete begin->second;
        ++begin;
    }
    mapSpell.clear();
}

void SpellBook::learnSpell(ASpell* spell) {

    if (spell) {

        mapSpell.insert(std::pair<std::string, ASpell* >(spell->getName(), spell->clone()));
    }
}

void SpellBook::forgetSpell(std::string const& spell) {

    std::map<std::string, ASpell* >::iterator iterator = mapSpell.find(spell);
    if (iterator != mapSpell.end()) {
        
        delete iterator->second;
    }
    mapSpell.erase(spell);
}

ASpell* SpellBook::createSpell(std::string const& spell) {

    std::map<std::string, ASpell* >::iterator iterator = mapSpell.find(spell);
    if (iterator != mapSpell.end()) {
        
        return mapSpell[spell];
    }
    return NULL;
}
