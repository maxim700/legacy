#include "priest.h"

Priest::Priest(std::string name,int hp,int x,int y,unsigned range,unsigned mana ,unsigned mih ){
    this->name = name;
    this->hp = hp;
    this->x = x;
    this->y = y;
    this->range = range;
    this->mana = mana;
    this->manainhp = mih;
}
void Priest::useheal(Character &target){
    if ((this->checkrange(target.get_x(),target.get_y()))&&(this->mana>=5*this->manainhp)){
        target.heal(5);
        this->mana -= 5*this->manainhp;
    }
    //Возможно стоит вернуть "Слишком далеко", но не уверен, как это стоит сделат,
}
void Priest::set_mana(unsigned k){
    this->mana = k;
}
void Priest::set_mih(unsigned k){
    this->manainhp = k;
}
void Priest::add_mana(unsigned k){
    this->mana += k;
}
unsigned Priest::get_mana()const{
    return this->mana;
}
unsigned Priest::get_mih()const{
    return this->manainhp;
}
