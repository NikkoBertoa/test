// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Common/UdpSocketReceiver.h"
#include "UEOSCElement.h"
#include "UEOSCReceiver.generated.h"

class FSocket;
struct FIPv4Endpoint;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUEOSCReceiveEventDelegate, const FName&, Address, const TArray<FUEOSCElement>&, Data, const FString&, SenderIp);

/**
 * 
 */
UCLASS()
class UEOSC_API UUEOSCReceiver : public UObject
{
    GENERATED_BODY()

private:
	TSharedPtr<FSocket> Socket;
	TSharedPtr<FUdpSocketReceiver> Receiver;
	
public:
	bool Connect(int32 InPort);
	bool Connect(FIPv4Address IpAddress, int32 InPort);
	void Disconnect();

private:
	void OnReceived(const FArrayReaderPtr& InData, const FIPv4Endpoint& InIp);
private:
	static void ReadOSC(TArray<FUEOSCMessage>& OutValue, const uint8* InData, int32 Count);
	static uint32 ReadOSCBundle(TArray<FUEOSCMessage>& OutValue, const uint8* InData, int32 Count);
	static uint32 ReadOSCMessage(FUEOSCMessage& OutValue, const uint8* InData, int32 Count);
	
	static uint32 ReadOSCInt32(int32& OutValue, const uint8* InData, int32 Count);
	static uint32 ReadOSCInt64(int64& OutValue, const uint8* InData, int32 Count);
	static uint32 ReadOSCUint64(uint64& OutValue, const uint8* InData, int32 Count);
	static uint32 ReadOSCFloat32(float& OutValue, const uint8* InData, int32 Count);
	static uint32 ReadOSCString(FString& OutValue, const uint8* InData, int32 Count);
	static uint32 ReadOSCString(FName& OutValue, const uint8* InData, int32 Count);
	static uint32 ReadOSCBlob(TArray<uint8>& OutValue, const uint8* InData, int32 Count);
	
public:
	FUEOSCReceiveEventDelegate OSCReceiveEventDelegate;
};
