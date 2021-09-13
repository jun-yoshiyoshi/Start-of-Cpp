#include <cstdio>

// Clock クラスの定義
class Clock
{
private:
    int hour;
    int minute;

public:
    void set(int hour, int minute);
    void print();
};

void Clock::set(int hour, int minute)
{
    this->hour = hour % 24;
    this->minute = minute % 60;
}

void Clock::print()
{
    printf("%02d:%02d\n", hour, minute);
    fflush(stdout);
}

int main()
{
    Clock c; // インスタンス化
    c.set(27, 70);
    c.print(); // 出力: 06:30
}