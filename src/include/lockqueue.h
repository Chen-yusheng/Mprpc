#pragma once
#include <queue>
#include <mutex>
#include <thread>
#include <condition_variable>

// 异步写日志的线程安全的日志队列
template <typename T> // 模板文件写在头文件中，不要声明和定义分离
class LockQueue
{
public:
    // 多个worker线程会写日志queue
    void Push(const T &data)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_queue.push(data);
        m_cond_var.notify_one();
    }

    // 只有一个线程读日志queue，写日志文件
    T Pop()
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        while (m_queue.empty())
        {
            // 日志队列为空，线程进入wait状态
            m_cond_var.wait(lock);
        }

        T data = m_queue.front();
        m_queue.pop();
        return data;
    }

private:
    std::queue<T> m_queue;
    std::mutex m_mutex;
    std::condition_variable m_cond_var;
};
