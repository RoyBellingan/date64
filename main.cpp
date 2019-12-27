//// Brief:  C++17 Structured bindings experiments.
//// Author: Caio Rodrigues
////--------------------------------------------------
//#include <iostream>
////#include <string>
////#include <vector>
////#include <deque>
////#include <map>
////#include <tuple>
//#include <iomanip>
////#include <algorithm>
////#include <thread>
////#include <mutex>
////#include <atomic>
////#include <memory>
////#include <chrono>
////#include <sstream> // stringstream

//using namespace std;
//void task(){
//    static atomic<int> num = 0;
//    num++;
//    std::mutex m;
//    m.lock();


//    printf("ciao Phil %d\n", num.load());
//}

//atomic <int> shared = 0;
//void task2(){
//    for(int i = 0; i < 1000000; i++){
//        shared++;
//    }
//}

//void miao(string* bu){
//    bu->append("miao");
//}



//std::string beautify_duration(std::chrono::seconds input_seconds)
//{
//    using namespace std::chrono;
//    typedef duration<int, std::ratio<86400>> days;
//    auto d = duration_cast<days>(input_seconds);
//    input_seconds -= d;
//    auto h = duration_cast<hours>(input_seconds);
//    input_seconds -= h;
//    auto m = duration_cast<minutes>(input_seconds);
//    input_seconds -= m;
//    auto s = duration_cast<seconds>(input_seconds);

//    auto dc = d.count();
//    auto hc = h.count();
//    auto mc = m.count();
//    auto sc = s.count();

//    std::stringstream ss;
//    ss.fill('0');
//    if (dc) {
//        ss << d.count() << "d";
//    }
//    if (dc || hc) {
//        if (dc) { ss << std::setw(2); } //pad if second set of numbers
//        ss << h.count() << "h";
//    }
//    if (dc || hc || mc) {
//        if (dc || hc) { ss << std::setw(2); }
//        ss << m.count() << "m";
//    }
//    if (dc || hc || mc || sc) {
//        if (dc || hc || mc) { ss << std::setw(2); }
//        ss << s.count() << 's';
//    }

//    return ss.str();
//}

//#include <inttypes.h>

//#include <stdio.h>
///*      UINT64_MAX 18446744073709551615ULL */
//#define P10_UINT64 10000000000000000000ULL   /* 19 zeroes */
//#define E10_UINT64 19

//#define STRINGIZER(x)   # x
//#define TO_STRING(x)    STRINGIZER(x)
//typedef unsigned __int128 uint128_t;
//int print_u128_u(uint128_t u128)
//{
//    int rc;
//    if (u128 > UINT64_MAX)
//    {
//        uint128_t leading  = u128 / P10_UINT64;
//        uint64_t  trailing = u128 % P10_UINT64;
//        rc = print_u128_u(leading);
//        rc += printf("%." TO_STRING(E10_UINT64) PRIu64, trailing);
//    }
//    else
//    {
//        uint64_t u64 = u128;
//        rc = printf("%" PRIu64, u64);
//    }
//    return rc;
//}

//using namespace chrono;
//int main(){




//    using t = chrono::duration<__int128_t>;
//    t t1;
//    __int128_t v0 = 0;
//    uint64_t* v1 = (uint64_t*)&v0;

//    auto s1 = sizeof (__int128_t);

//    v1[1] = 0;
//    v1[0] = 123456789;

//    print_u128_u(v0);
//    auto v2 = v0 + 12345;

//    t1 += t(1234);

////        std::chrono::seconds sec(5);
////        auto v = sec.min();
////        auto v2 = sec.max();

////        auto year = std::chrono::duration_cast<std::chrono::hours>(v2);
////           std::chrono::system_clock::time_point t0;
////        time_point<system_clock,duration<int64_t>> t2;

////        auto m = t2.max();


////            auto max = beautify_duration(m - t2);
////        //    std::stringstream ss;
////        //    ss << std::put_time(std::localtime(time1.max().count()), "%Y-%m-%d %X");
////            cout << max << "\n";

////            auto y = m.time_since_epoch().count() / (3600 * 24 * 365);

////        duration_cast<std::chrono::hours>(m - t2).count();

////        template<

////            class Clock,
////            class Duration = typename Clock::duration
////        > class ;

////    string* p1 = new string("phil1");
////    const string* p2 = p1;
////    //p2->append("no");
////    p2 = nullptr;

////    auto start = std::chrono::system_clock::now();
////        auto end = std::chrono::system_clock::now();

////        std::chrono::duration<double> elapsed_seconds = end-start;
////        std::time_t end_time = std::chrono::system_clock::to_time_t(end);

////        std::cout << "finished computation at " << std::ctime(&end_time)
////                  << "elapsed time: " << elapsed_seconds.count() << "s\n";

