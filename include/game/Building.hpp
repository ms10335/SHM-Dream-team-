#pragma once
#include "City.hpp"

//class buid will be inherit when create new instance of specyfic building

class Building{
private:
    std::string name_{};
public:
    virtual ~Building();
};