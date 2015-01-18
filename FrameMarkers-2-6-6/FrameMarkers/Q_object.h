/*==============================================================================
Copyright (c) 2010-2013 QUALCOMM Austria Research Center GmbH .
All Rights Reserved.
Qualcomm Confidential and Proprietary
==============================================================================*/


#ifndef _Q_OBJECT_H_
#define _Q_OBJECT_H_


#define NUM_Q_OBJECT_VERTEX 7
#define NUM_Q_OBJECT_INDEX 6


static const float QobjectVertices[NUM_Q_OBJECT_VERTEX * 3] =
{
    -1.0,-1.0,2.5,  3.0,-1.0,2.5,  3.0,3.0,2.5,  -1.0,3.0,2.5,  3,-2,2.5,  3,4,2.5,  4,2,2.5
};

static const float QobjectTexCoords[NUM_Q_OBJECT_VERTEX * 2] =
{
    0.0,0.0,1,0,1,1,0,1,1,0,1,1,1
};

static const float QobjectNormals[NUM_Q_OBJECT_VERTEX * 3] =
{
    0.0,0.0,0,0,0.0,0,0.0,0.0,0,0.0,0.0,0,0,0,0,0,0,0,0,0,0
};

static const unsigned short QobjectIndices[NUM_Q_OBJECT_INDEX] =
{
    0,1,3,1,2,3
};


#endif // _Q_OBJECT_H_
