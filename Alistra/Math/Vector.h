#pragma once
#include "Base_Math.h"

VECTOR VECTORSet(float x, float y, float z, float w);
VECTOR VECTORSubstract(VECTOR *V1, VECTOR *V2);
VECTOR VECTORMergeXY(VECTOR *V1, VECTOR *V2);
VECTOR VECTORMergeZW(VECTOR *V1, VECTOR *V2);
VECTOR VECTOR3Dot(VECTOR *V1, VECTOR *V2);
VECTOR VECTOR3LengthSq(VECTOR *V);
VECTOR VECTORSqrt(VECTOR *V);
VECTOR VECTOR3Length(VECTOR *V);
VECTOR VECTOR3Normalize(VECTOR *V);
VECTOR VECTOR3Cross(VECTOR *V1, VECTOR *V2);
VECTOR VECTORNegate(VECTOR *V);
VECTOR VECTORSelect(VECTOR *V1, VECTOR *V2, VECTOR *Control);