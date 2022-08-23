#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator {

    private:
        std::map<std::string, ATarget* > mapTarget;
        TargetGenerator(TargetGenerator const& targetGenerator);
        TargetGenerator& operator=(TargetGenerator const& targetGenerator);
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const& type);
        ATarget* createTarget(std::string const& target);
};
