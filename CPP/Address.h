//
// Created by Nutzer on 22.08.2025.
//

#pragma once

#include <string>

class Address {
public:
    Address() = default;
    ~Address() = default;

    const std::string& getFormattedAddress() const;
    void addLine(const std::string& line);

private:
    std::string formattedAddress = "";
};

