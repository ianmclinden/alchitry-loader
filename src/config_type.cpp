/*
 * config_type.cpp
 *
 *  Created on: Feb 11, 2019
 *      Author: justin
 */

#include "config_type.h"
#ifdef _WIN32
#include <windows.h>
#else
#include "WinTypes.h"
#endif
#include "ftd2xx.h"

void ft_to_config(CONFIG_DATA* dest, PFT_PROGRAM_DATA src) {
	dest->Signature1 = src->Signature1;
	dest->Signature2 = src->Signature2;
	dest->Version = src->Version;
	dest->VendorId = src->VendorId;
	dest->ProductId = src->ProductId;
	dest->MaxPower = src->MaxPower;
	dest->PnP = src->PnP;
	dest->SelfPowered = src->SelfPowered;
	dest->RemoteWakeup = src->RemoteWakeup;
	dest->Rev4 = src->Rev4;
	dest->IsoIn = src->IsoIn;
	dest->IsoOut = src->IsoOut;
	dest->PullDownEnable = src->PullDownEnable;
	dest->SerNumEnable = src->SerNumEnable;
	dest->USBVersionEnable = src->USBVersionEnable;
	dest->USBVersion = src->USBVersion;
	dest->Rev5 = src->Rev5;
	dest->IsoInA = src->IsoInA;
	dest->IsoInB = src->IsoInB;
	dest->IsoOutA = src->IsoOutA;
	dest->IsoOutB = src->IsoOutB;
	dest->PullDownEnable5 = src->PullDownEnable5;
	dest->SerNumEnable5 = src->SerNumEnable5;
	dest->USBVersionEnable5 = src->USBVersionEnable5;
	dest->USBVersion5 = src->USBVersion5;
	dest->AIsHighCurrent = src->AIsHighCurrent;
	dest->BIsHighCurrent = src->BIsHighCurrent;
	dest->IFAIsFifo = src->IFAIsFifo;
	dest->IFAIsFifoTar = src->IFAIsFifoTar;
	dest->IFAIsFastSer = src->IFAIsFastSer;
	dest->AIsVCP = src->AIsVCP;
	dest->IFBIsFifo = src->IFBIsFifo;
	dest->IFBIsFifoTar = src->IFBIsFifoTar;
	dest->IFBIsFastSer = src->IFBIsFastSer;
	dest->BIsVCP = src->BIsVCP;
	dest->UseExtOsc = src->UseExtOsc;
	dest->HighDriveIOs = src->HighDriveIOs;
	dest->EndpointSize = src->EndpointSize;
	dest->PullDownEnableR = src->PullDownEnableR;
	dest->SerNumEnableR = src->SerNumEnableR;
	dest->InvertTXD = src->InvertTXD;
	dest->InvertRXD = src->InvertRXD;
	dest->InvertRTS = src->InvertRTS;
	dest->InvertCTS = src->InvertCTS;
	dest->InvertDTR = src->InvertDTR;
	dest->InvertDSR = src->InvertDSR;
	dest->InvertDCD = src->InvertDCD;
	dest->InvertRI = src->InvertRI;
	dest->Cbus0 = src->Cbus0;
	dest->Cbus1 = src->Cbus1;
	dest->Cbus2 = src->Cbus2;
	dest->Cbus3 = src->Cbus3;
	dest->Cbus4 = src->Cbus4;
	dest->RIsD2XX = src->RIsD2XX;
	dest->PullDownEnable7 = src->PullDownEnable7;
	dest->SerNumEnable7 = src->SerNumEnable7;
	dest->ALSlowSlew = src->ALSlowSlew;
	dest->ALSchmittInput = src->ALSchmittInput;
	dest->ALDriveCurrent = src->ALDriveCurrent;
	dest->AHSlowSlew = src->AHSlowSlew;
	dest->AHSchmittInput = src->AHSchmittInput;
	dest->AHDriveCurrent = src->AHDriveCurrent;
	dest->BLSlowSlew = src->BLSlowSlew;
	dest->BLSchmittInput = src->BLSchmittInput;
	dest->BLDriveCurrent = src->BLDriveCurrent;
	dest->BHSlowSlew = src->BHSlowSlew;
	dest->BHSchmittInput = src->BHSchmittInput;
	dest->BHDriveCurrent = src->BHDriveCurrent;
	dest->IFAIsFifo7 = src->IFAIsFifo7;
	dest->IFAIsFifoTar7 = src->IFAIsFifoTar7;
	dest->IFAIsFastSer7 = src->IFAIsFastSer7;
	dest->AIsVCP7 = src->AIsVCP7;
	dest->IFBIsFifo7 = src->IFBIsFifo7;
	dest->IFBIsFifoTar7 = src->IFBIsFifoTar7;
	dest->IFBIsFastSer7 = src->IFBIsFastSer7;
	dest->BIsVCP7 = src->BIsVCP7;
	dest->PowerSaveEnable = src->PowerSaveEnable;
	dest->PullDownEnable8 = src->PullDownEnable8;
	dest->SerNumEnable8 = src->SerNumEnable8;
	dest->ASlowSlew = src->ASlowSlew;
	dest->ASchmittInput = src->ASchmittInput;
	dest->ADriveCurrent = src->ADriveCurrent;
	dest->BSlowSlew = src->BSlowSlew;
	dest->BSchmittInput = src->BSchmittInput;
	dest->BDriveCurrent = src->BDriveCurrent;
	dest->CSlowSlew = src->CSlowSlew;
	dest->CSchmittInput = src->CSchmittInput;
	dest->CDriveCurrent = src->CDriveCurrent;
	dest->DSlowSlew = src->DSlowSlew;
	dest->DSchmittInput = src->DSchmittInput;
	dest->DDriveCurrent = src->DDriveCurrent;
	dest->ARIIsTXDEN = src->ARIIsTXDEN;
	dest->BRIIsTXDEN = src->BRIIsTXDEN;
	dest->CRIIsTXDEN = src->CRIIsTXDEN;
	dest->DRIIsTXDEN = src->DRIIsTXDEN;
	dest->AIsVCP8 = src->AIsVCP8;
	dest->BIsVCP8 = src->BIsVCP8;
	dest->CIsVCP8 = src->CIsVCP8;
	dest->DIsVCP8 = src->DIsVCP8;
	dest->PullDownEnableH = src->PullDownEnableH;
	dest->SerNumEnableH = src->SerNumEnableH;
	dest->ACSlowSlewH = src->ACSlowSlewH;
	dest->ACSchmittInputH = src->ACSchmittInputH;
	dest->ACDriveCurrentH = src->ACDriveCurrentH;
	dest->ADSlowSlewH = src->ADSlowSlewH;
	dest->ADSchmittInputH = src->ADSchmittInputH;
	dest->ADDriveCurrentH = src->ADDriveCurrentH;
	dest->Cbus0H = src->Cbus0H;
	dest->Cbus1H = src->Cbus1H;
	dest->Cbus2H = src->Cbus2H;
	dest->Cbus3H = src->Cbus3H;
	dest->Cbus4H = src->Cbus4H;
	dest->Cbus5H = src->Cbus5H;
	dest->Cbus6H = src->Cbus6H;
	dest->Cbus7H = src->Cbus7H;
	dest->Cbus8H = src->Cbus8H;
	dest->Cbus9H = src->Cbus9H;
	dest->IsFifoH = src->IsFifoH;
	dest->IsFifoTarH = src->IsFifoTarH;
	dest->IsFastSerH = src->IsFastSerH;
	dest->IsFT1248H = src->IsFT1248H;
	dest->FT1248CpolH = src->FT1248CpolH;
	dest->FT1248LsbH = src->FT1248LsbH;
	dest->FT1248FlowControlH = src->FT1248FlowControlH;
	dest->IsVCPH = src->IsVCPH;
	dest->PowerSaveEnableH = src->PowerSaveEnableH;
}

