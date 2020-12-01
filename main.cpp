#include <iostream>
#include "warrior.h"
#include "archer.h"
#include "priest.h"

using namespace std;

int main()
{
    Warrior p1("Jack",20,0,0,2,0,5);
    Archer p2("Den",20,1,0,2,10,15);
    Priest p3("Jim",20,1,0,2,0,5);
    cout << "War hit archer"<<endl;
    cout << p2.get_name()<<" "<<p2.get_hp()<<endl;
    p1.Hit(p2);
    cout << p2.get_name()<<" "<<p2.get_hp()<<endl;
    cout << "Archer hit Priest"<<endl;
    cout << p3.get_name()<<" "<<p3.get_hp()<<endl;
    p2.Hit(p3);
    cout << p3.get_name()<<" "<<p3.get_hp()<<endl;
    cout << "Pries heal Archer"<<endl;
    cout << p2.get_name()<<" "<<p2.get_hp()<<endl;
    p3.useheal(p2);
    cout << p2.get_name()<<" "<<p2.get_hp()<<endl;
    cout << "add mana to priest"<<endl;
    p3.add_mana(50);
    cout << "Pries heal Archer"<<endl;
    cout << p2.get_name()<<" "<<p2.get_hp()<<endl;
    p3.useheal(p2);
    cout << p2.get_name()<<" "<<p2.get_hp()<<endl;
    cout << "Pries heal himself"<<endl;
    cout << p3.get_name()<<" "<<p3.get_hp()<<endl;
    p3.useheal(p3);
    cout << p3.get_name()<<" "<<p3.get_hp()<<endl;
    return 0;
}
