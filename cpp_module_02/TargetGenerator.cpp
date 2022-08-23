#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {

    std::map<std::string, ATarget* >::iterator begin = mapTarget.begin();
    std::map<std::string, ATarget* >::iterator end = mapTarget.end();
    while(begin != end) {
        
        delete begin->second;
        ++begin;
    }
    mapTarget.clear();
}

void TargetGenerator::learnTargetType(ATarget* target) {

    if (target) {
        
        mapTarget.insert(std::pair<std::string, ATarget* >(target->getType(), target->clone()));
    }
}

void TargetGenerator::forgetTargetType(std::string const& type) {

    std::map<std::string, ATarget* >::iterator iterator = mapTarget.find(type);
    if (iterator != mapTarget.end()) {
        
        delete iterator->second;
    }
    mapTarget.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const& target) {

    std::map<std::string, ATarget* >::iterator iterator = mapTarget.find(target);
    if (iterator != mapTarget.end()) {
        
        return mapTarget[target];
    }
    return NULL;
}
