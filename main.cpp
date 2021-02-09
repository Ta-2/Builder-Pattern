#include <iostream>
#include "Builder.hpp"
using namespace std;

class white_circle_cookie : public Cookie{
public:
  void choose_food_color (){ cout << "choose white food color" << endl; };
  void use_cookie_cutter (){ cout << "use circle cookie cutter" << endl; };
};

class yellow_star_cookie : public Cookie{
public:
  void choose_food_color (){ cout << "choose yellow food color" << endl; };
  void use_cookie_cutter (){ cout << "use star cookie cutter" << endl; };
};

int main(){
  white_circle_cookie acc;
  yellow_star_cookie ysc;

  cout << "bake white_circle_cookie" << endl;
  make_cookie(acc);
  cout << endl << "bake yellow_star_cookie" << endl;
  make_cookie(ysc);

  cout << endl << "bake baked twice white_circle_cookie" << endl;
  make_baked_twice_cookie(acc);
  cout << endl << "bake baked twice yellow_star_cookie" << endl;
  make_baked_twice_cookie(ysc);

  return 0;
}
