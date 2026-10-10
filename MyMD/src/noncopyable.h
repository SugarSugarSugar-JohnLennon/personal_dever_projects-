#pragma once

/* the class who extends this class will not be copyable */
class noncopyable{ 
protected:
    noncopyable() = default;
    ~noncopyable() = default; 
private:
    noncopyable(const noncopyable&) = delete;
    noncopyable& operator=(const noncopyable&) = delete;   
};