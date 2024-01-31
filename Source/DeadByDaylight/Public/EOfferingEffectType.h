#pragma once

#include "CoreMinimal.h"
#include "EOfferingEffectType.generated.h"

UENUM(BlueprintType)
enum class EOfferingEffectType : uint8
{
	Invalid,
	SlasherPointsAll,
	PointsBrutality,
	PointsDeviouness,
	PointsSacrice,
	PointsHunting,
	CamperPointsAll,
	PointsObjective,
	PointsSurvival,
	PointsAltruism,
	PointsBoldness,
	SurvivorCharacterXP,
	KillerCharacterXP,
	CamperItemLostPrevention,
	KillerItemLostPrevention,
	Luck,
	IndustrialThemeSelectionModifier,
	JunkyardThemeSelectionModifier,
	FarmThemeSelectionModifier,
	SwampThemeSelectionModifier,
	MapModifier,
	ChestCountModifier,
	PortableHookCountModifier,
	LairCountModifier,
	PlayerGrouping,
	FarKiller,
	KillAllowedModifier,
	LightingModification,
	FogModification,
	LivingWorldObjectCountModifier,
	LivingWorldObjectMultModifier,
	KillLastSurvivor,
	SuburbsThemeSelectionModifier,
	AsylumThemeSelectionModifier,
	KillerSelectionModifier,
	HospitalThemeSelectionModifier,
	KillAllowedAfterStrugglePhase,
	BorealThemeSelectionModifier,
	SpringwoodThemeSelectionModifier,
	FinlandThemeSelectionModifier,
	JapaneseCountrySideSelectionModifier,
	KenyaThemeSelectionModifier,
	QatarThemeSelectionModifier,
	UkraineThemeSelectionModifier,
	WalesThemeSelectionModifier,
	CancelThemeSelectionModifier,
	BasementMainBuildingModifier,
	BasementShackModifier,
	HatchMainBuildingModifier,
	HatchShackModifier,
	EclipseThemeSelectionModifier,
	IonThemeSelectionModifier,
	MeteorThemeSelectionModifier,
	QuantumThemeSelectionModifier,
	UmbraThemeSelectionModifier,
	WormholeThemeSelectionModifier,
	SpecialEvent,
	SpecialEventTallyBonus,
	ObjectSubsitution,
	ObjectAddition,
};
