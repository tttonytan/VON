// auto generated by using the following code as vtn.h and run gcc
// #include <THC/THC.h>

// #define VTN_(NAME) TH_CONCAT_4(VTN_, CReal, _, NAME)

// #include "generic/vtn_cuda_kernel_generic.h"
// #include "generic/THCGenerateFloatTypes_noHalf.h"

#ifdef __cplusplus
extern "C" {
#endif

int VTN_Cuda_BilinearSampler3DChannelFirst_updateOutput_wrap(THCState* state, THCudaTensor* inputTensor, THCudaTensor* grid, THCudaTensor* output);
int VTN_Cuda_BilinearSampler3DChannelFirst_updateGradInput_wrap(THCState* state, THCudaTensor* inputTensor, THCudaTensor* grid, THCudaTensor* gradInput, THCudaTensor* gradGrid, THCudaTensor* gradOutput);
int VTN_CudaDouble_BilinearSampler3DChannelFirst_updateOutput_wrap(THCState* state, THCudaDoubleTensor* inputTensor, THCudaDoubleTensor* grid, THCudaDoubleTensor* output);
int VTN_CudaDouble_BilinearSampler3DChannelFirst_updateGradInput_wrap(THCState* state, THCudaDoubleTensor* inputTensor, THCudaDoubleTensor* grid, THCudaDoubleTensor* gradInput, THCudaDoubleTensor* gradGrid, THCudaDoubleTensor* gradOutput);



#ifdef __cplusplus
}
#endif
