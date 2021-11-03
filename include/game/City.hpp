#pragma once
#include "Island.hpp"
#include <vector>

//on HLD Diagram we have
//Store, Weaponry, Shipyard, Inn, Port

class City {
private:
    std::string name_{};
    size_t citySize_{};
    std::vector<std::unique_ptr<Building>> cityBuildings{};
public:
    City(std::string& name, size_t sizeCity);
};