////    auto now = std::chrono::system_clock::now();
////    auto in_time_t = std::chrono::system_clock::to_time_t(now);

//    //__int128 v = (__int128) 1 << 62;
//    //t time1 (v);


////    auto max = beautify_duration(time1);
////    std::stringstream ss;
////    ss << std::put_time(std::localtime(time1.max().count()), "%Y-%m-%d %X");
// //   cout << max << "\n";

//    {
//        //string* s;
//        shared_ptr<string> s = make_shared<string>();
//        auto s2 = s;

//        s->append("ciao");
//        miao(s.get());
//        //s.reset();
//        {
//            auto s3 = s;
//            s3->append(" sono Phil");
//        }
//    }

//    //    auto t1 = std::thread(task2);
//    //    auto t2 = std::thread(task2);
//    //    t1.join();
//    //    t2.join();
//    //    printf("Ciao Phil sono %d \n", shared.load());
//    int x = 0;
//}


//auto try1(){
//    return std::pair<std::string, int>("C++", 17);
//}


////int main2(){
////    {
////        auto [name, version] = try1();
////        std::cout << " name = " << name << " ; version = " << version << std::endl;
////    }
////    {
////        std::puts("\n=== EXPERIMENT 1: Decompose: pair - binding - pair =====");
////        auto p = std::pair<std::string, int>("C++", 17);
////        auto [name, version] = p;
////        std::cout << " name = " << name << " ; version = " << version << std::endl;
////    }

////    {
////        std::puts("\n=== EXPERIMENT 2: Decompose: map / 'hash-table' - =====");
////        auto database = std::map<std::string, int>{{"c++", 17}, {"rust", 10}, {"Forth", 200}};
////        for(const auto& [key, value] : database)
////            std::cout << "key = " << key << " ; value = " << value << std::endl;
////    }

////    {
////        std::puts("\n=== EXPERIMENT 3: Decompose: tuple - =====");
////        using DatabaseRow = std::tuple<int, std::string, double>;
////        auto database = std::vector<DatabaseRow>{
////            {100, "Fried tasty fresh bacon",   3.45},
////            {400, "Super hot toasted coffee.", 6.25},
////            {500, "Fresh Orange Juice",        4.50},
////        };

////        for(const auto& [id, name, price]: database)
////            std::cout << " ROW=> id = " << id
////                      << " ; name = "   << name
////                      << " ; price = "  << price
////                      << std::endl;
////    }

////    {
////        std::puts("\n=== Decompose: tuple with Reference - =====");
////        using DatabaseRow = std::tuple<int, std::string, double>;
////        auto row = DatabaseRow{200, "Coffee", 4.5};
////        auto& [id, name, price] = row;

////        std::printf(" [BEFORE] => Product{ id = %d ; name = %s ; price = %f }\n",
////                    std::get<0>(row), std::get<1>(row).c_str(), std::get<2>(row));

////        id = 500, name = "italian-sytle coffee", price = 10.60;

////        std::printf(" [AFTER] => Product{ id = %d ; name = %s ; price = %f }\n",
////                    std::get<0>(row), std::get<1>(row).c_str(), std::get<2>(row));
////    }

////    {
////        std::puts("\n=== EXPERIMENT 4: Decompose: Structs - =====");
////        struct GeoCoordinate{
////            std::string name;
////            double      latitude;
////            double      longitude;
////        };
////        auto geoDatabase = std::deque<GeoCoordinate>{
////             {"Bogota",         4.7110,  -74.0721}
////            ,{"Beijing",       39.9042,  116.4074}
////            ,{"Gauteng",      -26.2708,   28.1123}
////            ,{"Buenos Aires", -34.6037,  -58.3816}
////            ,{"Brasilia",     -15.8267,  -47.9218}
////        };
////        std::cout << std::setprecision(3);
////        std::for_each(geoDatabase.begin(), geoDatabase.end(),
////                      [](const auto& city){
////                          const auto& [name, lat, lon] = city;
////                          std::cout << std::setw(15) << std::left  << name
////                                    << std::setw(8) << std::right << lat
////                                    << std::setw(8) << lon
////                                    << "\n";

////                      });
////    }

////    {
////        std::puts("\n=== EXPERIMENT 5: Decompose: C-Array - =====");
////        double array [3] = {10.23, 90.23, 100.0};
////        auto [x, y, z] = array;
////        std::printf(" array { x = %.3f ; y = %.3f ; z = %.3f }", x, y, z);

////    }
////    return 0;
////}

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

int main(){
    limits();
    using namespace date;
    using namespace std;
    using namespace std::chrono;
    using dsecs = sys_time<duration<double>>;
     auto dmin = sys_time<seconds>(seconds(-100000000));

     auto i = sizeof(int);


     int x = 0;



}
