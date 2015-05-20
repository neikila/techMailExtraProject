#include <stdio.h>
#include <vector>
#include "Player.h"

class Game {
    public:
        Game();
        size_t getId();

        const std::vector < Player > &getAllPlayers();
        void addPlayer(Player newPlayer);
        void removePlayer(size_t id);

    private:
        bool isInGame;
        size_t myId;
        std::vector < Player > allPlayers;
};
