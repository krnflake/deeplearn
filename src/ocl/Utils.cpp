#include "Utils.h"

namespace ocl {
namespace util {

#define CL_ERROR(x) case (x): return #x;

const char* GetCLErrorString(cl_int CLErrorCode)
{
	switch(CLErrorCode)
	{
        CL_ERROR(CL_SUCCESS);
        CL_ERROR(CL_DEVICE_NOT_FOUND);
        CL_ERROR(CL_DEVICE_NOT_AVAILABLE);
        CL_ERROR(CL_COMPILER_NOT_AVAILABLE);
        CL_ERROR(CL_MEM_OBJECT_ALLOCATION_FAILURE);
        CL_ERROR(CL_OUT_OF_RESOURCES);
        CL_ERROR(CL_OUT_OF_HOST_MEMORY);
        CL_ERROR(CL_PROFILING_INFO_NOT_AVAILABLE);
        CL_ERROR(CL_MEM_COPY_OVERLAP);
        CL_ERROR(CL_IMAGE_FORMAT_MISMATCH);
        CL_ERROR(CL_IMAGE_FORMAT_NOT_SUPPORTED);
        CL_ERROR(CL_BUILD_PROGRAM_FAILURE);
        CL_ERROR(CL_MAP_FAILURE);
        CL_ERROR(CL_INVALID_VALUE);
        CL_ERROR(CL_INVALID_DEVICE_TYPE);
        CL_ERROR(CL_INVALID_PLATFORM);
        CL_ERROR(CL_INVALID_DEVICE);
        CL_ERROR(CL_INVALID_CONTEXT);
        CL_ERROR(CL_INVALID_QUEUE_PROPERTIES);
        CL_ERROR(CL_INVALID_COMMAND_QUEUE);
        CL_ERROR(CL_INVALID_HOST_PTR);
        CL_ERROR(CL_INVALID_MEM_OBJECT);
        CL_ERROR(CL_INVALID_IMAGE_FORMAT_DESCRIPTOR);
        CL_ERROR(CL_INVALID_IMAGE_SIZE);
        CL_ERROR(CL_INVALID_SAMPLER);
        CL_ERROR(CL_INVALID_BINARY);
        CL_ERROR(CL_INVALID_BUILD_OPTIONS);
        CL_ERROR(CL_INVALID_PROGRAM);
        CL_ERROR(CL_INVALID_PROGRAM_EXECUTABLE);
        CL_ERROR(CL_INVALID_KERNEL_NAME);
        CL_ERROR(CL_INVALID_KERNEL_DEFINITION);
        CL_ERROR(CL_INVALID_KERNEL);
        CL_ERROR(CL_INVALID_ARG_INDEX);
        CL_ERROR(CL_INVALID_ARG_VALUE);
        CL_ERROR(CL_INVALID_ARG_SIZE);
        CL_ERROR(CL_INVALID_KERNEL_ARGS);
        CL_ERROR(CL_INVALID_WORK_DIMENSION);
        CL_ERROR(CL_INVALID_WORK_GROUP_SIZE);
        CL_ERROR(CL_INVALID_WORK_ITEM_SIZE);
        CL_ERROR(CL_INVALID_GLOBAL_OFFSET);
        CL_ERROR(CL_INVALID_EVENT_WAIT_LIST);
        CL_ERROR(CL_INVALID_EVENT);
        CL_ERROR(CL_INVALID_OPERATION);
        CL_ERROR(CL_INVALID_GL_OBJECT);
        CL_ERROR(CL_INVALID_BUFFER_SIZE);
        CL_ERROR(CL_INVALID_MIP_LEVEL);
        default:
			return "Unknown error code";
	}
}

}       // namespace util
}       // namespace ocl
