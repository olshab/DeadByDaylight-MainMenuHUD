#include "CoreButtonSelector.h"

class UCoreSelectableButtonWidget;

void UCoreButtonSelector::UnselectCurrent()
{

}

void UCoreButtonSelector::SetInputsEnabled(bool enabled)
{

}

void UCoreButtonSelector::SetAllEnabled(bool enabled)
{

}

bool UCoreButtonSelector::SelectPrevious()
{
	return false;
}

bool UCoreButtonSelector::SelectNext()
{
	return false;
}

bool UCoreButtonSelector::Select(UCoreSelectableButtonWidget* buttonToSelect, bool performAction)
{
	return false;
}

void UCoreButtonSelector::OnButtonSelectedChanged(UCoreSelectableButtonWidget* selectedButton, bool isSelected)
{

}

void UCoreButtonSelector::OnButtonSelectedAgain(UCoreSelectableButtonWidget* selectedButton)
{

}

bool UCoreButtonSelector::HasSelection() const
{
	return false;
}

UCoreButtonSelector::UCoreButtonSelector()
{
	this->_buttons = TArray<UCoreSelectableButtonWidget*>();
}
