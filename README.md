# Space Object Event Predictor (SOEP)

SOEP would be a command-line based C++ application designed to predict and calculate significant events related to celestial bodies and artificial satellites. The project would focus on backend calculations and data processing.

Core Features:

- Celestial Event Prediction: Calculate and predict celestial events like eclipses, transits, and conjunctions based on celestial body positions and orbits.
- Satellite Pass Predictor: Analyze orbital data to predict satellite passes over specific locations, useful for satellite tracking and observation planning.
- Collision Probability Calculator: Compute the probability of collisions between space objects, utilizing data on their orbits and physical properties.

```
docker build -t soep-app .
docker run --rm soep-app
```
