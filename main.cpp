#include <iostream>
#include <locale>
#include <stdlib.h>
using namespace std;
class Goods{
private:
    string name; //наименование товара
    string date; //дата оформления
    double cost; //цена товара
    int quantity; //количество единиц товара
    int waybill; //номер накладной
public:
    Goods(string nname= "Имя", string ddate= "08.08.2000", double ccost= 100, int qquantity= 0, int wwaybill= 1337){
        name = nname; date = ddate;
        cost = ccost; quantity = qquantity;
        waybill = wwaybill;
        cout << "Был вызван конструктор!\n\n";
    };
    ~Goods(){
        cout << "Был вызван деструктор!\n\n";
    };
    Goods(const Goods &link){
        cout << "Был вызван конструктор копирования!\n\n";
        name = link.name; date = link.date;
        cost = link.cost; quantity = link.quantity;
        waybill = link.waybill;
    };
    void show(){
        cout << "Товар: " << name << "\n";
        cout << "Дата оформления: " << date << "\n";
        cout << "Стоимость: " << cost << "\n";
        cout << "Количество: " << quantity << "\n";
        cout << "№ накладной: " << waybill << "\n\n";
    };
    void edit(){
        cout << "Новое имя товара: "; std::cin >> name;
        cout << "Новая дата оформления: "; cin >> date;
        cout << "Новая стоимость: "; cin >> cost;
        cout << "Новое количество: "; cin >> quantity;
        cout << "Новый № накладной: "; cin >> waybill;
    };
    friend void f(Goods &ob);
    //friend void tovar(Goods &s);
};

//void f (Goods &ob){
   // cout<< ob.cost << "\n";}
//Goods tovar(Goods s){return s;};

int main(){
    setlocale(LC_CTYPE, "rus");
    cout << "Вход в функцию main!\n\n";
    Goods g1;
    g1.show();
    Goods g2("Сок", "03.10.2020", 70, 60, 7765237);
    g2.show();
    Goods g3(g2);
    g3.show();
    g1.edit();
    g1.show();
    //f(g3);
    //tovar(g1);
    cout << "Выход из функции main!\n\n";
return 0;
};
