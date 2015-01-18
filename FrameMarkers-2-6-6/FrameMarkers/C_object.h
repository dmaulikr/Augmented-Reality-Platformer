/*==============================================================================
Copyright (c) 2010-2013 QUALCOMM Austria Research Center GmbH .
All Rights Reserved.
Qualcomm Confidential and Proprietary
==============================================================================*/


#ifndef _C_OBJECT_H_
#define _C_OBJECT_H_


#define NUM_C_OBJECT_VERTEX 372
#define NUM_C_OBJECT_INDEX 428 * 3


static const float CobjectVertices[NUM_C_OBJECT_VERTEX * 3] =
{
    -1.0,-1.0,2.5,  3.0,-1.0,2.5,  3.0,3.0,2.5,  -1.0,3.0,2.5
};

static const float CobjectTexCoords[NUM_C_OBJECT_VERTEX * 2] =
{
    0.0,0.0,1,0,1,1,0,1,1,0,1,1,1
};

static const float CobjectNormals[NUM_C_OBJECT_VERTEX * 3] =
{
    0.0,0.0,0,0,0.0,0,0.0,0.0,0,0.0,0.0,0,0,0,0,0,0,0,0,0,0
};

static const unsigned short CobjectIndices[NUM_C_OBJECT_INDEX] =
{
    0,1,3,1,2,3
};


#endif // _C_OBJECT_H_
