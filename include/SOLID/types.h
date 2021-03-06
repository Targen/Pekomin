/*
 * SOLID - Software Library for Interference Detection
 * Copyright (c) 2001 Dtecta <gino@dtecta.com>
 *
 * All rights reserved.
 */

#ifndef SOLID_TYPES_H
#define SOLID_TYPES_H

#if defined(DLL_EXPORT) && defined(WIN32)
#define DECLSPEC __declspec( dllexport )
#else 
#if defined(WIN32)
#define DECLSPEC __declspec( dllimport )
#else
#define DECLSPEC
#endif
#endif

#define DT_DECLARE_HANDLE(name) typedef struct name##__ { int unused; } *name
    
typedef unsigned int  DT_Index;
typedef unsigned int  DT_Count;
typedef unsigned int  DT_Size;
typedef float         DT_Scalar; 
typedef int           DT_Bool;

#define DT_FALSE 0
#define DT_TRUE  1


typedef DT_Scalar DT_Vector3[3]; 
typedef DT_Scalar DT_Quaternion[4]; 

#endif
