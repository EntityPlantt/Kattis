#include <iostream>
#include <algorithm>
using namespace std;
string months[12] = {
    "Jan", "Feb", "Mar",
    "Apr", "May", "Jun",
    "Jul", "Aug", "Sep",
    "Oct", "Nov", "Dec"
};
int numOfDays[12] = {
    31, 29, 31, 30,
    31, 30, 31, 31,
    30, 31, 30, 31
};
int dayIndex(int date, string month) {
    int m = distance(months, find(months, months + 12, month));
    while (m) {
        date += numOfDays[--m];
    }
    return date;
}
int zodiacStart[13] = {0,
    dayIndex(21, "Jan"), dayIndex(20, "Feb"),
    dayIndex(21, "Mar"), dayIndex(21, "Apr"),
    dayIndex(21, "May"), dayIndex(22, "Jun"),
    dayIndex(23, "Jul"), dayIndex(23, "Aug"),
    dayIndex(22, "Sep"), dayIndex(23, "Oct"),
    dayIndex(23, "Nov"), dayIndex(22, "Dec")
};
string zodiacSign[13] = {"Capricorn",
    "Aquarius", "Pisces", "Aries",
    "Taurus", "Gemini", "Cancer",
    "Leo", "Virgo", "Libra",
    "Scorpio", "Sagittaurus", "Capricorn"
};
string zodiacSignFor(int di) {
    for (int i = 12; i >= 0; i--) {
        if (di >= zodiacStart[i]) {
            return zodiacSign[i];
        }
    }
}
int main() {
	int n;
	cin >> n;
	while (n--) {
	    int d;
	    string m;
	    cin >> d >> m;
	    d = dayIndex(d, m);
	    cout << zodiacSignFor(d) << '\n';
	}
	return 0;
}