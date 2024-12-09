#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>

using namespace std;

// Overload for pair
template<typename F, typename S>
ostream& operator<<(ostream& os, const pair<F, S>& p) {
    return os << "(" << p.first << ", " << p.second << ")";
}

// Overload for vector
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ", ";
        os << *it;
    }
    return os << "}";
}

// Overload for set
template<typename T>
ostream& operator<<(ostream& os, const set<T>& v) {
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ", ";
        os << *it;
    }
    return os << "]";
}

// Overload for multiset
template<typename T>
ostream& operator<<(ostream& os, const multiset<T>& v) {
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ", ";
        os << *it;
    }
    return os << "]";
}

// Overload for map
template<typename F, typename S>
ostream& operator<<(ostream& os, const map<F, S>& v) {
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

// Debugging macro to print variable names and values
#define dbg(args...) do { cerr << #args << " : "; debug_out(args); } while(0)

// Helper function for no arguments (end of recursion)
void debug_out() { cerr << endl; }

// Overload for arrays
template<typename T>
void debug_out(T a[], int n) {
    for (int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

// Variadic template function to print multiple arguments
template<typename T, typename... Args>
void debug_out(T arg, Args... args) {
    cerr << arg << ' ';
    debug_out(args...);
}

#endif // DEBUG_H
