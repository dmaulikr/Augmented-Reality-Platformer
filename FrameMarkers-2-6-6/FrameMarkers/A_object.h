/*==============================================================================
Copyright (c) 2010-2013 QUALCOMM Austria Research Center GmbH .
All Rights Reserved.
Qualcomm Confidential and Proprietary
==============================================================================*/


#ifndef _A_OBJECT_H_
#define _A_OBJECT_H_


#define NUM_A_OBJECT_VERTEX 14
#define NUM_A_OBJECT_INDEX 60


static const float AobjectVertices[NUM_A_OBJECT_VERTEX * 3] =
{
    0,0,2,  2.0,0,2,  2.0,2,2,  0,2.0,2,  2,-1,2,  2,3,2,  3,1,2,
    0,0,1,  2.0,0,1,  2.0,2,1,  0,2.0,1,  2,-1,1,  2,3,1,  3,1,1
};

static const float AobjectTexCoords[NUM_A_OBJECT_VERTEX * 2] =
{
   0.0,0.0,1,0,1,1,0,1,1,0,1,1,1 
};

static const float AobjectNormals[NUM_A_OBJECT_VERTEX * 3] =
{
    0.0,0.0,0,0,0.0,0,0.0,0.0,0,0.0,0.0,0,0,0,0,0,0,0,0,0,0
};

static const unsigned short AobjectIndices[NUM_A_OBJECT_INDEX] =
{
    0,1,3, 1,2,3, 4,6,5,
    7,8,10, 8,9,10, 11,13,12,
    0,10,7, 3,10,0, 0,7,1, 7,8,1, 3,2,10, 2,9,10, 1,8,11, 11,4,2, 2,5,12, 12,9,2,
    4,11,6, 11,13,6, 6,13,5, 5,13,12
};


#endif // _A_OBJECT_H_
