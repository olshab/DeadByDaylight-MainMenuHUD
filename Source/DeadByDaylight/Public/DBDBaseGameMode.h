#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "DataTableDropdown.h"
#include "EGameType.h"
#include "DBDBaseGameMode.generated.h"

UCLASS(NonTransient)
class ADBDBaseGameMode : public AGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDataTableDropdown DebugSpecialEvent;

	UPROPERTY(EditAnywhere)
	EGameType DebugGameType;

public:
	ADBDBaseGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBaseGameMode) { return 0; }
