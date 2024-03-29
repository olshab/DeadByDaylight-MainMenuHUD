#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_TormentMode_20.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TormentMode_20 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealToKillerOutsideRangeInAgony;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealToKillerOutsideRangeNotInAgony;

	UPROPERTY(EditDefaultsOnly)
	bool _revealSurvivorsInAgony;

	UPROPERTY(EditDefaultsOnly)
	bool _revealSurvivorsNotInAgony;

	UPROPERTY(EditDefaultsOnly)
	float _range;

	UPROPERTY(EditDefaultsOnly)
	float _revealDuration;

public:
	UAddon_TormentMode_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TormentMode_20) { return 0; }
