﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Globalization.1.h"
#include "Windows.Networking.Sockets.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Security.Cryptography.Certificates.1.h"
#include "Windows.Devices.AllJoyn.1.h"

namespace winrt {

namespace Windows::Devices::AllJoyn {

struct AllJoynAboutData :
    Windows::Devices::AllJoyn::IAllJoynAboutData
{
    AllJoynAboutData(std::nullptr_t) noexcept {}
};

struct AllJoynAboutDataView :
    Windows::Devices::AllJoyn::IAllJoynAboutDataView
{
    AllJoynAboutDataView(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, Windows::Globalization::Language const& language);
};

struct AllJoynAcceptSessionJoinerEventArgs :
    Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs
{
    AllJoynAcceptSessionJoinerEventArgs(std::nullptr_t) noexcept {}
    AllJoynAcceptSessionJoinerEventArgs(param::hstring const& uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner);
};

struct AllJoynAuthenticationCompleteEventArgs :
    Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs
{
    AllJoynAuthenticationCompleteEventArgs(std::nullptr_t) noexcept {}
};

struct AllJoynBusAttachment :
    Windows::Devices::AllJoyn::IAllJoynBusAttachment,
    impl::require<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachment2>
{
    AllJoynBusAttachment(std::nullptr_t) noexcept {}
    AllJoynBusAttachment();
    AllJoynBusAttachment(param::hstring const& connectionSpecification);
    static Windows::Devices::AllJoyn::AllJoynBusAttachment GetDefault();
    static Windows::Devices::Enumeration::DeviceWatcher GetWatcher(param::iterable<hstring> const& requiredInterfaces);
};

struct AllJoynBusAttachmentStateChangedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs
{
    AllJoynBusAttachmentStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AllJoynBusObject :
    Windows::Devices::AllJoyn::IAllJoynBusObject
{
    AllJoynBusObject(std::nullptr_t) noexcept {}
    AllJoynBusObject();
    AllJoynBusObject(param::hstring const& objectPath);
    AllJoynBusObject(param::hstring const& objectPath, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment);
};

struct AllJoynBusObjectStoppedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs
{
    AllJoynBusObjectStoppedEventArgs(std::nullptr_t) noexcept {}
    AllJoynBusObjectStoppedEventArgs(int32_t status);
};

struct AllJoynCredentials :
    Windows::Devices::AllJoyn::IAllJoynCredentials
{
    AllJoynCredentials(std::nullptr_t) noexcept {}
};

struct AllJoynCredentialsRequestedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs
{
    AllJoynCredentialsRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct AllJoynCredentialsVerificationRequestedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs
{
    AllJoynCredentialsVerificationRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct AllJoynMessageInfo :
    Windows::Devices::AllJoyn::IAllJoynMessageInfo
{
    AllJoynMessageInfo(std::nullptr_t) noexcept {}
    AllJoynMessageInfo(param::hstring const& senderUniqueName);
};

struct AllJoynProducerStoppedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs
{
    AllJoynProducerStoppedEventArgs(std::nullptr_t) noexcept {}
    AllJoynProducerStoppedEventArgs(int32_t status);
};

struct AllJoynServiceInfo :
    Windows::Devices::AllJoyn::IAllJoynServiceInfo
{
    AllJoynServiceInfo(std::nullptr_t) noexcept {}
    AllJoynServiceInfo(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> FromIdAsync(param::hstring const& deviceId);
};

struct AllJoynServiceInfoRemovedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs
{
    AllJoynServiceInfoRemovedEventArgs(std::nullptr_t) noexcept {}
    AllJoynServiceInfoRemovedEventArgs(param::hstring const& uniqueName);
};

struct AllJoynSession :
    Windows::Devices::AllJoyn::IAllJoynSession
{
    AllJoynSession(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment);
};

struct AllJoynSessionJoinedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs
{
    AllJoynSessionJoinedEventArgs(std::nullptr_t) noexcept {}
    AllJoynSessionJoinedEventArgs(Windows::Devices::AllJoyn::AllJoynSession const& session);
};

struct AllJoynSessionLostEventArgs :
    Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs
{
    AllJoynSessionLostEventArgs(std::nullptr_t) noexcept {}
    AllJoynSessionLostEventArgs(Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason);
};

struct AllJoynSessionMemberAddedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs
{
    AllJoynSessionMemberAddedEventArgs(std::nullptr_t) noexcept {}
    AllJoynSessionMemberAddedEventArgs(param::hstring const& uniqueName);
};

struct AllJoynSessionMemberRemovedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs
{
    AllJoynSessionMemberRemovedEventArgs(std::nullptr_t) noexcept {}
    AllJoynSessionMemberRemovedEventArgs(param::hstring const& uniqueName);
};

struct AllJoynStatus
{
    AllJoynStatus() = delete;
    static int32_t Ok();
    static int32_t Fail();
    static int32_t OperationTimedOut();
    static int32_t OtherEndClosed();
    static int32_t ConnectionRefused();
    static int32_t AuthenticationFailed();
    static int32_t AuthenticationRejectedByUser();
    static int32_t SslConnectFailed();
    static int32_t SslIdentityVerificationFailed();
    static int32_t InsufficientSecurity();
    static int32_t InvalidArgument1();
    static int32_t InvalidArgument2();
    static int32_t InvalidArgument3();
    static int32_t InvalidArgument4();
    static int32_t InvalidArgument5();
    static int32_t InvalidArgument6();
    static int32_t InvalidArgument7();
    static int32_t InvalidArgument8();
};

struct AllJoynWatcherStoppedEventArgs :
    Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs
{
    AllJoynWatcherStoppedEventArgs(std::nullptr_t) noexcept {}
    AllJoynWatcherStoppedEventArgs(int32_t status);
};

}

namespace impl {

}

}
