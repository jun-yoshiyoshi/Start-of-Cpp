#include <cstdio>

// Clock クラスの定義
class Clock
{
public:
    int hour;
    int minute;
    void set(int hour, int minute)
    {
        this->hour = hour % 24;
        this->minute = minute % 60;
    };
    void print()
    {
        printf("%02d:%02d\n", hour, minute);
        fflush(stdout);
    };
};

int main()
{
    Clock c; // インスタンス化
    c.set(27, 70);
    c.print(); // 出力: 06:30
}