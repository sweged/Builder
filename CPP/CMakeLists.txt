cmake_minimum_required(VERSION 4.0)
project(CPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(CPP main.cpp
        Address.cpp
        Address.h
        AddressBuilder.cpp
        AddressBuilder.h
        GermanAddressBuilder.cpp
        GermanAddressBuilder.h
        AddressDirector.cpp
        AddressDirector.h
        FrenchAddressBuilder.cpp
        FrenchAddressBuilder.h
        GBAddressBuilder.cpp
        GBAddressBuilder.h
        USAddressBuilder.cpp
        USAddressBuilder.h)
