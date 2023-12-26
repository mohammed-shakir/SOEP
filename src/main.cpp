#include <iostream>
#include "interface/menu.h"
#include "utilities/logger.h"
#include "main_modules/collision_analysis/collision_calculator.h"
#include "main_modules/celestial_events/celestial_calculator.h"
#include "main_modules/satellite_tracking/satellite_calculator.h"

int main()
{
    Menu menu;
    menu.displayMessage();

    Logger logger;
    logger.displayMessage();

    CollisionCalculator collisionCalculator;
    collisionCalculator.displayMessage();

    CelestialCalculator celestialCalculator;
    celestialCalculator.displayMessage();

    SatelliteCalculator satelliteCalculator;
    satelliteCalculator.displayMessage();

    return 0;
}