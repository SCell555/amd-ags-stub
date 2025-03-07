// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

#ifdef _DEBUG
#define _DllMainCRTStartup DllMain
#endif

BOOL APIENTRY _DllMainCRTStartup( HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

#define AMD_AGS_API extern "C" __declspec( dllexport )
using AGSReturnCode = int;
static constexpr AGSReturnCode AGS_ERROR_LEGACY_DRIVER = 5;
using AGSContext = void;
using AGSConfiguration = void;
using AGSGPUInfo = void;
using AGSDisplaySettings = void;
using AGSDX11DeviceCreationParams = void;
using AGSDX11ExtensionParams = void;
using AGSDX11ReturnedParams = void;
using ID3D11Device = void;
using ID3D11DeviceContext = void;
using ID3D11Buffer = void;
using AGSBreadcrumbMarker = void;
using D3D_PRIMITIVE_TOPOLOGY = int;
using AGSClipRect = void;
using D3D11_BUFFER_DESC = void;
using D3D11_SUBRESOURCE_DATA = void;
using AGSAfrTransferType = int;
using AGSAfrTransferEngine = int;
using D3D11_TEXTURE1D_DESC = void;
using ID3D11Texture1D = void;
using D3D11_TEXTURE2D_DESC = void;
using ID3D11Texture2D = void;
using D3D11_TEXTURE3D_DESC = void;
using ID3D11Texture3D = void;
using ID3D11Resource = void;
using D3D11_RECT = void;
using AGSDX12DeviceCreationParams = void;
using AGSDX12ExtensionParams = void;
using AGSDX12ReturnedParams = void;
using ID3D12Device = void;
using ID3D12GraphicsCommandList = void;

#pragma region General
AMD_AGS_API AGSReturnCode __stdcall agsInit( AGSContext **context, const AGSConfiguration *config, AGSGPUInfo *gpuInfo )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDeInit( void *context )
{
	return 0;
}

AMD_AGS_API int __stdcall agsCheckDriverVersion( const char* radeonSoftwareVersionReported, unsigned int radeonSoftwareVersionRequired )
{
	return 0;
}

AMD_AGS_API AGSReturnCode __stdcall agsGetCrossfireGPUCount( AGSContext *context, int *numGPUs )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsSetDisplayMode( AGSContext *context, int deviceIndex, int displayIndex, const AGSDisplaySettings *settings )
{
	return AGS_ERROR_LEGACY_DRIVER;
}
#pragma endregion

#pragma region DX11
AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_CreateDevice( AGSContext* context, const AGSDX11DeviceCreationParams* creationParams, const AGSDX11ExtensionParams* extensionParams, AGSDX11ReturnedParams* returnedParams )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_DestroyDevice( AGSContext* context, ID3D11Device* device, unsigned int* deviceReferences, ID3D11DeviceContext* immediateContext, unsigned int* immediateContextReferences )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_Init( AGSContext* context, ID3D11Device* device, unsigned int uavSlot, unsigned int* extensionsSupported )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_DeInit( AGSContext* context )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_WriteBreadcrumb( AGSContext* context, const AGSBreadcrumbMarker* marker )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_IASetPrimitiveTopology( AGSContext* context, D3D_PRIMITIVE_TOPOLOGY topology )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_BeginUAVOverlap( AGSContext* context, ID3D11DeviceContext* dxContext )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_EndUAVOverlap( AGSContext* context, ID3D11DeviceContext* dxContext )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_SetDepthBounds( AGSContext* context, ID3D11DeviceContext* dxContext, bool enabled, float minDepth, float maxDepth )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_MultiDrawInstancedIndirect( AGSContext* context, ID3D11DeviceContext* dxContext, unsigned int drawCount, ID3D11Buffer* pBufferForArgs, unsigned int alignedByteOffsetForArgs, unsigned int byteStrideForArgs )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect( AGSContext* context, ID3D11DeviceContext* dxContext, unsigned int drawCount, ID3D11Buffer* pBufferForArgs, unsigned int alignedByteOffsetForArgs, unsigned int byteStrideForArgs )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect( AGSContext* context, ID3D11DeviceContext* dxContext, ID3D11Buffer* pBufferForDrawCount, unsigned int alignedByteOffsetForDrawCount, ID3D11Buffer* pBufferForArgs, unsigned int alignedByteOffsetForArgs, unsigned int byteStrideForArgs )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect( AGSContext* context, ID3D11DeviceContext* dxContext, ID3D11Buffer* pBufferForDrawCount, unsigned int alignedByteOffsetForDrawCount, ID3D11Buffer* pBufferForArgs, unsigned int alignedByteOffsetForArgs, unsigned int byteStrideForArgs )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount( AGSContext* context, unsigned int numberOfThreads )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_NumPendingAsyncCompileJobs( AGSContext* context, unsigned int* numberOfJobs )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_SetDiskShaderCacheEnabled( AGSContext* context, int enable )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_SetViewBroadcastMasks( AGSContext* context, unsigned long long vpMask, unsigned long long rtSliceMask, int vpMaskPerRtSliceEnabled )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_GetMaxClipRects( AGSContext* context, unsigned int* maxRectCount )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_SetClipRects( AGSContext* context, unsigned int clipRectCount, const AGSClipRect* clipRects )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_CreateBuffer( AGSContext* context, const D3D11_BUFFER_DESC* desc, const D3D11_SUBRESOURCE_DATA* initialData, ID3D11Buffer** buffer, AGSAfrTransferType transferType, AGSAfrTransferEngine transferEngine )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_CreateTexture1D( AGSContext* context, const D3D11_TEXTURE1D_DESC* desc, const D3D11_SUBRESOURCE_DATA* initialData, ID3D11Texture1D** texture1D, AGSAfrTransferType transferType, AGSAfrTransferEngine transferEngine )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_CreateTexture2D( AGSContext* context, const D3D11_TEXTURE2D_DESC* desc, const D3D11_SUBRESOURCE_DATA* initialData, ID3D11Texture2D** texture2D, AGSAfrTransferType transferType, AGSAfrTransferEngine transferEngine )
{
	return AGS_ERROR_LEGACY_DRIVER;
}


AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_CreateTexture3D( AGSContext* context, const D3D11_TEXTURE3D_DESC* desc, const D3D11_SUBRESOURCE_DATA* initialData, ID3D11Texture3D** texture3D, AGSAfrTransferType transferType, AGSAfrTransferEngine transferEngine )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_NotifyResourceEndWrites( AGSContext* context, ID3D11Resource* resource, const D3D11_RECT* transferRegions, const unsigned int* subresourceArray, unsigned int numSubresources )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_NotifyResourceBeginAllAccess( AGSContext* context, ID3D11Resource* resource )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX11_NotifyResourceEndAllAccess( AGSContext* context, ID3D11Resource* resource )
{
	return AGS_ERROR_LEGACY_DRIVER;
}
#pragma endregion

#pragma region DX12
AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX12_CreateDevice( AGSContext* context, const AGSDX12DeviceCreationParams*  creationParams, const AGSDX12ExtensionParams* extensionParams, AGSDX12ReturnedParams* returnedParams )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX12_DestroyDevice( AGSContext* context, ID3D12Device* device, unsigned int* deviceReferences )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode agsDriverExtensionsDX12_Init( AGSContext* context, ID3D12Device* device, unsigned int* extensionsSupported )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode agsDriverExtensionsDX12_DeInit( AGSContext* context )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX12_PushMarker( AGSContext* context, ID3D12GraphicsCommandList* commandList, const char* data )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX12_PopMarker( AGSContext* context, ID3D12GraphicsCommandList* commandList )
{
	return AGS_ERROR_LEGACY_DRIVER;
}

AMD_AGS_API AGSReturnCode __stdcall agsDriverExtensionsDX12_SetMarker( AGSContext* context, ID3D12GraphicsCommandList* commandList, const char* data )
{
	return AGS_ERROR_LEGACY_DRIVER;
}
#pragma endregion