#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long int t=0, c=0, g=0, score=0;
  char card;

  while(cin >> card){
    switch (card) {
      case 'T':
        t++;
        break;
      case 'C':
        c++;
        break;
      case 'G':
        g++;
        break;
      default:
        break;
    }
  }

  score += (t*t + c*c + g*g);

  while(t > 0 && c > 0 && g > 0){
    score += 7;
    t--;
    c--;
    g--;
  }

  cout << score;

  return 0;
}
