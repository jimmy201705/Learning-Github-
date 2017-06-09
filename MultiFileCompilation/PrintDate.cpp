#include <iostream>
#include <thread>
#include <chrono>
#include <clocale>

#include "boost/date_time/gregorian/gregorian.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"


using namespace std;
using namespace boost;
using namespace boost::gregorian;
using namespace boost::posix_time;


void PrintDate() {
    date d = day_clock::local_day();
    date_facet* dfacet = new date_facet("%Y年%m月%d日");
    cout.imbue(locale(cout.getloc(), dfacet));
    cout << d << endl;
    
    ptime tp = microsec_clock::local_time();
    time_facet* tfacet = new time_facet("%Y年%m月%d日%H点%M分%S%F秒");
    cout.imbue(locale(cout.getloc(), tfacet));
    cout << tp << endl;
}
