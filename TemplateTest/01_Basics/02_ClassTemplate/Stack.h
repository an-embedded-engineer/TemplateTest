#pragma once
#include <stdexcept>

template <class T>
class Stack
{
private:
    T* m_Data;         /* データ格納領域へのポインタ */
    size_t m_Index;    /* 現在のインデックス */
    size_t m_Capacity; /* キャパシティ */

public:
    /* コンストラクタ */
    explicit Stack(size_t capacity)
        : m_Data(nullptr)
        , m_Index(0)
        , m_Capacity(capacity)
    {
        this->m_Data = new T[this->m_Capacity];
    }

    /* デストラクタ */
    ~Stack()
    {
        if (this->m_Data != nullptr)
        {
            delete[] this->m_Data;
            this->m_Data = nullptr;
        }
    }

    /* 要素を追加 */
    void Push(const T& data)
    {
        if (this->m_Index < this->m_Capacity)
        {
            this->m_Data[this->m_Index++] = data;
        }
        else
        {
            throw std::runtime_error("Stack Capacity Over");
        }
    }

    /* 先頭要素を取得 */
    T Top()
    {
        if (this->m_Index > 0)
        {
            return this->m_Data[this->m_Index - 1];
        }
        else
        {
            throw std::runtime_error("No Element");
        }
    }

    /* 先頭要素を取り出す */
    void Pop()
    {
        if (this->m_Index > 0)
        {
            this->m_Index--;
        }
        else
        {
            /* No Element */
        }
    }
};
