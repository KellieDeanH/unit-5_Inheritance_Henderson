#ifndef COLOR_H
#define COLOR_H
#include <string>

//Function prototypes
std::string color(int);
std::string reset();

std::string color(int color) {
  return "\x1b[" + std::to_string(color) + ";1m";
}

std::string reset() {
  return "\x1b[0m";
}
#endif

/* how to use the color
cout << color(32);
cout << "\nTeam name: " << s.home.getName()<<endl;
cout << "Coach name: " <<s.home.getCoachName()<<endl;
cout << "City: " <<s.home.getHomeCity()<< endl;
cout << reset();
*/