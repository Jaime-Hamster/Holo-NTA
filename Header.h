#ifndef CUDADLL_H
#define CUDADLL_H

#include <cuda_runtime.h>
#include <device_launch_parameters.h>
#include <vector_types.h>
#include <helper_cuda.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define BIG 100000

  //declare all the functions I want to include in the .dll HERE
#ifdef __cplusplus
extern "C" {
#endif
	////////////
	//Main functions that operate on holograms
	/////////////
	__declspec(dllexport) void __cdecl ReturnMagnitudeZStack2(
		float* h_bfpMag,
		float* h_bfpPhase,
		float* h_ImgOutMag,
		float* zscale,
		int* arraySize,
		float* imgProperties,
		int* GPUspecs);
	

	__declspec(dllexport) void __cdecl PropagateZslices(
		float* h_bfpMag,
		float* h_bfpPhase,
		float* h_ImgOutRe,
		float* h_ImgOutIm,
		float* zscale,
		int* arraySize,
		float* imgProperties);

#ifdef __cplusplus
}
#endif

#endif // CUDADLL_H