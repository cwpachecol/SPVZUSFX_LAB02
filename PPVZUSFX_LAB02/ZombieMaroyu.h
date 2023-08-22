#pragma once
#include "ZombieDancer.h"
class ZombieMaroyu :
    public ZombieDancer
{
    string apodo;
    string estiloBaile;
    string tipoVestimenta;

public:
    ZombieMaroyu(string _nombre) : ZombieDancer(_nombre) {};
    void bailar();

};

