#include <iostream>
#include <initializer_list>

#include "include/base.h"
#include "include/triangle.h"
#include "include/right_triangle.h"
#include "include/isosceles.h"
#include "include/equilateral.h"
#include "include/quadrangle.h"
#include "include/parallelogram.h"
#include "include/rectangle.h"
#include "include/square.h"
#include "include/rhombus.h"

void print_info(Base*);

int main() {
  // Triangle ABC;
  Triangle ABC(10, 20, 30, 50, 60, 70);
  ABC.print_info();
  Right_Triangle rABC(10, 20, 30, 50, 60);
  rABC.print_info();
  Isosceles ABA(10, 20, 50, 60);
  ABA.print_info();
  Equilateral AAA(30);
  AAA.print_info();
  Quadrangle ABCD(10, 20, 30, 40, 50, 60, 70, 80);
  ABCD.print_info();
  Rectangle ABABr(10, 20);
  ABABr.print_info();
  Square AAAA(20);
  AAAA.print_info();
  Parallelogram ABAB(20, 30, 30, 40);
  ABAB.print_info();
  Rhombus rhAAAA(30, 30, 40);
  rhAAAA.print_info();

  // std::streamsize prec = std::cout.precision();

}

void print_info(Base* pbs){
  pbs->print_info();
}
