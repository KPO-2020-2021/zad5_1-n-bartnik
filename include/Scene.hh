#pragma once

#include "Drone.hh"

class Scene
{
    Drone TabDronów[2];
    public:
    Drone WezAktDrona(const Drone &dron) const;
    Drone UzyjAktDrona(Drone &dron) const;
};