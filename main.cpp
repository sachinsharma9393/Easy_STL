#include <iostream>
#include "algorithm"
#include "numeric"
#include "vector"
#include "unordered_set"
#include "string"
#include "map"
using namespace std;
int main() {
int test;
    std::vector<int >v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    for(int i=0;i<10;i++)
    {
        cout<<v.at(i);
    }
  v.front();
    return 0;

}