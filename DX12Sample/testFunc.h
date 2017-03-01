#pragma once

#include "d3dMath.h"
#include <iostream>

inline void passVectors(XMVECTOR &v1, XMVECTOR &v2, XMVECTOR &v3, XMVECTOR &v4, 
  XMVECTOR &v5, XMVECTOR &v6)
{
  std::cout << v6.m128_f32[3] << std::endl;
}
