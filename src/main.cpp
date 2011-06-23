#include "main.h"

using namespace Osp::Base;
using namespace Osp::Ui;
using namespace Osp::Ui::Controls;

main::main(void)
{
}

main::~main(void)
{
}

bool
main::Initialize()
{
	// Construct an XML form
	Construct(L"IDF_MAIN");

	return true;
}

result
main::OnInitializing(void)
{
	result r = E_SUCCESS;

	// TODO: Add your initialization code here

	// Get a button via resource ID
	__pButtonOk = static_cast<Button *>(GetControl(L"IDC_BUTTON_OK"));
	if (__pButtonOk != null)
	{
		__pButtonOk->SetActionId(ID_BUTTON_OK);
		__pButtonOk->AddActionEventListener(*this);
	}

	return r;
}

result
main::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO: Add your termination code here

	return r;
}

void
main::OnActionPerformed(const Osp::Ui::Control& source, int actionId)
{
	switch(actionId)
	{
	case ID_BUTTON_OK:
		{
			AppLog("OK Button is clicked! \n");
		}
		break;
	default:
		break;
	}
}


