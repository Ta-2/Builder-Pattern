#ifndef BUILD_HPP
#define BUILD_HPP

#include <iostream>
using namespace std;

class Cookie {
public:
  void make_dough (){ cout << "make dough" << endl; };
  virtual void choose_food_color () = 0;
  virtual void use_cookie_cutter () = 0;
  void bake (){ cout << "bake dough" << endl; };
  virtual ~Cookie(){};
};

void make_cookie (Cookie &cookie){
  cookie.make_dough();
  cookie.choose_food_color();
  cookie.use_cookie_cutter();
  cookie.bake();
}

void make_baked_twice_cookie (Cookie &cookie){
  cookie.make_dough();
  cookie.choose_food_color();
  cookie.use_cookie_cutter();
  cookie.bake();
  cookie.bake();
}

#endif
