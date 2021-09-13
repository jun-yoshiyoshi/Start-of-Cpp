#include <cstdio>

class Class1
{
private:
    friend void func1(Class1 &); // フレンド関数
    friend class ClassFriend;    // フレンドクラス
    int num;
};

void func1(Class1 &c)
{
    c.num = 123;
}

class ClassFriend
{
public:
    static void func2(Class1 &c) { c.num = 456; }
};

int main()
{
    Class1 c;
    func1(c);
    ClassFriend::func2(c);
}