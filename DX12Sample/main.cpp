#include "d3dApp.h"
#include "d3dMath.h"

#include <iostream>

int main()
{
  XMVECTOR tvec{ 1.0f, 2.0f, 3.0f, 4.0f };
  AVXVECTOR tavec{ 1.0f, 2.0f, 3.0, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f }; 
  std::cout << tvec.m128_f32[0] << std::endl;
}