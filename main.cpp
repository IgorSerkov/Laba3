#include <iostream>
#include <locale>
#include <stdlib.h>
using namespace std;
class Goods{
private:
    string name; //������������ ������
    string date; //���� ����������
    double cost; //���� ������
    int quantity; //���������� ������ ������
    int waybill; //����� ���������
public:
    Goods(string nname= "���", string ddate= "08.08.2000", double ccost= 100, int qquantity= 0, int wwaybill= 1337){
        name = nname; date = ddate;
        cost = ccost; quantity = qquantity;
        waybill = wwaybill;
        cout << "��� ������ �����������!\n\n";
    };
    ~Goods(){
        cout << "��� ������ ����������!\n\n";
    };
    Goods(const Goods &link){
        cout << "��� ������ ����������� �����������!\n\n";
        name = link.name; date = link.date;
        cost = link.cost; quantity = link.quantity;
        waybill = link.waybill;
    };
    void show(){
        cout << "�����: " << name << "\n";
        cout << "���� ����������: " << date << "\n";
        cout << "���������: " << cost << "\n";
        cout << "����������: " << quantity << "\n";
        cout << "� ���������: " << waybill << "\n\n";
    };
    void edit(){
        cout << "����� ��� ������: "; std::cin >> name;
        cout << "����� ���� ����������: "; cin >> date;
        cout << "����� ���������: "; cin >> cost;
        cout << "����� ����������: "; cin >> quantity;
        cout << "����� � ���������: "; cin >> waybill;
    };
    friend void f(Goods &ob);
    //friend void tovar(Goods &s);
};

//void f (Goods &ob){
   // cout<< ob.cost << "\n";}
//Goods tovar(Goods s){return s;};

int main(){
    setlocale(LC_CTYPE, "rus");
    cout << "���� � ������� main!\n\n";
    Goods g1;
    g1.show();
    Goods g2("���", "03.10.2020", 70, 60, 7765237);
    g2.show();
    Goods g3(g2);
    g3.show();
    g1.edit();
    g1.show();
    //f(g3);
    //tovar(g1);
    cout << "����� �� ������� main!\n\n";
return 0;
};
