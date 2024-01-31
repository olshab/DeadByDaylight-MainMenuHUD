#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkIOSPlatformInfo.generated.h"

UCLASS()
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkIOSPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkIOSPlatformInfo) { return 0; }
