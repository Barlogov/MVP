#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* WebSocketClientWebGl_CloseCallBack_m0398C2A1E6E502552227A580B26580A30980295E_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_ErrorCallback_m790762F5A840B1AEBD3D588B567EBD6E92ABBDCF_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_MessageCallback_mA836C7ECF911CF67137207E422EF7E0C941935DE_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_OpenCallback_m80F152EFB837C26E75206C1C4991E86D6D04AC80_RuntimeMethod_var;



// 0x00000001 Mirror.SimpleWeb.SimpleWebClient Mirror.SimpleWeb.SimpleWebClient::Create(System.Int32,System.Int32,Mirror.SimpleWeb.TcpConfig)
extern void SimpleWebClient_Create_m6B106DEB0EF90C669D50063C8826ADB881DCCEF5 (void);
// 0x00000002 System.Void Mirror.SimpleWeb.SimpleWebClient::.ctor(System.Int32,System.Int32)
extern void SimpleWebClient__ctor_m6055026860D29247CA3D5CF7A0E9E84DC7B29361 (void);
// 0x00000003 Mirror.SimpleWeb.ClientState Mirror.SimpleWeb.SimpleWebClient::get_ConnectionState()
extern void SimpleWebClient_get_ConnectionState_mC7B8DFF223A6516D52BA0C2C3F94D7219C7D3323 (void);
// 0x00000004 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onConnect(System.Action)
extern void SimpleWebClient_add_onConnect_mF9BF46AC86390B2A246E7EDF6661F5AD68323B09 (void);
// 0x00000005 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onConnect(System.Action)
extern void SimpleWebClient_remove_onConnect_mC6F2CB45B09BEAEE5DD3B328C2843E8638499C25 (void);
// 0x00000006 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onDisconnect(System.Action)
extern void SimpleWebClient_add_onDisconnect_m2C43536FF74EDFCD023B71E3E0CB2A9DCF83CD51 (void);
// 0x00000007 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onDisconnect(System.Action)
extern void SimpleWebClient_remove_onDisconnect_m6721CDD47F7313E25F86A857C1A1A96118BEBBB0 (void);
// 0x00000008 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onData(System.Action`1<System.ArraySegment`1<System.Byte>>)
extern void SimpleWebClient_add_onData_m85AFA10078027130328F4425CFF9DB48BDC2DDAF (void);
// 0x00000009 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onData(System.Action`1<System.ArraySegment`1<System.Byte>>)
extern void SimpleWebClient_remove_onData_m33E5654D32586B7DF9C0DC8C95BB01DA29951F3E (void);
// 0x0000000A System.Void Mirror.SimpleWeb.SimpleWebClient::add_onError(System.Action`1<System.Exception>)
extern void SimpleWebClient_add_onError_m9B0EEB39941BA854826BA7A32F848D83EED8B8DD (void);
// 0x0000000B System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onError(System.Action`1<System.Exception>)
extern void SimpleWebClient_remove_onError_m607164756F2B1CD159EC33BA0BB79ADE79A11677 (void);
// 0x0000000C System.Void Mirror.SimpleWeb.SimpleWebClient::ProcessMessageQueue()
extern void SimpleWebClient_ProcessMessageQueue_mCBEDE808A7A2904838DED72B8137A96C072DFA6D (void);
// 0x0000000D System.Void Mirror.SimpleWeb.SimpleWebClient::ProcessMessageQueue(UnityEngine.MonoBehaviour)
extern void SimpleWebClient_ProcessMessageQueue_m0AD77513FFDB5BDDB6657411E983F4A6C0FAB89B (void);
// 0x0000000E System.Void Mirror.SimpleWeb.SimpleWebClient::Connect(System.Uri)
// 0x0000000F System.Void Mirror.SimpleWeb.SimpleWebClient::Disconnect()
// 0x00000010 System.Void Mirror.SimpleWeb.SimpleWebClient::Send(System.ArraySegment`1<System.Byte>)
// 0x00000011 System.Boolean Mirror.SimpleWeb.ClientHandshake::TryHandshake(Mirror.SimpleWeb.Connection,System.Uri)
extern void ClientHandshake_TryHandshake_m303AAF1C65168BEB1387178F2843532FFC20D555 (void);
// 0x00000012 System.Void Mirror.SimpleWeb.ClientHandshake::.ctor()
extern void ClientHandshake__ctor_mE2B2BA4BF3E3112477A1B2833EE9D7F2E697C59C (void);
// 0x00000013 System.Boolean Mirror.SimpleWeb.ClientSslHelper::TryCreateStream(Mirror.SimpleWeb.Connection,System.Uri)
extern void ClientSslHelper_TryCreateStream_mF889DEA6547AAC41C0EF5B303EDAD124F481ECE9 (void);
// 0x00000014 System.IO.Stream Mirror.SimpleWeb.ClientSslHelper::CreateStream(System.Net.Sockets.NetworkStream,System.Uri)
extern void ClientSslHelper_CreateStream_m51BF0CA61CD4F032DEA6C730EDFB05EAB53C42A4 (void);
// 0x00000015 System.Boolean Mirror.SimpleWeb.ClientSslHelper::ValidateServerCertificate(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ClientSslHelper_ValidateServerCertificate_mA6477D305AFD1033341BAA31BFFCD50B9E0B3A16 (void);
// 0x00000016 System.Void Mirror.SimpleWeb.ClientSslHelper::.ctor()
extern void ClientSslHelper__ctor_mCBA00448AAAD840571563B7AB3CEABDDB21804ED (void);
// 0x00000017 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::.ctor(System.Int32,System.Int32,Mirror.SimpleWeb.TcpConfig)
extern void WebSocketClientStandAlone__ctor_m3FDFB36611929D998DBB70F80509A97C4B6E8179 (void);
// 0x00000018 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Connect(System.Uri)
extern void WebSocketClientStandAlone_Connect_m135F05DBE9127E5B3FF7546169734099F3A5FFB1 (void);
// 0x00000019 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::ConnectAndReceiveLoop(System.Uri)
extern void WebSocketClientStandAlone_ConnectAndReceiveLoop_mA792BECE91DA513BE7C454282CA9CF6CB29C8F14 (void);
// 0x0000001A System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::AfterConnectionDisposed(Mirror.SimpleWeb.Connection)
extern void WebSocketClientStandAlone_AfterConnectionDisposed_m1A7F524818DBE3AF7B93228BA88535F4B55B21D5 (void);
// 0x0000001B System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Disconnect()
extern void WebSocketClientStandAlone_Disconnect_mE5128E19A422242CB238FE9933A8C5558E271695 (void);
// 0x0000001C System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Send(System.ArraySegment`1<System.Byte>)
extern void WebSocketClientStandAlone_Send_mF4A3489C14D44E421D37429F65ABAF29A9AF5A83 (void);
// 0x0000001D System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::<ConnectAndReceiveLoop>b__6_0()
extern void WebSocketClientStandAlone_U3CConnectAndReceiveLoopU3Eb__6_0_m38B9D05C8B8D232F4E7CFA39BDB41746CB9E0F60 (void);
// 0x0000001E System.Void Mirror.SimpleWeb.WebSocketClientStandAlone/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m3446B8C458569D312248C9B799B44706DD28C295 (void);
// 0x0000001F System.Void Mirror.SimpleWeb.WebSocketClientStandAlone/<>c__DisplayClass5_0::<Connect>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CConnectU3Eb__0_mE810DA773ED19598E760F58FFFFBB31A4867B6F2 (void);
// 0x00000020 System.Boolean Mirror.SimpleWeb.SimpleWebJSLib::IsConnected(System.Int32)
extern void SimpleWebJSLib_IsConnected_m2A372F974C22CE0FBC89D91F04A7D482CC679BEC (void);
// 0x00000021 System.Int32 Mirror.SimpleWeb.SimpleWebJSLib::Connect(System.String,System.Action`1<System.Int32>,System.Action`1<System.Int32>,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Action`1<System.Int32>)
extern void SimpleWebJSLib_Connect_mB6C2AC61AFC006B52C45C9D21CF2B1381051434E (void);
// 0x00000022 System.Void Mirror.SimpleWeb.SimpleWebJSLib::Disconnect(System.Int32)
extern void SimpleWebJSLib_Disconnect_mBD33B69ADB22D19D6129649D0B72BB7091145CFC (void);
// 0x00000023 System.Boolean Mirror.SimpleWeb.SimpleWebJSLib::Send(System.Int32,System.Byte[],System.Int32,System.Int32)
extern void SimpleWebJSLib_Send_mDD4E2C4E57D668DF9AE2ADDFB5F07E5FAF9E1CDA (void);
// 0x00000024 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::.ctor(System.Int32,System.Int32)
extern void WebSocketClientWebGl__ctor_m3359B902DDD296DC1CF289C7D603FEBA6D5CD4EC (void);
// 0x00000025 System.Boolean Mirror.SimpleWeb.WebSocketClientWebGl::CheckJsConnected()
extern void WebSocketClientWebGl_CheckJsConnected_m3D3904ED843004CE35D6935444B8E3DC56B09B8A (void);
// 0x00000026 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Connect(System.Uri)
extern void WebSocketClientWebGl_Connect_m132636312358076221D9B14F120ABAE0FDD5247F (void);
// 0x00000027 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Disconnect()
extern void WebSocketClientWebGl_Disconnect_m0459B730869F364508D001DF3E8B5754E99AEDA5 (void);
// 0x00000028 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Send(System.ArraySegment`1<System.Byte>)
extern void WebSocketClientWebGl_Send_m59B9DC74DDD0689DB0E8581665A06EBC345AAA3D (void);
// 0x00000029 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onOpen()
extern void WebSocketClientWebGl_onOpen_m331B98DE8AF1951E0B81D39EC3680A5DFC1005B4 (void);
// 0x0000002A System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onClose()
extern void WebSocketClientWebGl_onClose_mF1C1D91432216A8891EE5F41B7CD92D691603FEA (void);
// 0x0000002B System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onMessage(System.IntPtr,System.Int32)
extern void WebSocketClientWebGl_onMessage_m18A38ABE0E6C032D24F9600FEF1367D8B048EF55 (void);
// 0x0000002C System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onErr()
extern void WebSocketClientWebGl_onErr_m4DE4A9558F853608C61F3D734B7E58B84E8D50DB (void);
// 0x0000002D System.Void Mirror.SimpleWeb.WebSocketClientWebGl::OpenCallback(System.Int32)
extern void WebSocketClientWebGl_OpenCallback_m80F152EFB837C26E75206C1C4991E86D6D04AC80 (void);
// 0x0000002E System.Void Mirror.SimpleWeb.WebSocketClientWebGl::CloseCallBack(System.Int32)
extern void WebSocketClientWebGl_CloseCallBack_m0398C2A1E6E502552227A580B26580A30980295E (void);
// 0x0000002F System.Void Mirror.SimpleWeb.WebSocketClientWebGl::MessageCallback(System.Int32,System.IntPtr,System.Int32)
extern void WebSocketClientWebGl_MessageCallback_mA836C7ECF911CF67137207E422EF7E0C941935DE (void);
// 0x00000030 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::ErrorCallback(System.Int32)
extern void WebSocketClientWebGl_ErrorCallback_m790762F5A840B1AEBD3D588B567EBD6E92ABBDCF (void);
// 0x00000031 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::.cctor()
extern void WebSocketClientWebGl__cctor_m46EA72300778C3DC61011656EB7B731B6471D741 (void);
// 0x00000032 System.Void Mirror.SimpleWeb.IBufferOwner::Return(Mirror.SimpleWeb.ArrayBuffer)
// 0x00000033 System.Int32 Mirror.SimpleWeb.ArrayBuffer::get_count()
extern void ArrayBuffer_get_count_m6B3407742D4010FF32CD7C463626BE7E33581379 (void);
// 0x00000034 System.Void Mirror.SimpleWeb.ArrayBuffer::set_count(System.Int32)
extern void ArrayBuffer_set_count_m9F41BA6D7D61402F538B718F7FB6081F19788F21 (void);
// 0x00000035 System.Void Mirror.SimpleWeb.ArrayBuffer::SetReleasesRequired(System.Int32)
extern void ArrayBuffer_SetReleasesRequired_mC05571168DACCEB86DCC2A91C743CC4B34ACD961 (void);
// 0x00000036 System.Void Mirror.SimpleWeb.ArrayBuffer::.ctor(Mirror.SimpleWeb.IBufferOwner,System.Int32)
extern void ArrayBuffer__ctor_m5AD14EC0F930F93E3F6058E6A009FB8D4992F0D4 (void);
// 0x00000037 System.Void Mirror.SimpleWeb.ArrayBuffer::Release()
extern void ArrayBuffer_Release_m24BF895C6A4BF8112518354139743DF9DB57080D (void);
// 0x00000038 System.Void Mirror.SimpleWeb.ArrayBuffer::Dispose()
extern void ArrayBuffer_Dispose_m66D109DED4A4452614BCAF1C0908BDB030D7E529 (void);
// 0x00000039 System.Void Mirror.SimpleWeb.ArrayBuffer::CopyTo(System.Byte[],System.Int32)
extern void ArrayBuffer_CopyTo_mA1E12FB002C28B8A52F1566FB262B4EB762CB2AC (void);
// 0x0000003A System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.ArraySegment`1<System.Byte>)
extern void ArrayBuffer_CopyFrom_m14ECFA96A2DF88D89E4B763E7D5D043C56F56D43 (void);
// 0x0000003B System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.Byte[],System.Int32,System.Int32)
extern void ArrayBuffer_CopyFrom_m52F937CCBE476538FC1D207AF29E497C04ECEFC7 (void);
// 0x0000003C System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.IntPtr,System.Int32)
extern void ArrayBuffer_CopyFrom_mFD60946FF956F8DF4CCFC389DEE724F2FDBE6353 (void);
// 0x0000003D System.ArraySegment`1<System.Byte> Mirror.SimpleWeb.ArrayBuffer::ToSegment()
extern void ArrayBuffer_ToSegment_mC3D1631EBC346EE3D0CB6DA9D485644584EC0939 (void);
// 0x0000003E System.Void Mirror.SimpleWeb.ArrayBuffer::Validate(System.Int32)
extern void ArrayBuffer_Validate_m99DE222FAD10B4B40ADDE872263A4577369C812C (void);
// 0x0000003F System.Void Mirror.SimpleWeb.BufferBucket::.ctor(System.Int32)
extern void BufferBucket__ctor_m4319D5E071541269F15BD94488D51F111DE468CE (void);
// 0x00000040 Mirror.SimpleWeb.ArrayBuffer Mirror.SimpleWeb.BufferBucket::Take()
extern void BufferBucket_Take_m2B6E3C2D6C496C7E66D903D89D522A075E156BEE (void);
// 0x00000041 System.Void Mirror.SimpleWeb.BufferBucket::Return(Mirror.SimpleWeb.ArrayBuffer)
extern void BufferBucket_Return_m17CC58D09202DECC1CDFC0E39D23D3F846C9CA2E (void);
// 0x00000042 System.Void Mirror.SimpleWeb.BufferBucket::IncrementCreated()
extern void BufferBucket_IncrementCreated_m7438270EAE97316DB84B019AEAC00ECB16FAB7EA (void);
// 0x00000043 System.Void Mirror.SimpleWeb.BufferBucket::DecrementCreated()
extern void BufferBucket_DecrementCreated_m319A675D0270824B97D84AD773D3568A4C4A5057 (void);
// 0x00000044 System.Void Mirror.SimpleWeb.BufferPool::.ctor(System.Int32,System.Int32,System.Int32)
extern void BufferPool__ctor_mB7CACD51C15CD0BF58C845A5745020063C408CBC (void);
// 0x00000045 System.Void Mirror.SimpleWeb.BufferPool::Validate()
extern void BufferPool_Validate_m59D5D2468F130DA9CAAF272F77506B36E5ADEF26 (void);
// 0x00000046 Mirror.SimpleWeb.ArrayBuffer Mirror.SimpleWeb.BufferPool::Take(System.Int32)
extern void BufferPool_Take_m2F8A13F352C29D2C2F4C302A57DD5111D27F7737 (void);
// 0x00000047 System.Void Mirror.SimpleWeb.Connection::.ctor(System.Net.Sockets.TcpClient,System.Action`1<Mirror.SimpleWeb.Connection>)
extern void Connection__ctor_m69468833DA56277795A4A6232B8F42F79D67DAB4 (void);
// 0x00000048 System.Void Mirror.SimpleWeb.Connection::Dispose()
extern void Connection_Dispose_mA5889AA11EAB5FE9B1000663625A6E13315538F2 (void);
// 0x00000049 System.String Mirror.SimpleWeb.Connection::ToString()
extern void Connection_ToString_m4DB5F53DC217551C43DFB68B01708468327F8F95 (void);
// 0x0000004A System.Void Mirror.SimpleWeb.Constants::.cctor()
extern void Constants__cctor_m0CFE02F2A1A8A181C5264A06D0AEB32108447DB0 (void);
// 0x0000004B System.String Mirror.SimpleWeb.Log::BufferToString(System.Byte[],System.Int32,System.Nullable`1<System.Int32>)
extern void Log_BufferToString_m8E478FF5F3F99E2B7E2866DF110A0FABB6162457 (void);
// 0x0000004C System.Void Mirror.SimpleWeb.Log::DumpBuffer(System.String,System.Byte[],System.Int32,System.Int32)
extern void Log_DumpBuffer_mAFA92B166249EB467BE611EE53315AE38D879F8D (void);
// 0x0000004D System.Void Mirror.SimpleWeb.Log::DumpBuffer(System.String,Mirror.SimpleWeb.ArrayBuffer)
extern void Log_DumpBuffer_m45029C035B9D96EAA471D71EB10DEB3EF5261FB9 (void);
// 0x0000004E System.Void Mirror.SimpleWeb.Log::Verbose(System.String,System.Boolean)
extern void Log_Verbose_m0D9B7A2B62A485C7186FE368F47110DEA886EA99 (void);
// 0x0000004F System.Void Mirror.SimpleWeb.Log::Info(System.String,System.Boolean)
extern void Log_Info_m991BB4455C589875FFD1873C807A6F27AFC5524D (void);
// 0x00000050 System.Void Mirror.SimpleWeb.Log::InfoException(System.Exception)
extern void Log_InfoException_m6EF05C66E09FA8A45FBE89AB207FC1FD3C0E5E24 (void);
// 0x00000051 System.Void Mirror.SimpleWeb.Log::Warn(System.String,System.Boolean)
extern void Log_Warn_mF231CD41811CA57B8907585911697D5173A8CD90 (void);
// 0x00000052 System.Void Mirror.SimpleWeb.Log::Error(System.String,System.Boolean)
extern void Log_Error_mE4912D2F29BF6C06DF2B7DB7EA277EB3188BC78C (void);
// 0x00000053 System.Void Mirror.SimpleWeb.Log::Exception(System.Exception)
extern void Log_Exception_m0D7A5D31D5EDA397C92894CEB0538F597FC9E2E5 (void);
// 0x00000054 System.Void Mirror.SimpleWeb.Log::.cctor()
extern void Log__cctor_m5EB82DA13DCE7A80E69C74776B6B5F3B2B2E8F95 (void);
// 0x00000055 System.Void Mirror.SimpleWeb.Message::.ctor(Mirror.SimpleWeb.EventType)
extern void Message__ctor_m0B897F8C3A1659C2230D47A7295BE5A03FCB04D2 (void);
// 0x00000056 System.Void Mirror.SimpleWeb.Message::.ctor(Mirror.SimpleWeb.ArrayBuffer)
extern void Message__ctor_m810777243F3A5556EA5EC68A2E62B061172C7F9A (void);
// 0x00000057 System.Void Mirror.SimpleWeb.Message::.ctor(System.Exception)
extern void Message__ctor_m6ABB36DE3FDDE755CA84516AB973DAC7DE6B8ABE (void);
// 0x00000058 System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,Mirror.SimpleWeb.EventType)
extern void Message__ctor_m0A428AC6143E22A9286E9126135F52A809C961F9 (void);
// 0x00000059 System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,Mirror.SimpleWeb.ArrayBuffer)
extern void Message__ctor_m79DE9A3AF251E3A2857A2C6A86EC589A8DDF5050 (void);
// 0x0000005A System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,System.Exception)
extern void Message__ctor_mF03CCA05732E965040A6ECD828FA51EE22BC610C (void);
// 0x0000005B System.Byte Mirror.SimpleWeb.MessageProcessor::FirstLengthByte(System.Byte[])
extern void MessageProcessor_FirstLengthByte_m3D540B08CD991499BDB760BA6BFA247CFA79D96B (void);
// 0x0000005C System.Boolean Mirror.SimpleWeb.MessageProcessor::NeedToReadShortLength(System.Byte[])
extern void MessageProcessor_NeedToReadShortLength_m214FBA731F554C123DEB43812CF477458D31D4F9 (void);
// 0x0000005D System.Boolean Mirror.SimpleWeb.MessageProcessor::NeedToReadLongLength(System.Byte[])
extern void MessageProcessor_NeedToReadLongLength_m356E85EFF750F1A6D3312CCDF43EF2B933C8C888 (void);
// 0x0000005E System.Int32 Mirror.SimpleWeb.MessageProcessor::GetOpcode(System.Byte[])
extern void MessageProcessor_GetOpcode_m0BB047BA6675DC09C846DC8E62DAEC043F7EF75D (void);
// 0x0000005F System.Int32 Mirror.SimpleWeb.MessageProcessor::GetPayloadLength(System.Byte[])
extern void MessageProcessor_GetPayloadLength_m8428C13C4132BF906BED612065D48B656E69A4FF (void);
// 0x00000060 System.Boolean Mirror.SimpleWeb.MessageProcessor::Finished(System.Byte[])
extern void MessageProcessor_Finished_m750593590ADF03A66C27630FCAE147C3A56E4EBF (void);
// 0x00000061 System.Void Mirror.SimpleWeb.MessageProcessor::ValidateHeader(System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern void MessageProcessor_ValidateHeader_mEB969A26D8F383AC658A9B9EABFD29C5540025E5 (void);
// 0x00000062 System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_m9CE3C3C92B4ADA7A88E76DE206C10CE579766F84 (void);
// 0x00000063 System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,Mirror.SimpleWeb.ArrayBuffer,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_mB0526CBB97EF1814D9CBB8DB3EACC555659EC701 (void);
// 0x00000064 System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_mEFE73CCF99DDBA248A2A4D48915809BFC10D1FDC (void);
// 0x00000065 System.Int32 Mirror.SimpleWeb.MessageProcessor::GetMessageLength(System.Byte[],System.Int32,System.Byte)
extern void MessageProcessor_GetMessageLength_m864775AD77C1A603E9251CD0B1E61ECA885528F1 (void);
// 0x00000066 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfMaskNotExpected(System.Boolean,System.Boolean)
extern void MessageProcessor_ThrowIfMaskNotExpected_m76C43E8BE61053EC510C9C74D3A6865DC37B9B54 (void);
// 0x00000067 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfBadOpCode(System.Int32,System.Boolean,System.Boolean)
extern void MessageProcessor_ThrowIfBadOpCode_mF171B6CA36E33E9DC787448A5AC04C82F62F8532 (void);
// 0x00000068 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfLengthZero(System.Int32)
extern void MessageProcessor_ThrowIfLengthZero_mD28C37780357AC8DCAEC459CE5B56BA4725424C2 (void);
// 0x00000069 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfMsgLengthTooLong(System.Int32,System.Int32)
extern void MessageProcessor_ThrowIfMsgLengthTooLong_m2C70F6F0BAEB4247329972D733984E24BD6E0A1E (void);
// 0x0000006A System.Int32 Mirror.SimpleWeb.ReadHelper::Read(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void ReadHelper_Read_m61140B8213CB84E232A6DD685EDCBB749C2003EE (void);
// 0x0000006B System.Boolean Mirror.SimpleWeb.ReadHelper::TryRead(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void ReadHelper_TryRead_m67B756CACAD454A857D4FE8FC6CD937BC34D5AF2 (void);
// 0x0000006C System.Nullable`1<System.Int32> Mirror.SimpleWeb.ReadHelper::SafeReadTillMatch(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Byte[])
extern void ReadHelper_SafeReadTillMatch_m7BD1C93317C0C82CB790311B5A3F04316C9C62DD (void);
// 0x0000006D System.Void Mirror.SimpleWeb.ReadHelper/<>c::.cctor()
extern void U3CU3Ec__cctor_m0E71D471A41292ED00697FDEF4B27A8DE9A17469 (void);
// 0x0000006E System.Void Mirror.SimpleWeb.ReadHelper/<>c::.ctor()
extern void U3CU3Ec__ctor_m30C059E528E2F7AB844A76021D113A4E5AE4628A (void);
// 0x0000006F System.Boolean Mirror.SimpleWeb.ReadHelper/<>c::<Read>b__0_0(System.Exception)
extern void U3CU3Ec_U3CReadU3Eb__0_0_m29A0327CD9DCD12EDFE88747012BBE26EFFE2E1D (void);
// 0x00000070 System.Void Mirror.SimpleWeb.ReadHelperException::.ctor(System.String)
extern void ReadHelperException__ctor_mAAF5876BE4A8A01061EBA2F3C7F23E59DD77B488 (void);
// 0x00000071 System.Void Mirror.SimpleWeb.ReadHelperException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ReadHelperException__ctor_m68E1BF7D17C85AD0A69BF37A416BD7B87FB23E4E (void);
// 0x00000072 System.Void Mirror.SimpleWeb.ReceiveLoop::Loop(Mirror.SimpleWeb.ReceiveLoop/Config)
extern void ReceiveLoop_Loop_mF86069A134991C3C31EF54DD3993A73BA6D098D2 (void);
// 0x00000073 System.Void Mirror.SimpleWeb.ReceiveLoop::ReadOneMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[])
extern void ReceiveLoop_ReadOneMessage_mBCBB97E2BC64D560DADC0D41C9BA4B38AD271326 (void);
// 0x00000074 Mirror.SimpleWeb.ReceiveLoop/Header Mirror.SimpleWeb.ReceiveLoop::ReadHeader(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[],System.Boolean)
extern void ReceiveLoop_ReadHeader_m3932B289F16E138C6B8C20229076F20C91DCC5C8 (void);
// 0x00000075 System.Void Mirror.SimpleWeb.ReceiveLoop::HandleArrayMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_HandleArrayMessage_m4D3BEA0869D58C2B57838DEBFB4EEE43ADDCEF75 (void);
// 0x00000076 Mirror.SimpleWeb.ArrayBuffer Mirror.SimpleWeb.ReceiveLoop::CopyMessageToBuffer(Mirror.SimpleWeb.BufferPool,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_CopyMessageToBuffer_m64748E40820A245044354BD10C2F2B4CB331AE8D (void);
// 0x00000077 System.Void Mirror.SimpleWeb.ReceiveLoop::HandleCloseMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_HandleCloseMessage_m3A089FACD0121CC5540914F9CC73AF982B602FDF (void);
// 0x00000078 System.String Mirror.SimpleWeb.ReceiveLoop::GetCloseMessage(System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_GetCloseMessage_m7F04B9A6F97B3FA26221DEC59FA68E2042A2BA6D (void);
// 0x00000079 System.Int32 Mirror.SimpleWeb.ReceiveLoop::GetCloseCode(System.Byte[],System.Int32)
extern void ReceiveLoop_GetCloseCode_mF7D18CFD1832660A69FF0CA742C27981795AEE8C (void);
// 0x0000007A System.Void Mirror.SimpleWeb.ReceiveLoop/Config::.ctor(Mirror.SimpleWeb.Connection,System.Int32,System.Boolean,System.Collections.Concurrent.ConcurrentQueue`1<Mirror.SimpleWeb.Message>,Mirror.SimpleWeb.BufferPool)
extern void Config__ctor_m991D60C316DD9DB9DAEB104B398083343282A37B (void);
// 0x0000007B System.Void Mirror.SimpleWeb.ReceiveLoop/Config::Deconstruct(Mirror.SimpleWeb.Connection&,System.Int32&,System.Boolean&,System.Collections.Concurrent.ConcurrentQueue`1<Mirror.SimpleWeb.Message>&,Mirror.SimpleWeb.BufferPool&)
extern void Config_Deconstruct_m42477046BC5A6A1A23EB942BF757A9D704EA9DD6 (void);
// 0x0000007C System.Void Mirror.SimpleWeb.SendLoopConfig::.cctor()
extern void SendLoopConfig__cctor_m9A53F59F5725532281B887615166E8AABD2F791C (void);
// 0x0000007D System.Void Mirror.SimpleWeb.SendLoop::Loop(Mirror.SimpleWeb.SendLoop/Config)
extern void SendLoop_Loop_m76E5B23DE9BF6DA3E7F08AEC45EC6BCDCA89C72B (void);
// 0x0000007E System.Int32 Mirror.SimpleWeb.SendLoop::SendMessage(System.Byte[],System.Int32,Mirror.SimpleWeb.ArrayBuffer,System.Boolean,Mirror.SimpleWeb.MaskHelper)
extern void SendLoop_SendMessage_mA9DBC6D761DD8830845EC18240447A74005BD222 (void);
// 0x0000007F System.Int32 Mirror.SimpleWeb.SendLoop::WriteHeader(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern void SendLoop_WriteHeader_mBE66DDAF1AA705D4B1B81ABBA2B707C0164449A7 (void);
// 0x00000080 System.Void Mirror.SimpleWeb.SendLoop/Config::.ctor(Mirror.SimpleWeb.Connection,System.Int32,System.Boolean)
extern void Config__ctor_m11F15A229C4B99409EA078DC555A3A207CF04BA8 (void);
// 0x00000081 System.Void Mirror.SimpleWeb.SendLoop/Config::Deconstruct(Mirror.SimpleWeb.Connection&,System.Int32&,System.Boolean&)
extern void Config_Deconstruct_mB074FAE5296DB9EC0C942E3945C22A32D9213E02 (void);
// 0x00000082 System.Void Mirror.SimpleWeb.MaskHelper::.ctor()
extern void MaskHelper__ctor_m8D069BB5C216928AE3470A2DBE5946FB3A16C560 (void);
// 0x00000083 System.Void Mirror.SimpleWeb.MaskHelper::Dispose()
extern void MaskHelper_Dispose_m0B49C47A0EB6637FC69279755B0E795F77C600A2 (void);
// 0x00000084 System.Int32 Mirror.SimpleWeb.MaskHelper::WriteMask(System.Byte[],System.Int32)
extern void MaskHelper_WriteMask_m73CA908D8345735680D2989C1EFDB1DF3D872C81 (void);
// 0x00000085 System.Void Mirror.SimpleWeb.TcpConfig::.ctor(System.Boolean,System.Int32,System.Int32)
extern void TcpConfig__ctor_m3B466C6348A85028023F8C407D6D59681470E036 (void);
// 0x00000086 System.Void Mirror.SimpleWeb.TcpConfig::ApplyTo(System.Net.Sockets.TcpClient)
extern void TcpConfig_ApplyTo_m203C690889A24E887E2D7B39204D0E3052BFD81F (void);
// 0x00000087 System.Void Mirror.SimpleWeb.Utils::CheckForInterupt()
extern void Utils_CheckForInterupt_mA3B358D1B1CFF37351EB51CE8AB2BB7E7E07F1CD (void);
// 0x00000088 System.Void Mirror.SimpleWeb.ServerHandshake::.ctor(Mirror.SimpleWeb.BufferPool,System.Int32)
extern void ServerHandshake__ctor_m5FE96319E0DFAC39BBFB42F1B6289078E3A9F53D (void);
// 0x00000089 System.Void Mirror.SimpleWeb.ServerHandshake::Finalize()
extern void ServerHandshake_Finalize_mD44A6AC4A5419716E814156D8093FCD26F857959 (void);
// 0x0000008A System.Boolean Mirror.SimpleWeb.ServerHandshake::TryHandshake(Mirror.SimpleWeb.Connection)
extern void ServerHandshake_TryHandshake_mCA5FB34E4407047EFD0C3CB8D1BCD9064B1E2322 (void);
// 0x0000008B System.String Mirror.SimpleWeb.ServerHandshake::ReadToEndForHandshake(System.IO.Stream)
extern void ServerHandshake_ReadToEndForHandshake_mC4C383F229408DA0C03B565B3D954DB5932A4F2A (void);
// 0x0000008C System.Boolean Mirror.SimpleWeb.ServerHandshake::IsGet(System.Byte[])
extern void ServerHandshake_IsGet_m557668C9FE945737F3663F10BA4E6ABDC51948E8 (void);
// 0x0000008D System.Void Mirror.SimpleWeb.ServerHandshake::AcceptHandshake(System.IO.Stream,System.String)
extern void ServerHandshake_AcceptHandshake_m69F573383F0BE9787A9FA13093A0CEF42D30D309 (void);
// 0x0000008E System.Void Mirror.SimpleWeb.ServerHandshake::GetKey(System.String,System.Byte[])
extern void ServerHandshake_GetKey_mC5707E78BE69374074FC17A72F867F592462A9EA (void);
// 0x0000008F System.Void Mirror.SimpleWeb.ServerHandshake::AppendGuid(System.Byte[])
extern void ServerHandshake_AppendGuid_mED074C40FB72AE3548ACDED6000BFEA66FFF4F9C (void);
// 0x00000090 System.Byte[] Mirror.SimpleWeb.ServerHandshake::CreateHash(System.Byte[])
extern void ServerHandshake_CreateHash_mF698F203A88439EAFFFFDA21ABF8BDCF912B4E80 (void);
// 0x00000091 System.Void Mirror.SimpleWeb.ServerHandshake::CreateResponse(System.Byte[],System.Byte[])
extern void ServerHandshake_CreateResponse_mCD5AFFCDE300395DDCD43508E750E8965B8360B2 (void);
// 0x00000092 System.Void Mirror.SimpleWeb.SslConfig::.ctor(System.Boolean,System.String,System.String,System.Security.Authentication.SslProtocols)
extern void SslConfig__ctor_m3EF0A6308C2B4E39929E39DC475660F02A6D86D1 (void);
// 0x00000093 System.Void Mirror.SimpleWeb.ServerSslHelper::.ctor(Mirror.SimpleWeb.SslConfig)
extern void ServerSslHelper__ctor_m5D02B3015379BE86F585AA1DDCA1242E9B20AC42 (void);
// 0x00000094 System.Boolean Mirror.SimpleWeb.ServerSslHelper::TryCreateStream(Mirror.SimpleWeb.Connection)
extern void ServerSslHelper_TryCreateStream_m8E6C930D37AB4AD5BC4D37319263608E77C665E5 (void);
// 0x00000095 System.IO.Stream Mirror.SimpleWeb.ServerSslHelper::CreateStream(System.Net.Sockets.NetworkStream)
extern void ServerSslHelper_CreateStream_m901C07D66EB407677DA476E98FBF36F861C9D2F6 (void);
// 0x00000096 System.Boolean Mirror.SimpleWeb.ServerSslHelper::acceptClient(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ServerSslHelper_acceptClient_mAC109BA641332EDA376AC3E7C325FDDCB6C6DC84 (void);
// 0x00000097 System.Void Mirror.SimpleWeb.SimpleWebServer::.ctor(System.Int32,Mirror.SimpleWeb.TcpConfig,System.Int32,System.Int32,Mirror.SimpleWeb.SslConfig)
extern void SimpleWebServer__ctor_mAF4BB8F5156F0D49B90DFD40E41ACE8ADE525207 (void);
// 0x00000098 System.Boolean Mirror.SimpleWeb.SimpleWebServer::get_Active()
extern void SimpleWebServer_get_Active_m11DD70FFD19AE0D28F45F9EA60E01E055981479D (void);
// 0x00000099 System.Void Mirror.SimpleWeb.SimpleWebServer::set_Active(System.Boolean)
extern void SimpleWebServer_set_Active_m0FA78DAFAE9DF25695B1F326B132C3062AB869E1 (void);
// 0x0000009A System.Void Mirror.SimpleWeb.SimpleWebServer::add_onConnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_add_onConnect_m4A2C520CBE4AA539341CE7EED32923DC502140F8 (void);
// 0x0000009B System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onConnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_remove_onConnect_m0194CCE747F9BCC76F97BE5DE5BFD333325598E3 (void);
// 0x0000009C System.Void Mirror.SimpleWeb.SimpleWebServer::add_onDisconnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_add_onDisconnect_m9A6E46529C60FB34CB060511B267FB4B91C458D8 (void);
// 0x0000009D System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onDisconnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_remove_onDisconnect_mAAF3ACAC3308258C0E290C8695144B621FF1A837 (void);
// 0x0000009E System.Void Mirror.SimpleWeb.SimpleWebServer::add_onData(System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>)
extern void SimpleWebServer_add_onData_mBDE3895320AC38AF5CD58BB789E9612FB42CA47C (void);
// 0x0000009F System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onData(System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>)
extern void SimpleWebServer_remove_onData_m33EAE5B6146F9F1310CC58661BC9E6BFDAC019C7 (void);
// 0x000000A0 System.Void Mirror.SimpleWeb.SimpleWebServer::add_onError(System.Action`2<System.Int32,System.Exception>)
extern void SimpleWebServer_add_onError_m895BA568CF858F8A9B5B243EDD60F6A64C8F2622 (void);
// 0x000000A1 System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onError(System.Action`2<System.Int32,System.Exception>)
extern void SimpleWebServer_remove_onError_m84DB6029666BCFD0B7E294EE1F1A37E9704104B1 (void);
// 0x000000A2 System.Void Mirror.SimpleWeb.SimpleWebServer::Start(System.UInt16)
extern void SimpleWebServer_Start_m6906F45BF5858D28A16DF6EE9F2A55A47E183A84 (void);
// 0x000000A3 System.Void Mirror.SimpleWeb.SimpleWebServer::Stop()
extern void SimpleWebServer_Stop_m79E018CDA3C7BD1DDE637C9881FCD36EFFF4D248 (void);
// 0x000000A4 System.Void Mirror.SimpleWeb.SimpleWebServer::SendAll(System.Collections.Generic.List`1<System.Int32>,System.ArraySegment`1<System.Byte>)
extern void SimpleWebServer_SendAll_mDFD2763A02174A772CEEF0D06FAAFB734C8FBC32 (void);
// 0x000000A5 System.Void Mirror.SimpleWeb.SimpleWebServer::SendOne(System.Int32,System.ArraySegment`1<System.Byte>)
extern void SimpleWebServer_SendOne_m3922CE4B13CE1BCD4FCD4C4FD9486D49E85A0C7E (void);
// 0x000000A6 System.Boolean Mirror.SimpleWeb.SimpleWebServer::KickClient(System.Int32)
extern void SimpleWebServer_KickClient_mE3AE0305CBDEB48F40641DC18B67065F5EF51213 (void);
// 0x000000A7 System.String Mirror.SimpleWeb.SimpleWebServer::GetClientAddress(System.Int32)
extern void SimpleWebServer_GetClientAddress_m49FEA61F58B47D0A349B753E78552DC9A843F943 (void);
// 0x000000A8 System.Void Mirror.SimpleWeb.SimpleWebServer::ProcessMessageQueue()
extern void SimpleWebServer_ProcessMessageQueue_m85DD7710658AA6F35D00C9148615E7B08921DBCC (void);
// 0x000000A9 System.Void Mirror.SimpleWeb.SimpleWebServer::ProcessMessageQueue(UnityEngine.MonoBehaviour)
extern void SimpleWebServer_ProcessMessageQueue_m779101E5DCC738D3A8E3644103F897A435BDE6C9 (void);
// 0x000000AA System.Void Mirror.SimpleWeb.WebSocketServer::.ctor(Mirror.SimpleWeb.TcpConfig,System.Int32,System.Int32,Mirror.SimpleWeb.SslConfig,Mirror.SimpleWeb.BufferPool)
extern void WebSocketServer__ctor_m0B97D89ED33982E9CB89A72420404FCC8FDFF21F (void);
// 0x000000AB System.Void Mirror.SimpleWeb.WebSocketServer::Listen(System.Int32)
extern void WebSocketServer_Listen_m09F0F6594A1775A1F46C895853C6EF6EE570BFC8 (void);
// 0x000000AC System.Void Mirror.SimpleWeb.WebSocketServer::Stop()
extern void WebSocketServer_Stop_mF62052A5493D9CEFB44C263A7533AE736AE232D9 (void);
// 0x000000AD System.Void Mirror.SimpleWeb.WebSocketServer::acceptLoop()
extern void WebSocketServer_acceptLoop_m47D48BB894193214B969166CAB25F88EAE397913 (void);
// 0x000000AE System.Void Mirror.SimpleWeb.WebSocketServer::HandshakeAndReceiveLoop(Mirror.SimpleWeb.Connection)
extern void WebSocketServer_HandshakeAndReceiveLoop_m0EB8AF1432222D9107003F46FC003A5BE7DB6596 (void);
// 0x000000AF System.Void Mirror.SimpleWeb.WebSocketServer::AfterConnectionDisposed(Mirror.SimpleWeb.Connection)
extern void WebSocketServer_AfterConnectionDisposed_mE0BEF9ADCE0A4085449D27C0A6D54F2A22E77AD7 (void);
// 0x000000B0 System.Void Mirror.SimpleWeb.WebSocketServer::Send(System.Int32,Mirror.SimpleWeb.ArrayBuffer)
extern void WebSocketServer_Send_m1DF12615268BF007B2045BC020FEA48256CB878B (void);
// 0x000000B1 System.Boolean Mirror.SimpleWeb.WebSocketServer::CloseConnection(System.Int32)
extern void WebSocketServer_CloseConnection_mB617C3647E792A9BEF99A7CF6D7C65A684F7695C (void);
// 0x000000B2 System.String Mirror.SimpleWeb.WebSocketServer::GetClientAddress(System.Int32)
extern void WebSocketServer_GetClientAddress_mFAFF7986D4647C0E2874357DAEEB385C43D3E6A0 (void);
// 0x000000B3 System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_mC8CB428BFDA6E91A42B908D385F4CCF3FF66DF2D (void);
// 0x000000B4 System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass14_0::<acceptLoop>b__0()
extern void U3CU3Ec__DisplayClass14_0_U3CacceptLoopU3Eb__0_mAE00ABDD1FB315DEE56503C153D6F2797A03D205 (void);
// 0x000000B5 System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_mEDDA9A1915FC1FDA94002D290565DAD86C0E2767 (void);
// 0x000000B6 System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass15_0::<HandshakeAndReceiveLoop>b__0()
extern void U3CU3Ec__DisplayClass15_0_U3CHandshakeAndReceiveLoopU3Eb__0_mE0C6D906EBEE0C00F96AB05911DE19BE9AB4484A (void);
// 0x000000B7 Mirror.SimpleWeb.Log/Levels Mirror.SimpleWeb.SimpleWebTransport::get_LogLevels()
extern void SimpleWebTransport_get_LogLevels_m17BBAFE591A7D0583F5C689C70A8FE61A7D67A20 (void);
// 0x000000B8 System.Void Mirror.SimpleWeb.SimpleWebTransport::set_LogLevels(Mirror.SimpleWeb.Log/Levels)
extern void SimpleWebTransport_set_LogLevels_m91E63F86289809F7B09EDE13ECE5DB1ABE31B8EF (void);
// 0x000000B9 System.Void Mirror.SimpleWeb.SimpleWebTransport::OnValidate()
extern void SimpleWebTransport_OnValidate_m619925A48CF375EB5B1E3C8B8260B8747EF7171A (void);
// 0x000000BA Mirror.SimpleWeb.TcpConfig Mirror.SimpleWeb.SimpleWebTransport::get_TcpConfig()
extern void SimpleWebTransport_get_TcpConfig_m332BBE74B74BC8D087ECBA478853F5F4DED9259B (void);
// 0x000000BB System.Boolean Mirror.SimpleWeb.SimpleWebTransport::Available()
extern void SimpleWebTransport_Available_m78AEE0D953685125788351A86536CF155341E25C (void);
// 0x000000BC System.Int32 Mirror.SimpleWeb.SimpleWebTransport::GetMaxPacketSize(System.Int32)
extern void SimpleWebTransport_GetMaxPacketSize_m3536E7CF4C99AA21CBD5B5882D82713E0B44E1D5 (void);
// 0x000000BD System.Void Mirror.SimpleWeb.SimpleWebTransport::Awake()
extern void SimpleWebTransport_Awake_mD24ED98C59C71F03534FA83A0FF4BFE162BD7BAD (void);
// 0x000000BE System.Void Mirror.SimpleWeb.SimpleWebTransport::Shutdown()
extern void SimpleWebTransport_Shutdown_m321DB8A40761231D05C2CFE505C0E916C14CB02B (void);
// 0x000000BF System.String Mirror.SimpleWeb.SimpleWebTransport::GetClientScheme()
extern void SimpleWebTransport_GetClientScheme_mCEF68DCBEE92186713E519338E1709B755B54B05 (void);
// 0x000000C0 System.String Mirror.SimpleWeb.SimpleWebTransport::GetServerScheme()
extern void SimpleWebTransport_GetServerScheme_m5A3F6B172802F57F6784C3DA2404192D5EA1B3F9 (void);
// 0x000000C1 System.Boolean Mirror.SimpleWeb.SimpleWebTransport::ClientConnected()
extern void SimpleWebTransport_ClientConnected_m67673D7C83CA59F9564EDC73FF1EE7ED7CFBFECD (void);
// 0x000000C2 System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientConnect(System.String)
extern void SimpleWebTransport_ClientConnect_m694C4DB81C38B2DFA12F47F19687F8FCBE62CB62 (void);
// 0x000000C3 System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientDisconnect()
extern void SimpleWebTransport_ClientDisconnect_mEF08C07C942734FEA270EF39FBE64FEF4CC5513D (void);
// 0x000000C4 System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
extern void SimpleWebTransport_ClientSend_m50938276CA69EEC32A1FD433B0491CEFE78543BB (void);
// 0x000000C5 System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientEarlyUpdate()
extern void SimpleWebTransport_ClientEarlyUpdate_m06C4E0B791738398C6EDE02C6C307E620C1BCBD3 (void);
// 0x000000C6 System.Boolean Mirror.SimpleWeb.SimpleWebTransport::ServerActive()
extern void SimpleWebTransport_ServerActive_m5316EB7A008015931BD2954C1BACBC7A70C5A20F (void);
// 0x000000C7 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerStart()
extern void SimpleWebTransport_ServerStart_mF4B057FE12C3EFE29EBC13E8E205534C3360B3C5 (void);
// 0x000000C8 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerStop()
extern void SimpleWebTransport_ServerStop_m52C6774B6D2DDCD97EC1C64D386FF56A28F89979 (void);
// 0x000000C9 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerDisconnect(System.Int32)
extern void SimpleWebTransport_ServerDisconnect_mD7C048820EC752AE1A534690651D9D9F0D2F2F65 (void);
// 0x000000CA System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
extern void SimpleWebTransport_ServerSend_m2462817C4236943AF4DF61B3D2EBDB977384FB6C (void);
// 0x000000CB System.String Mirror.SimpleWeb.SimpleWebTransport::ServerGetClientAddress(System.Int32)
extern void SimpleWebTransport_ServerGetClientAddress_mBAB7F9F81C77745A3F869AE5EDEDF4F08F71C10C (void);
// 0x000000CC System.Uri Mirror.SimpleWeb.SimpleWebTransport::ServerUri()
extern void SimpleWebTransport_ServerUri_mEB0D546886E41E37E88C2D5B12045D6893CA4E2F (void);
// 0x000000CD System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerEarlyUpdate()
extern void SimpleWebTransport_ServerEarlyUpdate_m022133EBE14EDAD461ABBD9FECCBAAF347DB7621 (void);
// 0x000000CE System.Void Mirror.SimpleWeb.SimpleWebTransport::.ctor()
extern void SimpleWebTransport__ctor_mE6F2B538F6ADC8246E31AA32F211FCB6F328DD81 (void);
// 0x000000CF System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_0()
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_0_mD59F59F2AFC5294A380C3E34FA5A9A51949FCD78 (void);
// 0x000000D0 System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_1(System.ArraySegment`1<System.Byte>)
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_1_m1FBA0DE57A73B3C839DD6C9C13BC3CC7440C1103 (void);
// 0x000000D1 System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_2(System.Exception)
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_2_m9E30C0B6DFF15211D8911EB4E5EE541EC0BDE419 (void);
// 0x000000D2 System.Void Mirror.SimpleWeb.SimpleWebTransport::<ServerStart>b__37_0(System.Int32,System.ArraySegment`1<System.Byte>)
extern void SimpleWebTransport_U3CServerStartU3Eb__37_0_m286CBB61A6FBD41ED20620A529B702DE97C47FD0 (void);
// 0x000000D3 Mirror.SimpleWeb.SslConfig Mirror.SimpleWeb.SslConfigLoader::Load(System.Boolean,System.String,System.Security.Authentication.SslProtocols)
extern void SslConfigLoader_Load_m9DC66B5085AD6B6C1BAEDD369BB24C7F9575CBD5 (void);
// 0x000000D4 Mirror.SimpleWeb.SslConfigLoader/Cert Mirror.SimpleWeb.SslConfigLoader::LoadCertJson(System.String)
extern void SslConfigLoader_LoadCertJson_mF8A5B6245050F152A522FDDDF4E783DB73BEDDBA (void);
// 0x000000D5 System.Void Mirror.SimpleWeb.SslConfigLoader::.ctor()
extern void SslConfigLoader__ctor_mDC0DEC34542A909D90CB729995AC2A32DC4A19EF (void);
static Il2CppMethodPointer s_methodPointers[213] = 
{
	SimpleWebClient_Create_m6B106DEB0EF90C669D50063C8826ADB881DCCEF5,
	SimpleWebClient__ctor_m6055026860D29247CA3D5CF7A0E9E84DC7B29361,
	SimpleWebClient_get_ConnectionState_mC7B8DFF223A6516D52BA0C2C3F94D7219C7D3323,
	SimpleWebClient_add_onConnect_mF9BF46AC86390B2A246E7EDF6661F5AD68323B09,
	SimpleWebClient_remove_onConnect_mC6F2CB45B09BEAEE5DD3B328C2843E8638499C25,
	SimpleWebClient_add_onDisconnect_m2C43536FF74EDFCD023B71E3E0CB2A9DCF83CD51,
	SimpleWebClient_remove_onDisconnect_m6721CDD47F7313E25F86A857C1A1A96118BEBBB0,
	SimpleWebClient_add_onData_m85AFA10078027130328F4425CFF9DB48BDC2DDAF,
	SimpleWebClient_remove_onData_m33E5654D32586B7DF9C0DC8C95BB01DA29951F3E,
	SimpleWebClient_add_onError_m9B0EEB39941BA854826BA7A32F848D83EED8B8DD,
	SimpleWebClient_remove_onError_m607164756F2B1CD159EC33BA0BB79ADE79A11677,
	SimpleWebClient_ProcessMessageQueue_mCBEDE808A7A2904838DED72B8137A96C072DFA6D,
	SimpleWebClient_ProcessMessageQueue_m0AD77513FFDB5BDDB6657411E983F4A6C0FAB89B,
	NULL,
	NULL,
	NULL,
	ClientHandshake_TryHandshake_m303AAF1C65168BEB1387178F2843532FFC20D555,
	ClientHandshake__ctor_mE2B2BA4BF3E3112477A1B2833EE9D7F2E697C59C,
	ClientSslHelper_TryCreateStream_mF889DEA6547AAC41C0EF5B303EDAD124F481ECE9,
	ClientSslHelper_CreateStream_m51BF0CA61CD4F032DEA6C730EDFB05EAB53C42A4,
	ClientSslHelper_ValidateServerCertificate_mA6477D305AFD1033341BAA31BFFCD50B9E0B3A16,
	ClientSslHelper__ctor_mCBA00448AAAD840571563B7AB3CEABDDB21804ED,
	WebSocketClientStandAlone__ctor_m3FDFB36611929D998DBB70F80509A97C4B6E8179,
	WebSocketClientStandAlone_Connect_m135F05DBE9127E5B3FF7546169734099F3A5FFB1,
	WebSocketClientStandAlone_ConnectAndReceiveLoop_mA792BECE91DA513BE7C454282CA9CF6CB29C8F14,
	WebSocketClientStandAlone_AfterConnectionDisposed_m1A7F524818DBE3AF7B93228BA88535F4B55B21D5,
	WebSocketClientStandAlone_Disconnect_mE5128E19A422242CB238FE9933A8C5558E271695,
	WebSocketClientStandAlone_Send_mF4A3489C14D44E421D37429F65ABAF29A9AF5A83,
	WebSocketClientStandAlone_U3CConnectAndReceiveLoopU3Eb__6_0_m38B9D05C8B8D232F4E7CFA39BDB41746CB9E0F60,
	U3CU3Ec__DisplayClass5_0__ctor_m3446B8C458569D312248C9B799B44706DD28C295,
	U3CU3Ec__DisplayClass5_0_U3CConnectU3Eb__0_mE810DA773ED19598E760F58FFFFBB31A4867B6F2,
	SimpleWebJSLib_IsConnected_m2A372F974C22CE0FBC89D91F04A7D482CC679BEC,
	SimpleWebJSLib_Connect_mB6C2AC61AFC006B52C45C9D21CF2B1381051434E,
	SimpleWebJSLib_Disconnect_mBD33B69ADB22D19D6129649D0B72BB7091145CFC,
	SimpleWebJSLib_Send_mDD4E2C4E57D668DF9AE2ADDFB5F07E5FAF9E1CDA,
	WebSocketClientWebGl__ctor_m3359B902DDD296DC1CF289C7D603FEBA6D5CD4EC,
	WebSocketClientWebGl_CheckJsConnected_m3D3904ED843004CE35D6935444B8E3DC56B09B8A,
	WebSocketClientWebGl_Connect_m132636312358076221D9B14F120ABAE0FDD5247F,
	WebSocketClientWebGl_Disconnect_m0459B730869F364508D001DF3E8B5754E99AEDA5,
	WebSocketClientWebGl_Send_m59B9DC74DDD0689DB0E8581665A06EBC345AAA3D,
	WebSocketClientWebGl_onOpen_m331B98DE8AF1951E0B81D39EC3680A5DFC1005B4,
	WebSocketClientWebGl_onClose_mF1C1D91432216A8891EE5F41B7CD92D691603FEA,
	WebSocketClientWebGl_onMessage_m18A38ABE0E6C032D24F9600FEF1367D8B048EF55,
	WebSocketClientWebGl_onErr_m4DE4A9558F853608C61F3D734B7E58B84E8D50DB,
	WebSocketClientWebGl_OpenCallback_m80F152EFB837C26E75206C1C4991E86D6D04AC80,
	WebSocketClientWebGl_CloseCallBack_m0398C2A1E6E502552227A580B26580A30980295E,
	WebSocketClientWebGl_MessageCallback_mA836C7ECF911CF67137207E422EF7E0C941935DE,
	WebSocketClientWebGl_ErrorCallback_m790762F5A840B1AEBD3D588B567EBD6E92ABBDCF,
	WebSocketClientWebGl__cctor_m46EA72300778C3DC61011656EB7B731B6471D741,
	NULL,
	ArrayBuffer_get_count_m6B3407742D4010FF32CD7C463626BE7E33581379,
	ArrayBuffer_set_count_m9F41BA6D7D61402F538B718F7FB6081F19788F21,
	ArrayBuffer_SetReleasesRequired_mC05571168DACCEB86DCC2A91C743CC4B34ACD961,
	ArrayBuffer__ctor_m5AD14EC0F930F93E3F6058E6A009FB8D4992F0D4,
	ArrayBuffer_Release_m24BF895C6A4BF8112518354139743DF9DB57080D,
	ArrayBuffer_Dispose_m66D109DED4A4452614BCAF1C0908BDB030D7E529,
	ArrayBuffer_CopyTo_mA1E12FB002C28B8A52F1566FB262B4EB762CB2AC,
	ArrayBuffer_CopyFrom_m14ECFA96A2DF88D89E4B763E7D5D043C56F56D43,
	ArrayBuffer_CopyFrom_m52F937CCBE476538FC1D207AF29E497C04ECEFC7,
	ArrayBuffer_CopyFrom_mFD60946FF956F8DF4CCFC389DEE724F2FDBE6353,
	ArrayBuffer_ToSegment_mC3D1631EBC346EE3D0CB6DA9D485644584EC0939,
	ArrayBuffer_Validate_m99DE222FAD10B4B40ADDE872263A4577369C812C,
	BufferBucket__ctor_m4319D5E071541269F15BD94488D51F111DE468CE,
	BufferBucket_Take_m2B6E3C2D6C496C7E66D903D89D522A075E156BEE,
	BufferBucket_Return_m17CC58D09202DECC1CDFC0E39D23D3F846C9CA2E,
	BufferBucket_IncrementCreated_m7438270EAE97316DB84B019AEAC00ECB16FAB7EA,
	BufferBucket_DecrementCreated_m319A675D0270824B97D84AD773D3568A4C4A5057,
	BufferPool__ctor_mB7CACD51C15CD0BF58C845A5745020063C408CBC,
	BufferPool_Validate_m59D5D2468F130DA9CAAF272F77506B36E5ADEF26,
	BufferPool_Take_m2F8A13F352C29D2C2F4C302A57DD5111D27F7737,
	Connection__ctor_m69468833DA56277795A4A6232B8F42F79D67DAB4,
	Connection_Dispose_mA5889AA11EAB5FE9B1000663625A6E13315538F2,
	Connection_ToString_m4DB5F53DC217551C43DFB68B01708468327F8F95,
	Constants__cctor_m0CFE02F2A1A8A181C5264A06D0AEB32108447DB0,
	Log_BufferToString_m8E478FF5F3F99E2B7E2866DF110A0FABB6162457,
	Log_DumpBuffer_mAFA92B166249EB467BE611EE53315AE38D879F8D,
	Log_DumpBuffer_m45029C035B9D96EAA471D71EB10DEB3EF5261FB9,
	Log_Verbose_m0D9B7A2B62A485C7186FE368F47110DEA886EA99,
	Log_Info_m991BB4455C589875FFD1873C807A6F27AFC5524D,
	Log_InfoException_m6EF05C66E09FA8A45FBE89AB207FC1FD3C0E5E24,
	Log_Warn_mF231CD41811CA57B8907585911697D5173A8CD90,
	Log_Error_mE4912D2F29BF6C06DF2B7DB7EA277EB3188BC78C,
	Log_Exception_m0D7A5D31D5EDA397C92894CEB0538F597FC9E2E5,
	Log__cctor_m5EB82DA13DCE7A80E69C74776B6B5F3B2B2E8F95,
	Message__ctor_m0B897F8C3A1659C2230D47A7295BE5A03FCB04D2,
	Message__ctor_m810777243F3A5556EA5EC68A2E62B061172C7F9A,
	Message__ctor_m6ABB36DE3FDDE755CA84516AB973DAC7DE6B8ABE,
	Message__ctor_m0A428AC6143E22A9286E9126135F52A809C961F9,
	Message__ctor_m79DE9A3AF251E3A2857A2C6A86EC589A8DDF5050,
	Message__ctor_mF03CCA05732E965040A6ECD828FA51EE22BC610C,
	MessageProcessor_FirstLengthByte_m3D540B08CD991499BDB760BA6BFA247CFA79D96B,
	MessageProcessor_NeedToReadShortLength_m214FBA731F554C123DEB43812CF477458D31D4F9,
	MessageProcessor_NeedToReadLongLength_m356E85EFF750F1A6D3312CCDF43EF2B933C8C888,
	MessageProcessor_GetOpcode_m0BB047BA6675DC09C846DC8E62DAEC043F7EF75D,
	MessageProcessor_GetPayloadLength_m8428C13C4132BF906BED612065D48B656E69A4FF,
	MessageProcessor_Finished_m750593590ADF03A66C27630FCAE147C3A56E4EBF,
	MessageProcessor_ValidateHeader_mEB969A26D8F383AC658A9B9EABFD29C5540025E5,
	MessageProcessor_ToggleMask_m9CE3C3C92B4ADA7A88E76DE206C10CE579766F84,
	MessageProcessor_ToggleMask_mB0526CBB97EF1814D9CBB8DB3EACC555659EC701,
	MessageProcessor_ToggleMask_mEFE73CCF99DDBA248A2A4D48915809BFC10D1FDC,
	MessageProcessor_GetMessageLength_m864775AD77C1A603E9251CD0B1E61ECA885528F1,
	MessageProcessor_ThrowIfMaskNotExpected_m76C43E8BE61053EC510C9C74D3A6865DC37B9B54,
	MessageProcessor_ThrowIfBadOpCode_mF171B6CA36E33E9DC787448A5AC04C82F62F8532,
	MessageProcessor_ThrowIfLengthZero_mD28C37780357AC8DCAEC459CE5B56BA4725424C2,
	MessageProcessor_ThrowIfMsgLengthTooLong_m2C70F6F0BAEB4247329972D733984E24BD6E0A1E,
	ReadHelper_Read_m61140B8213CB84E232A6DD685EDCBB749C2003EE,
	ReadHelper_TryRead_m67B756CACAD454A857D4FE8FC6CD937BC34D5AF2,
	ReadHelper_SafeReadTillMatch_m7BD1C93317C0C82CB790311B5A3F04316C9C62DD,
	U3CU3Ec__cctor_m0E71D471A41292ED00697FDEF4B27A8DE9A17469,
	U3CU3Ec__ctor_m30C059E528E2F7AB844A76021D113A4E5AE4628A,
	U3CU3Ec_U3CReadU3Eb__0_0_m29A0327CD9DCD12EDFE88747012BBE26EFFE2E1D,
	ReadHelperException__ctor_mAAF5876BE4A8A01061EBA2F3C7F23E59DD77B488,
	ReadHelperException__ctor_m68E1BF7D17C85AD0A69BF37A416BD7B87FB23E4E,
	ReceiveLoop_Loop_mF86069A134991C3C31EF54DD3993A73BA6D098D2,
	ReceiveLoop_ReadOneMessage_mBCBB97E2BC64D560DADC0D41C9BA4B38AD271326,
	ReceiveLoop_ReadHeader_m3932B289F16E138C6B8C20229076F20C91DCC5C8,
	ReceiveLoop_HandleArrayMessage_m4D3BEA0869D58C2B57838DEBFB4EEE43ADDCEF75,
	ReceiveLoop_CopyMessageToBuffer_m64748E40820A245044354BD10C2F2B4CB331AE8D,
	ReceiveLoop_HandleCloseMessage_m3A089FACD0121CC5540914F9CC73AF982B602FDF,
	ReceiveLoop_GetCloseMessage_m7F04B9A6F97B3FA26221DEC59FA68E2042A2BA6D,
	ReceiveLoop_GetCloseCode_mF7D18CFD1832660A69FF0CA742C27981795AEE8C,
	Config__ctor_m991D60C316DD9DB9DAEB104B398083343282A37B,
	Config_Deconstruct_m42477046BC5A6A1A23EB942BF757A9D704EA9DD6,
	SendLoopConfig__cctor_m9A53F59F5725532281B887615166E8AABD2F791C,
	SendLoop_Loop_m76E5B23DE9BF6DA3E7F08AEC45EC6BCDCA89C72B,
	SendLoop_SendMessage_mA9DBC6D761DD8830845EC18240447A74005BD222,
	SendLoop_WriteHeader_mBE66DDAF1AA705D4B1B81ABBA2B707C0164449A7,
	Config__ctor_m11F15A229C4B99409EA078DC555A3A207CF04BA8,
	Config_Deconstruct_mB074FAE5296DB9EC0C942E3945C22A32D9213E02,
	MaskHelper__ctor_m8D069BB5C216928AE3470A2DBE5946FB3A16C560,
	MaskHelper_Dispose_m0B49C47A0EB6637FC69279755B0E795F77C600A2,
	MaskHelper_WriteMask_m73CA908D8345735680D2989C1EFDB1DF3D872C81,
	TcpConfig__ctor_m3B466C6348A85028023F8C407D6D59681470E036,
	TcpConfig_ApplyTo_m203C690889A24E887E2D7B39204D0E3052BFD81F,
	Utils_CheckForInterupt_mA3B358D1B1CFF37351EB51CE8AB2BB7E7E07F1CD,
	ServerHandshake__ctor_m5FE96319E0DFAC39BBFB42F1B6289078E3A9F53D,
	ServerHandshake_Finalize_mD44A6AC4A5419716E814156D8093FCD26F857959,
	ServerHandshake_TryHandshake_mCA5FB34E4407047EFD0C3CB8D1BCD9064B1E2322,
	ServerHandshake_ReadToEndForHandshake_mC4C383F229408DA0C03B565B3D954DB5932A4F2A,
	ServerHandshake_IsGet_m557668C9FE945737F3663F10BA4E6ABDC51948E8,
	ServerHandshake_AcceptHandshake_m69F573383F0BE9787A9FA13093A0CEF42D30D309,
	ServerHandshake_GetKey_mC5707E78BE69374074FC17A72F867F592462A9EA,
	ServerHandshake_AppendGuid_mED074C40FB72AE3548ACDED6000BFEA66FFF4F9C,
	ServerHandshake_CreateHash_mF698F203A88439EAFFFFDA21ABF8BDCF912B4E80,
	ServerHandshake_CreateResponse_mCD5AFFCDE300395DDCD43508E750E8965B8360B2,
	SslConfig__ctor_m3EF0A6308C2B4E39929E39DC475660F02A6D86D1,
	ServerSslHelper__ctor_m5D02B3015379BE86F585AA1DDCA1242E9B20AC42,
	ServerSslHelper_TryCreateStream_m8E6C930D37AB4AD5BC4D37319263608E77C665E5,
	ServerSslHelper_CreateStream_m901C07D66EB407677DA476E98FBF36F861C9D2F6,
	ServerSslHelper_acceptClient_mAC109BA641332EDA376AC3E7C325FDDCB6C6DC84,
	SimpleWebServer__ctor_mAF4BB8F5156F0D49B90DFD40E41ACE8ADE525207,
	SimpleWebServer_get_Active_m11DD70FFD19AE0D28F45F9EA60E01E055981479D,
	SimpleWebServer_set_Active_m0FA78DAFAE9DF25695B1F326B132C3062AB869E1,
	SimpleWebServer_add_onConnect_m4A2C520CBE4AA539341CE7EED32923DC502140F8,
	SimpleWebServer_remove_onConnect_m0194CCE747F9BCC76F97BE5DE5BFD333325598E3,
	SimpleWebServer_add_onDisconnect_m9A6E46529C60FB34CB060511B267FB4B91C458D8,
	SimpleWebServer_remove_onDisconnect_mAAF3ACAC3308258C0E290C8695144B621FF1A837,
	SimpleWebServer_add_onData_mBDE3895320AC38AF5CD58BB789E9612FB42CA47C,
	SimpleWebServer_remove_onData_m33EAE5B6146F9F1310CC58661BC9E6BFDAC019C7,
	SimpleWebServer_add_onError_m895BA568CF858F8A9B5B243EDD60F6A64C8F2622,
	SimpleWebServer_remove_onError_m84DB6029666BCFD0B7E294EE1F1A37E9704104B1,
	SimpleWebServer_Start_m6906F45BF5858D28A16DF6EE9F2A55A47E183A84,
	SimpleWebServer_Stop_m79E018CDA3C7BD1DDE637C9881FCD36EFFF4D248,
	SimpleWebServer_SendAll_mDFD2763A02174A772CEEF0D06FAAFB734C8FBC32,
	SimpleWebServer_SendOne_m3922CE4B13CE1BCD4FCD4C4FD9486D49E85A0C7E,
	SimpleWebServer_KickClient_mE3AE0305CBDEB48F40641DC18B67065F5EF51213,
	SimpleWebServer_GetClientAddress_m49FEA61F58B47D0A349B753E78552DC9A843F943,
	SimpleWebServer_ProcessMessageQueue_m85DD7710658AA6F35D00C9148615E7B08921DBCC,
	SimpleWebServer_ProcessMessageQueue_m779101E5DCC738D3A8E3644103F897A435BDE6C9,
	WebSocketServer__ctor_m0B97D89ED33982E9CB89A72420404FCC8FDFF21F,
	WebSocketServer_Listen_m09F0F6594A1775A1F46C895853C6EF6EE570BFC8,
	WebSocketServer_Stop_mF62052A5493D9CEFB44C263A7533AE736AE232D9,
	WebSocketServer_acceptLoop_m47D48BB894193214B969166CAB25F88EAE397913,
	WebSocketServer_HandshakeAndReceiveLoop_m0EB8AF1432222D9107003F46FC003A5BE7DB6596,
	WebSocketServer_AfterConnectionDisposed_mE0BEF9ADCE0A4085449D27C0A6D54F2A22E77AD7,
	WebSocketServer_Send_m1DF12615268BF007B2045BC020FEA48256CB878B,
	WebSocketServer_CloseConnection_mB617C3647E792A9BEF99A7CF6D7C65A684F7695C,
	WebSocketServer_GetClientAddress_mFAFF7986D4647C0E2874357DAEEB385C43D3E6A0,
	U3CU3Ec__DisplayClass14_0__ctor_mC8CB428BFDA6E91A42B908D385F4CCF3FF66DF2D,
	U3CU3Ec__DisplayClass14_0_U3CacceptLoopU3Eb__0_mAE00ABDD1FB315DEE56503C153D6F2797A03D205,
	U3CU3Ec__DisplayClass15_0__ctor_mEDDA9A1915FC1FDA94002D290565DAD86C0E2767,
	U3CU3Ec__DisplayClass15_0_U3CHandshakeAndReceiveLoopU3Eb__0_mE0C6D906EBEE0C00F96AB05911DE19BE9AB4484A,
	SimpleWebTransport_get_LogLevels_m17BBAFE591A7D0583F5C689C70A8FE61A7D67A20,
	SimpleWebTransport_set_LogLevels_m91E63F86289809F7B09EDE13ECE5DB1ABE31B8EF,
	SimpleWebTransport_OnValidate_m619925A48CF375EB5B1E3C8B8260B8747EF7171A,
	SimpleWebTransport_get_TcpConfig_m332BBE74B74BC8D087ECBA478853F5F4DED9259B,
	SimpleWebTransport_Available_m78AEE0D953685125788351A86536CF155341E25C,
	SimpleWebTransport_GetMaxPacketSize_m3536E7CF4C99AA21CBD5B5882D82713E0B44E1D5,
	SimpleWebTransport_Awake_mD24ED98C59C71F03534FA83A0FF4BFE162BD7BAD,
	SimpleWebTransport_Shutdown_m321DB8A40761231D05C2CFE505C0E916C14CB02B,
	SimpleWebTransport_GetClientScheme_mCEF68DCBEE92186713E519338E1709B755B54B05,
	SimpleWebTransport_GetServerScheme_m5A3F6B172802F57F6784C3DA2404192D5EA1B3F9,
	SimpleWebTransport_ClientConnected_m67673D7C83CA59F9564EDC73FF1EE7ED7CFBFECD,
	SimpleWebTransport_ClientConnect_m694C4DB81C38B2DFA12F47F19687F8FCBE62CB62,
	SimpleWebTransport_ClientDisconnect_mEF08C07C942734FEA270EF39FBE64FEF4CC5513D,
	SimpleWebTransport_ClientSend_m50938276CA69EEC32A1FD433B0491CEFE78543BB,
	SimpleWebTransport_ClientEarlyUpdate_m06C4E0B791738398C6EDE02C6C307E620C1BCBD3,
	SimpleWebTransport_ServerActive_m5316EB7A008015931BD2954C1BACBC7A70C5A20F,
	SimpleWebTransport_ServerStart_mF4B057FE12C3EFE29EBC13E8E205534C3360B3C5,
	SimpleWebTransport_ServerStop_m52C6774B6D2DDCD97EC1C64D386FF56A28F89979,
	SimpleWebTransport_ServerDisconnect_mD7C048820EC752AE1A534690651D9D9F0D2F2F65,
	SimpleWebTransport_ServerSend_m2462817C4236943AF4DF61B3D2EBDB977384FB6C,
	SimpleWebTransport_ServerGetClientAddress_mBAB7F9F81C77745A3F869AE5EDEDF4F08F71C10C,
	SimpleWebTransport_ServerUri_mEB0D546886E41E37E88C2D5B12045D6893CA4E2F,
	SimpleWebTransport_ServerEarlyUpdate_m022133EBE14EDAD461ABBD9FECCBAAF347DB7621,
	SimpleWebTransport__ctor_mE6F2B538F6ADC8246E31AA32F211FCB6F328DD81,
	SimpleWebTransport_U3CClientConnectU3Eb__32_0_mD59F59F2AFC5294A380C3E34FA5A9A51949FCD78,
	SimpleWebTransport_U3CClientConnectU3Eb__32_1_m1FBA0DE57A73B3C839DD6C9C13BC3CC7440C1103,
	SimpleWebTransport_U3CClientConnectU3Eb__32_2_m9E30C0B6DFF15211D8911EB4E5EE541EC0BDE419,
	SimpleWebTransport_U3CServerStartU3Eb__37_0_m286CBB61A6FBD41ED20620A529B702DE97C47FD0,
	SslConfigLoader_Load_m9DC66B5085AD6B6C1BAEDD369BB24C7F9575CBD5,
	SslConfigLoader_LoadCertJson_mF8A5B6245050F152A522FDDDF4E783DB73BEDDBA,
	SslConfigLoader__ctor_mDC0DEC34542A909D90CB729995AC2A32DC4A19EF,
};
extern void Message__ctor_m0B897F8C3A1659C2230D47A7295BE5A03FCB04D2_AdjustorThunk (void);
extern void Message__ctor_m810777243F3A5556EA5EC68A2E62B061172C7F9A_AdjustorThunk (void);
extern void Message__ctor_m6ABB36DE3FDDE755CA84516AB973DAC7DE6B8ABE_AdjustorThunk (void);
extern void Message__ctor_m0A428AC6143E22A9286E9126135F52A809C961F9_AdjustorThunk (void);
extern void Message__ctor_m79DE9A3AF251E3A2857A2C6A86EC589A8DDF5050_AdjustorThunk (void);
extern void Message__ctor_mF03CCA05732E965040A6ECD828FA51EE22BC610C_AdjustorThunk (void);
extern void Config__ctor_m991D60C316DD9DB9DAEB104B398083343282A37B_AdjustorThunk (void);
extern void Config_Deconstruct_m42477046BC5A6A1A23EB942BF757A9D704EA9DD6_AdjustorThunk (void);
extern void Config__ctor_m11F15A229C4B99409EA078DC555A3A207CF04BA8_AdjustorThunk (void);
extern void Config_Deconstruct_mB074FAE5296DB9EC0C942E3945C22A32D9213E02_AdjustorThunk (void);
extern void TcpConfig__ctor_m3B466C6348A85028023F8C407D6D59681470E036_AdjustorThunk (void);
extern void TcpConfig_ApplyTo_m203C690889A24E887E2D7B39204D0E3052BFD81F_AdjustorThunk (void);
extern void SslConfig__ctor_m3EF0A6308C2B4E39929E39DC475660F02A6D86D1_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[13] = 
{
	{ 0x06000055, Message__ctor_m0B897F8C3A1659C2230D47A7295BE5A03FCB04D2_AdjustorThunk },
	{ 0x06000056, Message__ctor_m810777243F3A5556EA5EC68A2E62B061172C7F9A_AdjustorThunk },
	{ 0x06000057, Message__ctor_m6ABB36DE3FDDE755CA84516AB973DAC7DE6B8ABE_AdjustorThunk },
	{ 0x06000058, Message__ctor_m0A428AC6143E22A9286E9126135F52A809C961F9_AdjustorThunk },
	{ 0x06000059, Message__ctor_m79DE9A3AF251E3A2857A2C6A86EC589A8DDF5050_AdjustorThunk },
	{ 0x0600005A, Message__ctor_mF03CCA05732E965040A6ECD828FA51EE22BC610C_AdjustorThunk },
	{ 0x0600007A, Config__ctor_m991D60C316DD9DB9DAEB104B398083343282A37B_AdjustorThunk },
	{ 0x0600007B, Config_Deconstruct_m42477046BC5A6A1A23EB942BF757A9D704EA9DD6_AdjustorThunk },
	{ 0x06000080, Config__ctor_m11F15A229C4B99409EA078DC555A3A207CF04BA8_AdjustorThunk },
	{ 0x06000081, Config_Deconstruct_mB074FAE5296DB9EC0C942E3945C22A32D9213E02_AdjustorThunk },
	{ 0x06000085, TcpConfig__ctor_m3B466C6348A85028023F8C407D6D59681470E036_AdjustorThunk },
	{ 0x06000086, TcpConfig_ApplyTo_m203C690889A24E887E2D7B39204D0E3052BFD81F_AdjustorThunk },
	{ 0x06000092, SslConfig__ctor_m3EF0A6308C2B4E39929E39DC475660F02A6D86D1_AdjustorThunk },
};
static const int32_t s_InvokerIndices[213] = 
{
	3903,
	1404,
	3119,
	2660,
	2660,
	2660,
	2660,
	2660,
	2660,
	2660,
	2660,
	3193,
	2660,
	2660,
	3193,
	2454,
	1203,
	3193,
	1203,
	1140,
	3720,
	3193,
	911,
	2660,
	2660,
	2660,
	3193,
	2454,
	3193,
	3193,
	3193,
	4887,
	3447,
	4949,
	3699,
	1404,
	3170,
	2660,
	3193,
	2454,
	3193,
	3193,
	1490,
	3193,
	4949,
	4949,
	4087,
	4949,
	5030,
	2660,
	3119,
	2640,
	2640,
	1544,
	3193,
	3193,
	1544,
	2454,
	942,
	1490,
	2828,
	2640,
	2640,
	3140,
	2660,
	3193,
	3193,
	905,
	3193,
	2009,
	1551,
	3193,
	3140,
	5030,
	3917,
	3778,
	4561,
	4574,
	4574,
	4954,
	4574,
	4574,
	4954,
	5030,
	2640,
	2660,
	2660,
	1404,
	1419,
	1419,
	4890,
	4890,
	4890,
	4767,
	4767,
	4890,
	3774,
	3549,
	3375,
	3315,
	3860,
	4599,
	4090,
	4949,
	4498,
	3593,
	3719,
	3396,
	5030,
	3193,
	2305,
	2660,
	1570,
	4970,
	4612,
	4155,
	3801,
	3472,
	3801,
	3919,
	4216,
	288,
	251,
	5030,
	4971,
	3443,
	3587,
	945,
	877,
	3193,
	3193,
	1068,
	985,
	2660,
	5030,
	1544,
	3193,
	2305,
	2012,
	4890,
	1551,
	4561,
	4954,
	2012,
	4561,
	659,
	2696,
	2305,
	2012,
	577,
	278,
	3170,
	2687,
	2660,
	2660,
	2660,
	2660,
	2660,
	2660,
	2660,
	2660,
	2639,
	3193,
	1499,
	1322,
	2287,
	2009,
	3193,
	2660,
	312,
	2640,
	3193,
	3193,
	2660,
	2660,
	1419,
	2287,
	2009,
	3193,
	3193,
	3193,
	3193,
	3119,
	2640,
	3193,
	3181,
	3170,
	1892,
	3193,
	3193,
	3140,
	3140,
	3170,
	2660,
	3193,
	1260,
	3193,
	3170,
	3193,
	3193,
	2640,
	895,
	2009,
	3140,
	3193,
	3193,
	3193,
	2454,
	2660,
	1322,
	3990,
	4985,
	3193,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[4] = 
{
	{ 0x0600002D, 9,  (void**)&WebSocketClientWebGl_OpenCallback_m80F152EFB837C26E75206C1C4991E86D6D04AC80_RuntimeMethod_var, 0 },
	{ 0x0600002E, 6,  (void**)&WebSocketClientWebGl_CloseCallBack_m0398C2A1E6E502552227A580B26580A30980295E_RuntimeMethod_var, 0 },
	{ 0x0600002F, 8,  (void**)&WebSocketClientWebGl_MessageCallback_mA836C7ECF911CF67137207E422EF7E0C941935DE_RuntimeMethod_var, 0 },
	{ 0x06000030, 7,  (void**)&WebSocketClientWebGl_ErrorCallback_m790762F5A840B1AEBD3D588B567EBD6E92ABBDCF_RuntimeMethod_var, 0 },
};
extern const CustomAttributesCacheGenerator g_SimpleWebTransport_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_SimpleWebTransport_CodeGenModule;
const Il2CppCodeGenModule g_SimpleWebTransport_CodeGenModule = 
{
	"SimpleWebTransport.dll",
	213,
	s_methodPointers,
	13,
	s_adjustorThunks,
	s_InvokerIndices,
	4,
	s_reversePInvokeIndices,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_SimpleWebTransport_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
