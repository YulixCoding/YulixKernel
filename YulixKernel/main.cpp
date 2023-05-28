#include "hook.h"

//Debug Purposes
#include "messages.h"

extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT driver_object, PUNICODE_STRING reg_path)
{
	UNREFERENCED_PARAMETER(driver_object);
	UNREFERENCED_PARAMETER(reg_path);

	nullhook::call_kernel_function(&nullhook::hook_handler);

	DebugMessage("CallKernelFunction: Success");
	return STATUS_SUCCESS;
}