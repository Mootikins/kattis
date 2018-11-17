#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int hour, min;

  cin >> hour >> min;

  min -= 45;
  if (min < 0) {
    min += 60;
    hour--;
    if (hour < 0) {
      hour += 24;
    }
  }

  cout << hour << " " << min;
  return 0;
}
