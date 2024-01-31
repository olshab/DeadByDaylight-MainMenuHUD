#include "HoudiniAsset.h"

UHoudiniAsset::UHoudiniAsset()
{
	this->AssetFileName = TEXT("");
	this->AssetBytes = TArray<uint8>();
	this->AssetBytesCount = 0;
	this->bAssetLimitedCommercial = false;
	this->bAssetNonCommercial = false;
	this->bAssetExpanded = false;
}
