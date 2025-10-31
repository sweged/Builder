//
// Created by Nutzer on 22.08.2025.
//

#include "Address.h"

const std::string& Address::getFormattedAddress() const {
    return formattedAddress;
}

void Address::addLine(const std::string& line) {
    formattedAddress += line;
}





