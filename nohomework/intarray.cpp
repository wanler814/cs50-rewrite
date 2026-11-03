#include <iostream>

class IntArray
{
private:
    int* m_array;
    int  m_size;

public:
    IntArray(int N)
        : m_array{ new int[N]{} }
        , m_size{ N }
    {
        std::cout << "构造：分配了 " << m_size << " 个 int\n";
    }

    ~IntArray()
    {
        std::cout << "析构：释放了 " << m_size << " 个 int\n";
        delete[] m_array;
    }

    int get(int index) const { return m_array[index]; }
    void set(int index, int value) { m_array[index] = value; }
    int size() const { return m_size; }
};

int main()
{
    std::cout << "--- 进入 main ---\n";

    {
        IntArray a{5};
        for (int i = 0; i < a.size(); i++)
            a.set(i, i * 10);

        std::cout << "a[3] = " << a.get(3) << '\n';
        std::cout << "--- 即将离开内层作用域 ---\n";
    }

    std::cout << "--- 内层已结束 ---\n";

    IntArray* p = new IntArray{3};
    delete p;

    std::cout << "--- main 结束 ---\n";
    return 0;
}