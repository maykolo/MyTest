#include <iostream>

using namespace std;

// 实现两个自定义数据类型相加的运算
class Person
{
public:

    Person(){}
    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }

//    Person operator+(Person p)
//    {
//        Person temp;
//        temp.m_A = this->m_A + p.m_A;
//        temp.m_B = this->m_B + p.m_B;

//        return temp;
//    }


    int m_A;
    int m_B;

};

Person operator +(Person p1, Person p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;

}

void test01()
{
    Person p1(10,20);
    Person p2(10,20);
    Person p3 = p1 + p2;
    // 如何实现自定义数据类型加，通过运算符重载技术实现
    cout << p3.m_A << endl;
    cout << p3.m_B << endl;

}


int main()
{
    test01();

    return 0;
}
