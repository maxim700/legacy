#include "character.h"
#include <string>
#include <cmath>
//Класс персонаж. Есть только поля и методы достпные персонажам, независимо от специализации
Character::Character(std::string name ,int hp,int x,int y,unsigned range){//конструктор, все параметры являются необязательными
    this->name = name;//Имя персонажа
    this->hp = hp;//Здоровье персонажа
    this->x = x;//Координаты персонжа
    this->y = y;
    this->range = range;//Расстояние, на которое может действовать персонаж

}
//геттеры полей класса
int Character::get_hp() const{
    return this->hp;
}
int Character::get_x() const{
    return this->x;
}
int Character::get_y() const{
    return this->y;
}
int Character::get_range() const{
    return this->range;
}
std::string Character::get_name() const{
    return this->name;
}
//Сеттеры полей класса
void Character::set_name(std::string x){
    this->name = x;
}
void Character::set_x(int x){
    this->x = x;
}
void Character::set_y(int y){
    this->y =y;
}
void Character::set_range(unsigned int range){
    this->range = range;
}
void Character::gotoxy(int x,int y){//Процедура перемщения персонажа
    this->x += x;
    this->y += y;
}
void Character::damage(int k){//Процедура получения урона персонажем
    this->hp -= k;
    if (this->hp<0) this->hp =0;
}
void Character::heal(int k){//Процедура восстановления здоровья персонажем
    this->hp += k;
}
bool Character::checkrange(int x,int y){//Процедура проверки расстояния до точки (x,y)

    return sqrt((x - this->x)*(x - this->x)+(y - this->y)*(y - this->y))<=this->range;
}