void config_to_ft(PFT_PROGRAM_DATA dest, CONFIG_DATA* src) {
	dest->Signature1 = src->Signature1;
	dest->Signature2 = src->Signature2;
	dest->Version = src->Version;
	dest->VendorId = src->VendorId;
	dest->ProductId = src->ProductId;
	dest->MaxPower = src->MaxPower;
	dest->PnP = src->PnP;
	dest->SelfPowered = src->SelfPowered;
	dest->RemoteWakeup = src->RemoteWakeup;
	dest->Rev4 = src->Rev4;
	dest->IsoIn = src->IsoIn;
	dest->IsoOut = src->IsoOut;
	dest->PullDownEnable = src->PullDownEnable;
	dest->SerNumEnable = src->SerNumEnable;
	dest->USBVersionEnable = src->USBVersionEnable;
	dest->USBVersion = src->USBVersion;
	dest->Rev5 = src->Rev5;
	dest->IsoInA = src->IsoInA;
	dest->IsoInB = src->IsoInB;
	dest->IsoOutA = src->IsoOutA;
	dest->IsoOutB = src->IsoOutB;
	dest->PullDownEnable5 = src->PullDownEnable5;
	dest->SerNumEnable5 = src->SerNumEnable5;
	dest->USBVersionEnable5 = src->USBVersionEnable5;
	dest->USBVersion5 = src->USBVersion5;
	dest->AIsHighCurrent = src->AIsHighCurrent;
	dest->BIsHighCurrent = src->BIsHighCurrent;
	dest->IFAIsFifo = src->IFAIsFifo;
	dest->IFAIsFifoTar = src->IFAIsFifoTar;
	dest->IFAIsFastSer = src->IFAIsFastSer;
	dest->AIsVCP = src->AIsVCP;
	dest->IFBIsFifo = src->IFBIsFifo;
	dest->IFBIsFifoTar = src->IFBIsFifoTar;
	dest->IFBIsFastSer = src->IFBIsFastSer;
	dest->BIsVCP = src->BIsVCP;
	dest->UseExtOsc = src->UseExtOsc;
	dest->HighDriveIOs = src->HighDriveIOs;
	dest->EndpointSize = src->EndpointSize;
	dest->PullDownEnableR = src->PullDownEnableR;
	dest->SerNumEnableR = src->SerNumEnableR;
	dest->InvertTXD = src->InvertTXD;
	dest->InvertRXD = src->InvertRXD;
	dest->InvertRTS = src->InvertRTS;
	dest->InvertCTS = src->InvertCTS;
	dest->InvertDTR = src->InvertDTR;
	dest->InvertDSR = src->InvertDSR;
	dest->InvertDCD = src->InvertDCD;
	dest->InvertRI = src->InvertRI;
	dest->Cbus0 = src->Cbus0;
	dest->Cbus1 = src->Cbus1;
	dest->Cbus2 = src->Cbus2;
	dest->Cbus3 = src->Cbus3;
	dest->Cbus4 = src->Cbus4;
	dest->RIsD2XX = src->RIsD2XX;
	dest->PullDownEnable7 = src->PullDownEnable7;
	dest->SerNumEnable7 = src->SerNumEnable7;
	dest->ALSlowSlew = src->ALSlowSlew;
	dest->ALSchmittInput = src->ALSchmittInput;
	dest->ALDriveCurrent = src->ALDriveCurrent;
	dest->AHSlowSlew = src->AHSlowSlew;
	dest->AHSchmittInput = src->AHSchmittInput;
	dest->AHDriveCurrent = src->AHDriveCurrent;
	dest->BLSlowSlew = src->BLSlowSlew;
	dest->BLSchmittInput = src->BLSchmittInput;
	dest->BLDriveCurrent = src->BLDriveCurrent;
	dest->BHSlowSlew = src->BHSlowSlew;
	dest->BHSchmittInput = src->BHSchmittInput;
	dest->BHDriveCurrent = src->BHDriveCurrent;
	dest->IFAIsFifo7 = src->IFAIsFifo7;
	dest->IFAIsFifoTar7 = src->IFAIsFifoTar7;
	dest->IFAIsFastSer7 = src->IFAIsFastSer7;
	dest->AIsVCP7 = src->AIsVCP7;
	dest->IFBIsFifo7 = src->IFBIsFifo7;
	dest->IFBIsFifoTar7 = src->IFBIsFifoTar7;
	dest->IFBIsFastSer7 = src->IFBIsFastSer7;
	dest->BIsVCP7 = src->BIsVCP7;
	dest->PowerSaveEnable = src->PowerSaveEnable;
	dest->PullDownEnable8 = src->PullDownEnable8;
	dest->SerNumEnable8 = src->SerNumEnable8;
	dest->ASlowSlew = src->ASlowSlew;
	dest->ASchmittInput = src->ASchmittInput;
	dest->ADriveCurrent = src->ADriveCurrent;
	dest->BSlowSlew = src->BSlowSlew;
	dest->BSchmittInput = src->BSchmittInput;
	dest->BDriveCurrent = src->BDriveCurrent;
	dest->CSlowSlew = src->CSlowSlew;
	dest->CSchmittInput = src->CSchmittInput;
	dest->CDriveCurrent = src->CDriveCurrent;
	dest->DSlowSlew = src->DSlowSlew;
	dest->DSchmittInput = src->DSchmittInput;
	dest->DDriveCurrent = src->DDriveCurrent;
	dest->ARIIsTXDEN = src->ARIIsTXDEN;
	dest->BRIIsTXDEN = src->BRIIsTXDEN;
	dest->CRIIsTXDEN = src->CRIIsTXDEN;
	dest->DRIIsTXDEN = src->DRIIsTXDEN;
	dest->AIsVCP8 = src->AIsVCP8;
	dest->BIsVCP8 = src->BIsVCP8;
	dest->CIsVCP8 = src->CIsVCP8;
	dest->DIsVCP8 = src->DIsVCP8;
	dest->PullDownEnableH = src->PullDownEnableH;
	dest->SerNumEnableH = src->SerNumEnableH;
	dest->ACSlowSlewH = src->ACSlowSlewH;
	dest->ACSchmittInputH = src->ACSchmittInputH;
	dest->ACDriveCurrentH = src->ACDriveCurrentH;
	dest->ADSlowSlewH = src->ADSlowSlewH;
	dest->ADSchmittInputH = src->ADSchmittInputH;
	dest->ADDriveCurrentH = src->ADDriveCurrentH;
	dest->Cbus0H = src->Cbus0H;
	dest->Cbus1H = src->Cbus1H;
	dest->Cbus2H = src->Cbus2H;
	dest->Cbus3H = src->Cbus3H;
	dest->Cbus4H = src->Cbus4H;
	dest->Cbus5H = src->Cbus5H;
	dest->Cbus6H = src->Cbus6H;
	dest->Cbus7H = src->Cbus7H;
	dest->Cbus8H = src->Cbus8H;
	dest->Cbus9H = src->Cbus9H;
	dest->IsFifoH = src->IsFifoH;
	dest->IsFifoTarH = src->IsFifoTarH;
	dest->IsFastSerH = src->IsFastSerH;
	dest->IsFT1248H = src->IsFT1248H;
	dest->FT1248CpolH = src->FT1248CpolH;
	dest->FT1248LsbH = src->FT1248LsbH;
	dest->FT1248FlowControlH = src->FT1248FlowControlH;
	dest->IsVCPH = src->IsVCPH;
	dest->PowerSaveEnableH = src->PowerSaveEnableH;
}
