#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title) {

    this->name = name;
    this->title = title;

    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {

    std::cout << this->name << ": My job here is done!" << std::endl;

    std::map<std::string, ASpell* >::iterator begin = mapSpell.begin();
    std::map<std::string, ASpell* >::iterator end = mapSpell.end();

    while(begin != end) {
        
        delete begin->second;
        ++begin;
    }
    mapSpell.clear();
}

std::string const& Warlock::getName() const {

    return this->name;
}

std::string const& Warlock::getTitle() const {

    return this->title;
}

void Warlock::setTitle(std::string const& title) {

    this->title = title;
}

void Warlock::introduce() const {

    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
    
    book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell) {

    book.forgetSpell(spell);
}
void Warlock::launchSpell(std::string spellName, ATarget const& target) {
    
    ATarget const* test = 0;
    if (test == &target) {
    
        return;
    }
    ASpell* temp = book.createSpell(spellName);
    if (temp) {
        temp->launch(target);
    }
}
