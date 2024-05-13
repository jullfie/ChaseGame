#include <iostream>
#include "Arena.h"
#include "Character.h"

void initializeGame(Arena& arena) {
    Character character, opponent;
    int side;
    int amountOfMove;
    std::cout << "Choose ur side\n"
        "1.Prey\n"
        "2.Predator\n";
    std::cin >> side;

    if (side == 1) {
        character.setType("Prey");
        character.initialize();
        opponent.setType("Predator");
        opponent.initialize(character.getPos());
    }
    else if (side == 2) {
        character.setType("Predator");
        character.initialize();
        opponent.setType("Prey");
        opponent.initialize(character.getPos());
    }
    else throw std::invalid_argument("invalid arg");

    std::cout << "Choose amount of move\n";
    std::cin >> amountOfMove;

    arena.setAmountOfMove(amountOfMove);
    arena.setCharacter(character);
    arena.setOpponent(opponent);
    system("cls");
}


int main() {
    Arena arena;
    initializeGame(arena);
    while (1) {

        int type;
        int distance;
        Point2D characterPos, opponentPos;
        characterPos = arena.getCharacter().getPos();
        opponentPos = arena.getOpponent().getPos();
        int a = abs(characterPos.getX() - opponentPos.getX());
        int b = abs(characterPos.getY() - opponentPos.getY());
        float dis = sqrt(pow(a,2) + pow(b,2));

        arena.showArena();

        if (dis < 1) {
            if (arena.getCharacter().getType() == "Predator") {
                std::cout << "U win!";
                break;
            }
            else {
                std::cout << "U lose!";
                break;
            }
        }

        if (!arena.getAmountOfMove()) {
            if (arena.getCharacter().getType() == "Predator") {
                std::cout << "U lose!";
                break;
            }
            else {
                std::cout << "U win!";
                break;
            }
        }

        if (arena.getCharacter().getType() == "Prey") {
            std::cout << "Choose ur move\n"
                "0.v\n"
                "1.^\n"
                "2.>\n"
                "3.<\n"
                "4.\\,\n"
                "5.,/\n"
                "6./'\n"
                "7.'\\\n";
            std::cin >> type;
            arena.moveCharacter(type);
            arena.moveOpponent();
        }
        else {
            std::cout << "Choose ur move\n"
                "0.v\n"
                "1.^\n"
                "2.>\n"
                "3.<\n";
            std::cin >> type;
            std::cout << "How far u wanna go\n";
            std::cin >> distance;
            arena.moveCharacter(type, distance);
            arena.moveOpponent();
        }
        system("cls");

    }
    
    return 0;
}
