#ifndef INTEGER_H
#define INTEGER_H
#include<iostream>

using namespace std;

//我们自己定义的整型类，将整型封装成类，以便于实现面向对象的封装

class Integer
{
    public:
        Integer();
        Integer(int value) :m_value(value){}

        //重载+运算符
        const Integer operator+(const Integer & other) const;
        const Integer operator-(const Integer & other) const;
        const Integer operator*(const Integer & other) const;
        const Integer operator/(const Integer & other) const;
        const Integer operator%(const Integer & other) const;

        //重载赋值符号 不需要使用const修饰函数
        const Integer operator=(const Integer& other);

        //二元运算符建议采用友元的方式重载
        friend const Integer operator+(int IntValue , const Integer & other);


        //流运算符一般只能呢使用友元的方式重载
        //今后就可以直接重载流运算符，以便封装某个对象的打印格式
        friend ostream & operator<<(ostream & out, const Integer & num);

        friend istream & operator>>(istream & in , Integer & num);


        int IntValue(){return m_value;}


        virtual ~Integer();

    protected:

    private:
        int m_value;      //实际的整型数字
};

#endif // INTEGER_H
