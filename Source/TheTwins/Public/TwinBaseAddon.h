#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "TwinBaseAddon.generated.h"

class AConjoinedTwin;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinBaseAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _customParam;

private:
	UFUNCTION()
	void Authority_OnTwinSet(AConjoinedTwin* twin);

public:
	UTwinBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTwinBaseAddon) { return 0; }
