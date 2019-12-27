
#include "date.h"
#include <iomanip>
#include <iostream>
#include <cstdint>

template <class D>
void
limit(const std::string& msg)
{
    using namespace date;
    using namespace std;
    using namespace std::chrono;
    using dsecs = sys_time<duration<uint64_t>>;
    constexpr auto ymin = sys_days{year::min()/January/1};
    constexpr auto ymax = sys_days{year::max()/12/last};
    auto dmin =sys_time<D>::min();


    //auto dmin = sys_time<D>(seconds(1577175789));//sys_time<D>::min();
    //dmin = std::chrono::seconds(1079025209);
    constexpr auto dmax = sys_time<D>::max();

    cout << left << setw(24) << msg << " : [";
    //cout << ymin;
    cout << dmin;
    cout << ", ";
    cout << dmax;/*
    if (ymin > dsecs{dmin})
        cout << ymin;
    else
        cout << dmin;
    cout << ", ";
    if (ymax < dsecs{dmax})
        cout << ymax;
    else
        cout << dmax;*/
    cout << "]\n";
}

void
limits()
{
    using namespace std::chrono;
    using namespace std;
    using picoseconds = duration<int64_t, pico>;
    using fs = duration<int64_t, ratio_multiply<ratio<100>, nano>>;
    //    limit<picoseconds>("picoseconds range is");
    //    limit<nanoseconds>("nanoseconds range is");
    //    limit<fs>("VS system_clock range is");
    //    limit<microseconds>("microseconds range is");
    //    limit<milliseconds>("milliseconds range is");
    limit<seconds>("seconds range is");
    //    limit<minutes>("minutes range is");
    //    limit<hours>("hours range is");
}

#include <map>

int main(){
    //limits();
    using namespace date;
    using namespace std;
    using namespace std::chrono;
    using dsecs = sys_time<duration<long>>;
    auto dmin = sys_time<seconds>(seconds(-100000000));


    map<dsecs,string> mappa;
    dsecs d = dsecs(seconds(1079025209));

    mappa.insert({dsecs(seconds(2079025209)),"ciao"});

    mappa.insert({dsecs(seconds(1079025209)),"ciao"});

    mappa.insert({dsecs(seconds(-1079025209)),"ciao"});

    for (auto&& iter : mappa){
        cout << iter.first << "\n";
    }
}
