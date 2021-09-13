//const 修飾された型の変数は，代入による値の変更が禁止されます。

const int n = 123;
n = 456; // 不可
//C++ では const 値はコンパイル時定数として扱われるため，const 整数は配列の要素数指定に使えます。
//(クラスのメンバ変数の場合は static const とすることでコンパイル時定数扱いになります。)

const int size = 32;
double arr[size];