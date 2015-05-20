#include <stdio.h>
#include <string>
#include "Vector.h"

class Player {
    public:
        Player(size_t, std::string);
        std::string getName();
        const Vector &getCoord();
        Vector move();
        Vector setSpeed(Vector newSpeed);
    private:
        std::string name;
        size_t radius;
        Vector coordinate;
};
