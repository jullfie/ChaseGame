#include <iostream>
#include "Arena.h" //подключение заголовочного файла для класса arena
#include "Character.h" // подключение заголовочного файла для класса character

void initializeGame(Arena& arena) { //ф-ия инициализации игры, принимает объект арена в качестве параметра
    Character character, opponent; // создание объектов 
    int side; //выбор стороны
    int amountOfMove; //переменная для кол-ва ходов
    std::cout << "Choose ur side\n"   //сообщение о выборе стороны
        "1.Prey\n"
        "2.Predator\n";
    std::cin >> side; //ввод стороны

    if (side == 1) { //инициализация в зависимости от выбранной стороны
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
    Arena arena; // создание объекта арена
    initializeGame(arena); // вызов ф- ии инициаизации игры
    while (1) { //бесконечный цикл игрового процесса

        //объявляем переменные для типа хода, расстояния и позиций персонажей 
        int type;
        int distance;
        Point2D characterPos, opponentPos;
        characterPos = arena.getCharacter().getPos(); // получаем позицию персонажа
        opponentPos = arena.getOpponent().getPos(); // получаем позицию противника
        int a = abs(characterPos.getX() - opponentPos.getX()); // считаем разницу по оси 
        int b = abs(characterPos.getY() - opponentPos.getY()); // считаем разницу по оси 
        float dis = sqrt(pow(a,2) + pow(b,2)); //считаем расстояние между персом и оппонентом

        arena.showArena(); // показ арены
        
// проверка условий победы или поражения
        if (dis < 1) {
            if (arena.getCharacter().getType() == "Predator") {
                std::cout << "U win!"; // сообщение о победе - поздравляю!
                break; // конец игры
            }
            else {
                std::cout << "U lose!"; // сообщение о проигрыше
                break; // конец игры
            }
        }

        if (!arena.getAmountOfMove()) {
            if (arena.getCharacter().getType() == "Predator") {
                std::cout << "U lose!"; // сообщение о проигрыше
                break; // конец игры
            }
            else {
                std::cout << "U win!"; // сообщение о победе - поздравляю!
                break; // конец игры
            }
        }
//выбор хода в зависимости от типа перса 
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
            std::cin >> type; //ввод типа хода
            arena.moveCharacter(type); // выполнение хода персонажа
            arena.moveOpponent(); //перемещение оппонента
        }
        else {
            std::cout << "Choose ur move\n"
                "0.v\n" //вниз
                "1.^\n" //вверх
                "2.>\n" //вправо
                "3.<\n"; //влево
            std::cin >> type; // ввод типа хода
            std::cout << "How far u wanna go\n";
            std::cin >> distance; //ввод расстояния для хода
            arena.moveCharacter(type, distance); //выполнение хода с указ расстоянием
            arena.moveOpponent(); // перемещ оппонента
        }
        system("cls"); // очистка экрана

    }
    
    return 0;
}
