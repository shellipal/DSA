#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // map<string, int> m;

    // m["Apple"] = 100;
    // m["mangoo"] = 80;
    // m["Banana"] = 70;
    // m["orange"] = 50;
    // m["kiwi"] = 150;
    // m["Banana"] = 80;

    // m.insert({"pineapple", 100});
    // m.emplace("watermellon", 50);

    // m.erase(("kiwi"));

    // MULTI MAP.............................................

    // multimap<string, int> mm;
    // mm.insert({"tv", 50});
    // mm.insert({"tv", 50});
    // mm.insert({"tv", 500});
    // mm.emplace("tv", 50);
    // mm.emplace("tv", 50);

    unordered_map<string, int> um;

    um.insert({"tv", 200});
    um.insert({"tv", 500});
    um.insert({"watch", 500});
    um.emplace("tv", 50);
    um.emplace("laptop", 5000);
    um.emplace("tv", 100);

    for (auto p : um)
    {
        cout << p.first << " " << p.second << " " << endl;
    }

    // cout << "count : " << m.count("Banana") << endl;
    // cout << "value of Banana : " << m["Banana"] << endl;

    // if (m.find("kiwi") != m.end())
    // {
    //     cout << "found\n";
    // }
    // else
    // {
    //     cout << "not found\n";
    // }
    return 0;
}