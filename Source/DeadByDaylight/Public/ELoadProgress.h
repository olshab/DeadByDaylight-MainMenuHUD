#pragma once

#include "CoreMinimal.h"
#include "ELoadProgress.generated.h"

UENUM(BlueprintType)
enum class ELoadProgress : uint8
{
	NotStarted,
	Init,
	SetupPIE,
	ArtificialDelay,
	DisconnectingPresencePlugin,
	ValidateOnlineSubsystem,
	CheckingPlatformService,
	PreMirrorsLogin,
	ConnectingToMirrors,
	StartEAC,
	LoadingAuthInfo,
	LoadingBackendConfigs,
	SetupRichPresence,
	LoadingBackendTunables,
	ApplyingCDNPatch,
	AquiringExternalAuthentication,
	LoadingPlayerIndependentShopData,
	LicenseCache,
	LoadingExperiments,
	LoadingEvents,
	LoadingInventory,
	LoadingCinematics,
	SyncingOwnedCharacters,
	LoadingProfile,
	LoadingMirrorCurrencies,
	LoadingWallet,
	LoadingConsent,
	LoadingGameConfigs,
	LoadingCharacterXPTables,
	CheckingPendingTransactions,
	LoadingContentSchedule,
	LoadingNews,
	SendingAnalytics,
	LoadingDailyRituals,
	LoadingLimitedTimeGameModes,
	ReconcilingEventCurrencies,
	CalculatingLatencies,
	ValidateData,
	ValidatingClientVersion,
	CheckingNeedForCurrencyMigration,
	MigratingCurrenciesToMirror,
	SyncingFriendsList,
	Complete,
	Locating,
	InitializingRTMConnection,
	LoadingStreamVideoData,
	CollectingFreeCatalogItems,
	DownloadDynamicContent,
	CheckingMobilePendingTransactions,
	LoadMarketingBanners,
	LoadingSubscriptionStatus,
	RequestingTrackingAuthorization,
	LoadingExperimentalFeatures,
	LoadingMatchIncentives,
	LoadingLoadoutPresets,
	LoadingBackendCharacterData,
	LoadingPrestige,
	UpdatingPlatformStoreContent,
	UpdatingOwnedContent,
	LoadingShrine,
	LoadingReportFeedback,
	CheckingAutoLoginStatus,
	ValidatingUserLogin,
	ValidatingPrivileges,
	QueryingAchievements,
	UpdatingChatPrivilege,
	CheckingPlatformServices,
	RequestingOnlineContextCreation,
	RequestingAuthenticationCode,
	SetupBackendEndpoint,
	SettingProviderPlayerName,
	SettingBackendPlayerName,
	LoadingBlocklist,
	LoadingEquippedPlayerCard,
	UpdatingCrossplayPrivilege,
	RequestingTrial,
	CheckingApplication,
	CheckingControllerAction,
	ReportingAvailableContent,
	LoadingStatCache,
	LoadingPips,
	LoadingPlayerStats,
	SetupEnvironmentStats,
	ProccessingShopErrors,
	LoadingBackendData,
	LoadingOnboarding,
	InitializingShaders,
	GrantingCrossPromoItems,
	UpdatingGifts,
	UpdatingKeplerGiftAction,
	SettingNetworkInterface,
	ValidatingKrakenSDKVersion,
	LoadingCollectionsData,
	LoadingRecommendationsData,
	CheckingSoftBan,
	UpdatingSpecialPacks,
	LoadingGameConfigsDS,
	LoadingCatalog,
	LoadingS3PrestigeData,
};